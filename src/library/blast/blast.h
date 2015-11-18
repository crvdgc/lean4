/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <memory>
#include "kernel/environment.h"
#include "library/io_state.h"
#include "library/tmp_type_context.h"
#include "library/relation_manager.h"
#include "library/congr_lemma_manager.h"
#include "library/fun_info_manager.h"
#include "library/blast/state.h"

namespace lean {
struct projection_info;
class goal;
typedef std::unique_ptr<tmp_type_context> tmp_type_context_ptr;
namespace blast {
/** \brief Return the thread local environment being used by the blast tactic. */
environment const & env();
/** \brief Return the thread local io_state being used by the blast tactic. */
io_state const & ios();
/** \brief Return reference to blast thread local app_builder */
app_builder & get_app_builder();
/** \brief Return reference to the main type context used by the blast tactic */
type_context & get_type_context();
/** \brief Return the thread local current state being processed by the blast tactic. */
state & curr_state();
/** \brief Return a thread local fresh local constant. */
expr mk_fresh_local(expr const & type, binder_info const & bi = binder_info());
bool is_fresh_local(expr const & e);
/** \brief Return true iff the given constant name is marked as reducible in env() */
bool is_reducible(name const & n);
/** \brief Return a nonnull projection_info object if \c n is the name of a projection in env() */
projection_info const * get_projection_info(name const & n);
/** \brief Return true iff \c e is a relation application,
    and store the relation name, lhs and rhs in the output arguments. */
bool is_relation_app(expr const & e, name & rop, expr & lhs, expr & rhs);
bool is_relation_app(expr const & e);
optional<relation_info> get_relation_info(name const & rop);
inline optional<relation_info> is_relation(expr const & R) {
    return is_constant(R) ? get_relation_info(const_name(R)) : optional<relation_info>();
}
bool is_reflexive(name const & rop);

/** \brief Put the given expression in weak-head-normal-form with respect to the
    current state being processed by the blast tactic. */
expr whnf(expr const & e);
expr relaxed_whnf(expr const & e);
/** \brief Normalize the given expression using the blast type context.
    This procedure caches results.
    \remark This procedure is intended for normalizing instances that are not subsingletons. */
expr normalize(expr const & e);

/** \brief Return the type of the given expression with respect to the current state being
    processed by the blast tactic.

    \remark: (potential side-effect) this procedure may update the meta-variable assignment
    associated with the current state. */
expr infer_type(expr const & e);
/** \brief Return true if \c e is a Proposition */
bool is_prop(expr const & e);
/** \brief Return true iff the two expressions are definitionally equal in the
    current state being processed by the blast tactic.

    \remark: (potential side-effect) this procedure may update the meta-variable assignment
    associated with the current state. */
bool is_def_eq(expr const & e1, expr const & e2);
/** \brief Try to synthesize an element of the given type class with respect to the blast local context. */
optional<expr> mk_class_instance(expr const & e);

/** \brief Create a congruence lemma for the given function.
    \pre num_args <= arity of fn
    \remark The procedure may fail when app_builder used by it fails.
    Example: it fail to infer the type of fn.

    \remark The generated lemma is useful when performing rewriting.
    For congruence closure, we must use a different lemma generator, or
    at least, post-process the lemma generated by this procedure.

    \remark The type \c congr_lemma is defined at library/congr_lemma_manager.h */
optional<congr_lemma> mk_congr_lemma_for_simp(expr const & fn, unsigned num_args);
/** \brief Similar to previous procedure, but num_args == arith of fn */
optional<congr_lemma> mk_congr_lemma_for_simp(expr const & fn);

/** \brief Create a congruence lemma for the given function.
    \pre num_args <= arity of fn
    \remark The procedure may fail when app_builder used by it fails.
    Example: it fail to infer the type of fn.

    \remark The generated lemma is useful for proving that two terms
    that are definitionally equal upto subsingletons are propositionally
    equal.

    \remark The type \c congr_lemma is defined at library/congr_lemma_manager.h */
optional<congr_lemma> mk_congr_lemma(expr const & fn, unsigned num_args);
/** \brief Similar to previous procedure, but num_args == arith of fn */
optional<congr_lemma> mk_congr_lemma(expr const & fn);
optional<congr_lemma> mk_rel_iff_congr(expr const & fn);
optional<congr_lemma> mk_rel_eq_congr(expr const & fn);

/** \brief Retrieve information for the given function. */
fun_info get_fun_info(expr const & fn);
/** \brief Retrieve information for the given function.
    \pre nargs <= arity fn. */
fun_info get_fun_info(expr const & fn, unsigned nargs);

/** \brief Hash and equality test for abstract expressions */
unsigned abstract_hash(expr const & e);
bool abstract_is_equal(expr const & e1, expr const & e2);

/** \brief Display the current state of the blast tactic in the diagnostic channel. */
void display_curr_state();
/** \brief Display the given expression in the diagnostic channel. */
void display_expr(expr const & e);
/** \brief Display message in the blast tactic diagnostic channel. */
void display(char const * msg);
void display(sstream const & msg);
/**
    \brief Create a local scope for saving the assignment and
    metavariable declarations at curr_state() */
class scope_assignment {
    bool m_keep;
public:
    scope_assignment();
    ~scope_assignment();
    void commit();
};

/** \brief Auxiliary object for setting thread local storage associated with blast tactic.

    This is for debugging purposes only. It allow us to debug/test procedures that can
    only be invoked from blast. */
class scope_debug {
    struct imp;
    std::unique_ptr<imp> m_imp;
public:
    scope_debug(environment const & env, io_state const & ios);
    ~scope_debug();
};


/** \brief Create a temporary type_context that is compatible with blast.
    This temporary type context can acces the type of blast hypotheses
    and meta-variables. */
class blast_tmp_type_context {
    tmp_type_context * m_ctx;
public:
    blast_tmp_type_context(unsigned num_umeta, unsigned num_emeta);
    blast_tmp_type_context();
    ~blast_tmp_type_context();

    tmp_type_context const * operator->() const { return m_ctx; }
    tmp_type_context * operator->() { return m_ctx; }
    tmp_type_context const & operator*() const { return *m_ctx; }
    tmp_type_context & operator*() { return *m_ctx; }
};

class scope_curr_state {
    state m_saved;
    bool  m_keep;
public:
    scope_curr_state():m_saved(curr_state()), m_keep(false) {}
    ~scope_curr_state() { if (!m_keep) curr_state() = m_saved; }
    void commit() { m_keep = true; }
};

/**
    \brief Convert an external expression into a blast expression
    It converts meta-variables to blast meta-variables, and ensures the expressions
    are maximally shared.
    \remark This procedure should only be used for **debugging purposes**. */
expr internalize(expr const & e);
}
optional<expr> blast_goal(environment const & env, io_state const & ios, list<name> const & ls, list<name> const & ds,
                          goal const & g);
void initialize_blast();
void finalize_blast();
}
