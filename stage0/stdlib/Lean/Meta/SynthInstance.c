// Lean compiler output
// Module: Lean.Meta.SynthInstance
// Imports: Init Lean.Meta.Basic Lean.Meta.Instances Lean.Meta.LevelDefEq Lean.Meta.AbstractMVars Lean.Meta.WHNF
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__4;
lean_object* l_Lean_getConfig___at_Lean_Meta_synthInstanceImp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__3;
lean_object* l_Lean_Meta_maxStepsOption___closed__6;
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_getInstances___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkGeneratorNode_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_is_out_param(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_addAnswer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
extern lean_object* l_Lean_isLevelDefEq___rarg___lambda__2___closed__6;
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__7;
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Option_toLOption___rarg(lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__5;
lean_object* l___private_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__1;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp___closed__2;
lean_object* l___private_Lean_Meta_SynthInstance_6__preprocessOutParam___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__3;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__2;
lean_object* l_Lean_Meta_SynthInstance_generate___closed__5;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Meta_SynthInstance_4__preprocessLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__7;
extern lean_object* l_Std_HashMap_inhabited___closed__1;
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___closed__3;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp___closed__1;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_8__regTraceClasses(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___closed__5;
extern lean_object* l_Lean_inferTypeRef;
lean_object* l_Lean_Meta_SynthInstance_getResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Meta_maxStepsOption___closed__5;
extern lean_object* l_Lean_Format_flatten___main___closed__1;
lean_object* l_Lean_Meta_synthPendingImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_1__mkPanicMessage(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___closed__3;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8;
lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_6__preprocessOutParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___closed__1;
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_maxStepsOption(lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__9;
lean_object* l_Lean_Meta_SynthInstance_Answer_inhabited;
lean_object* l_Lean_Meta_SynthInstance_resume(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__4;
lean_object* l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__6(lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_splitAux___main___closed__1;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l___private_Lean_Meta_SynthInstance_3__preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey___closed__2;
lean_object* l_Lean_assignExprMVar___at_Lean_Meta_getLevel___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_maxStepsOption___closed__3;
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___rarg(lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_1__regTraceClasses___closed__2;
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___closed__1;
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__3;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__6;
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_2__addNode___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_getLCtx___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignableMVar___main(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__2;
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_6__liftMkBindingM___rarg___closed__3;
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(lean_object*);
lean_object* l_Lean_instantiateLevelMVars___at___private_Lean_Meta_InferType_12__isArrowProp___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___boxed(lean_object**);
extern lean_object* l_Lean_Meta_AbstractMVarsResult_inhabited___closed__1;
lean_object* l_Lean_Meta_setSynthPendingRef___closed__1;
uint8_t l_Lean_Meta_SynthInstance_Waiter_isRoot(lean_object*);
extern lean_object* l_Lean_Meta_isLevelDefEqAux___main___closed__7;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Exception_inhabited___closed__1;
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__6;
lean_object* l_Lean_synthInstance___rarg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* l_Lean_mkFreshLevelMVar___at___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Meta_SynthInstance_4__preprocessLevels___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate___closed__3;
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_main___spec__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mapMetaM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_update_max(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__5;
extern lean_object* l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
extern lean_object* l_Lean_Meta_isDefEqStuckExceptionId;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_modifyTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_hasInferTCGoalsLRAttribute___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__3;
size_t l_Lean_Name_hash(lean_object*);
lean_object* l_Nat_repr(lean_object*);
extern lean_object* l_Lean_MessageData_coeOfArrayExpr___closed__2;
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__7(lean_object*, size_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___lambda__1___boxed(lean_object**);
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1;
lean_object* l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_GeneratorNode_inhabited;
lean_object* l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___boxed(lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__2(lean_object*);
lean_object* l_Lean_Meta_getGlobalInstances___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__4;
extern size_t l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_1__getSubgoalsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setSynthPendingRef(lean_object*);
uint8_t l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__9;
size_t lean_usize_modn(size_t, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
lean_object* l_Lean_Meta_SynthInstance_resume___closed__5;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5;
lean_object* l_Lean_Meta_SynthInstance_newSubgoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_SynthInstance_resume___closed__3;
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___closed__7;
lean_object* l_Lean_KVMap_getNat(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___closed__4;
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1___boxed(lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__1;
lean_object* l_Lean_Meta_SynthInstance_getEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___closed__2;
uint8_t l_Lean_Meta_SynthInstance_hasInferTCGoalsLRAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___closed__1;
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__2;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__2;
lean_object* lean_level_update_imax(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__1;
lean_object* l_Lean_isExprMVarAssigned___at_Lean_Meta_synthPendingImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_synthInstance_x3f(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_4__preprocessLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1___boxed(lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2;
lean_object* l_Lean_Meta_SynthInstance_wakeUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Meta_SynthInstance_isNewAnswer(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__4;
lean_object* l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___closed__6;
lean_object* lean_expr_update_sort(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__1;
lean_object* l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__8;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
lean_object* l___private_Lean_Meta_Basic_15__isClassImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_2__mkAnswer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot___boxed(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_incDepth(lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp_x3f___closed__8;
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__5(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_16__forallTelescopeImpl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConfig___at_Lean_Meta_synthInstanceImp_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_synthInstance_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth___main___closed__2;
lean_object* l_Lean_Meta_SynthInstance_mkTableKey(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_isExprMVarAssigned___at_Lean_Meta_synthPendingImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_tryResolveCore___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_7__getMaxSteps(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_isNewAnswer___boxed(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_isLevelAssignable(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__1;
lean_object* l_Lean_Meta_SynthInstance_inferTCGoalsLRAttr;
lean_object* l_Lean_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Consumernode_inhabited;
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(lean_object*, lean_object*);
lean_object* lean_level_update_succ(lean_object*, lean_object*);
extern lean_object* l_Lean_isLevelDefEq___rarg___lambda__2___closed__9;
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__6;
lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_modifyTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate___closed__2;
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited;
lean_object* l_Lean_Meta_SynthInstance_generate___closed__1;
lean_object* l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1;
lean_object* l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_3__getResetTraces___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_maxStepsOption___closed__1;
lean_object* l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_trySynthInstance(lean_object*);
lean_object* l_Lean_getLCtx___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2;
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getLocalInstances___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__1;
lean_object* l_Lean_Meta_maxStepsOption___closed__2;
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_isExprAssignable(lean_object*, lean_object*);
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_trySynthInstance___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Answer_inhabited___closed__1;
lean_object* l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__1;
extern lean_object* l_Lean_Compiler_checkIsDefinition___closed__5;
extern lean_object* l_Lean_MetavarContext_Inhabited___closed__1;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Meta_SynthInstance_tryResolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_TagAttribute_Inhabited___closed__3;
lean_object* l_Lean_synthInstance(lean_object*);
lean_object* l_Lean_Meta_synthInstanceImp___closed__3;
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_tryResolveCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__2;
lean_object* l_Lean_Meta_SynthInstance_consume(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_5__preprocessArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_simpleMonadTracerAdapterLift___at_Lean_StateRefT_tracer___spec__1___rarg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstanceImp_x3f___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_1__getSubgoalsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___closed__4;
extern lean_object* l_Lean_synthPendingRef;
lean_object* l_Lean_Meta_trySynthInstanceImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__2;
lean_object* l___private_Lean_Meta_SynthInstance_4__preprocessLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__3;
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
lean_object* l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
extern lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__3;
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___closed__2;
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(lean_object*, lean_object*);
uint8_t lean_has_out_params(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Lean_SimpleMonadTracerAdapter;
lean_object* lean_expr_update_const(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__4;
lean_object* l_Lean_Meta_synthInstanceImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___closed__2;
lean_object* l_Lean_getMVarDecl___at_Lean_isReadOnlyExprMVar___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_7__getMaxSteps___boxed(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate___closed__4;
lean_object* l_Lean_Meta_SynthInstance_main___closed__1;
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__7___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___closed__1;
lean_object* l_Lean_Meta_SynthInstance_wakeUp___closed__3;
lean_object* l_Lean_Meta_maxStepsOption___closed__4;
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inferTCGoalsLR");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("instruct type class resolution procedure to solve goals from left to right for this instance");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___lambda__1___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__2;
x_3 = l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__3;
x_4 = l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__4;
x_5 = l_Lean_registerTagAttribute(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
uint8_t l_Lean_Meta_SynthInstance_hasInferTCGoalsLRAttribute(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Meta_SynthInstance_inferTCGoalsLRAttr;
x_4 = l_Lean_TagAttribute_hasTag(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_hasInferTCGoalsLRAttribute___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_SynthInstance_hasInferTCGoalsLRAttribute(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Expr_Inhabited___closed__1;
x_2 = l_Lean_MetavarContext_Inhabited___closed__1;
x_3 = l_Array_empty___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_Inhabited___closed__1;
x_3 = l_Lean_MetavarContext_Inhabited___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1;
return x_1;
}
}
uint8_t l_Lean_Meta_SynthInstance_Waiter_isRoot(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_SynthInstance_Waiter_isRoot(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__5(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__8(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_tc");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Level_hasMVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_6, x_2, x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_level_update_succ(x_1, x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_level_update_succ(x_1, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
case 2:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_2);
x_17 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_15, x_2, x_3);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_16, x_2, x_19);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_level_update_max(x_1, x_18, x_22);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_level_update_max(x_1, x_18, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
case 3:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_inc(x_2);
x_30 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_28, x_2, x_3);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_29, x_2, x_32);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_level_update_imax(x_1, x_31, x_35);
lean_ctor_set(x_33, 0, x_36);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_33, 0);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_33);
x_39 = lean_level_update_imax(x_1, x_31, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
case 5:
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
x_42 = l_Lean_MetavarContext_isLevelAssignable(x_2, x_41);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_3);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_1);
x_44 = lean_ctor_get(x_3, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_3, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_3, 2);
lean_inc(x_46);
x_47 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(x_45, x_41);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_3);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_49 = lean_ctor_get(x_3, 2);
lean_dec(x_49);
x_50 = lean_ctor_get(x_3, 1);
lean_dec(x_50);
x_51 = lean_ctor_get(x_3, 0);
lean_dec(x_51);
x_52 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_44);
x_53 = lean_name_mk_numeral(x_52, x_44);
x_54 = l_Lean_mkLevelParam(x_53);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_add(x_44, x_55);
lean_dec(x_44);
lean_inc(x_54);
x_57 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(x_45, x_41, x_54);
lean_ctor_set(x_3, 1, x_57);
lean_ctor_set(x_3, 0, x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_54);
lean_ctor_set(x_58, 1, x_3);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_3);
x_59 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_44);
x_60 = lean_name_mk_numeral(x_59, x_44);
x_61 = l_Lean_mkLevelParam(x_60);
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_44, x_62);
lean_dec(x_44);
lean_inc(x_61);
x_64 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__3(x_45, x_41, x_61);
x_65 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_46);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_61);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_41);
x_67 = lean_ctor_get(x_47, 0);
lean_inc(x_67);
lean_dec(x_47);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_3);
return x_68;
}
}
}
default: 
{
lean_object* x_69; 
lean_dec(x_2);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_1);
lean_ctor_set(x_69, 1, x_3);
return x_69;
}
}
}
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__5(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__8(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_9 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
lean_inc(x_2);
x_20 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Lean_MetavarContext_isExprAssignable(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(x_11, x_6);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_3, 2);
lean_dec(x_14);
x_15 = lean_ctor_get(x_3, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_3, 0);
lean_dec(x_16);
x_17 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_9);
x_18 = lean_name_mk_numeral(x_17, x_9);
x_19 = l_Lean_mkFVar(x_18);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_9, x_20);
lean_dec(x_9);
lean_inc(x_19);
x_22 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(x_11, x_6, x_19);
lean_ctor_set(x_3, 2, x_22);
lean_ctor_set(x_3, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_3);
x_24 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2;
lean_inc(x_9);
x_25 = lean_name_mk_numeral(x_24, x_9);
x_26 = l_Lean_mkFVar(x_25);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_9, x_27);
lean_dec(x_9);
lean_inc(x_26);
x_29 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__3(x_11, x_6, x_26);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_10);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
x_32 = lean_ctor_get(x_12, 0);
lean_inc(x_32);
lean_dec(x_12);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
}
}
case 3:
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main(x_34, x_2, x_3);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_expr_update_sort(x_1, x_37);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = lean_expr_update_sort(x_1, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
case 4:
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
x_44 = l_List_mapM___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__9(x_43, x_2, x_3);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_expr_update_const(x_1, x_46);
lean_ctor_set(x_44, 0, x_47);
return x_44;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_44, 0);
x_49 = lean_ctor_get(x_44, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_44);
x_50 = lean_expr_update_const(x_1, x_48);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
case 5:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
lean_inc(x_2);
x_54 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_52, x_2, x_3);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_53, x_2, x_56);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_57, 0);
x_60 = lean_expr_update_app(x_1, x_55, x_59);
lean_ctor_set(x_57, 0, x_60);
return x_57;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_57, 0);
x_62 = lean_ctor_get(x_57, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_57);
x_63 = lean_expr_update_app(x_1, x_55, x_61);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
case 6:
{
lean_object* x_65; lean_object* x_66; uint64_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_65 = lean_ctor_get(x_1, 1);
lean_inc(x_65);
x_66 = lean_ctor_get(x_1, 2);
lean_inc(x_66);
x_67 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_2);
x_68 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_65, x_2, x_3);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_66, x_2, x_70);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = (uint8_t)((x_67 << 24) >> 61);
x_75 = lean_expr_update_lambda(x_1, x_74, x_69, x_73);
lean_ctor_set(x_71, 0, x_75);
return x_71;
}
else
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_ctor_get(x_71, 0);
x_77 = lean_ctor_get(x_71, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_71);
x_78 = (uint8_t)((x_67 << 24) >> 61);
x_79 = lean_expr_update_lambda(x_1, x_78, x_69, x_76);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
case 7:
{
lean_object* x_81; lean_object* x_82; uint64_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_81 = lean_ctor_get(x_1, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_1, 2);
lean_inc(x_82);
x_83 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_2);
x_84 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_81, x_2, x_3);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_82, x_2, x_86);
x_88 = !lean_is_exclusive(x_87);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_87, 0);
x_90 = (uint8_t)((x_83 << 24) >> 61);
x_91 = lean_expr_update_forall(x_1, x_90, x_85, x_89);
lean_ctor_set(x_87, 0, x_91);
return x_87;
}
else
{
lean_object* x_92; lean_object* x_93; uint8_t x_94; lean_object* x_95; lean_object* x_96; 
x_92 = lean_ctor_get(x_87, 0);
x_93 = lean_ctor_get(x_87, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_87);
x_94 = (uint8_t)((x_83 << 24) >> 61);
x_95 = lean_expr_update_forall(x_1, x_94, x_85, x_92);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_93);
return x_96;
}
}
case 8:
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_97 = lean_ctor_get(x_1, 1);
lean_inc(x_97);
x_98 = lean_ctor_get(x_1, 2);
lean_inc(x_98);
x_99 = lean_ctor_get(x_1, 3);
lean_inc(x_99);
lean_inc(x_2);
x_100 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_97, x_2, x_3);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
lean_inc(x_2);
x_103 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_98, x_2, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_99, x_2, x_105);
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_106, 0);
x_109 = lean_expr_update_let(x_1, x_101, x_104, x_108);
lean_ctor_set(x_106, 0, x_109);
return x_106;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_106, 0);
x_111 = lean_ctor_get(x_106, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_106);
x_112 = lean_expr_update_let(x_1, x_101, x_104, x_110);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
case 10:
{
lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_114 = lean_ctor_get(x_1, 1);
lean_inc(x_114);
x_115 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_114, x_2, x_3);
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_115, 0);
x_118 = lean_expr_update_mdata(x_1, x_117);
lean_ctor_set(x_115, 0, x_118);
return x_115;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_119 = lean_ctor_get(x_115, 0);
x_120 = lean_ctor_get(x_115, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_115);
x_121 = lean_expr_update_mdata(x_1, x_119);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
case 11:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_123 = lean_ctor_get(x_1, 2);
lean_inc(x_123);
x_124 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_123, x_2, x_3);
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_124, 0);
x_127 = lean_expr_update_proj(x_1, x_126);
lean_ctor_set(x_124, 0, x_127);
return x_124;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_128 = lean_ctor_get(x_124, 0);
x_129 = lean_ctor_get(x_124, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_124);
x_130 = lean_expr_update_proj(x_1, x_128);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
default: 
{
lean_object* x_132; 
lean_dec(x_2);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_1);
lean_ctor_set(x_132, 1, x_3);
return x_132;
}
}
}
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___main___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_mkTableKey___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Meta_SynthInstance_mkTableKey___closed__1;
x_3 = l_Lean_Meta_SynthInstance_mkTableKey___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKey(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Meta_SynthInstance_mkTableKey___closed__3;
x_4 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr___main(x_2, x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_Answer_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AbstractMVarsResult_inhabited___closed__1;
x_2 = l_Lean_Expr_Inhabited___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_Answer_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SynthInstance_Answer_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Meta_SynthInstance_mapMetaM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_1(x_3, x_4);
x_11 = lean_apply_7(x_1, lean_box(0), x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Exception_inhabited___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_SynthM_inhabited___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_SynthM_inhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SynthInstance_SynthM_inhabited(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = l_Lean_mkFreshLevelMVar___at___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl___spec__1___rarg(x_3, x_4, x_5, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_10, x_2, x_3, x_4, x_5, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_13);
lean_ctor_set(x_15, 0, x_1);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_1, 1, x_18);
lean_ctor_set(x_1, 0, x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_Lean_mkFreshLevelMVar___at___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl___spec__1___rarg(x_3, x_4, x_5, x_6);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_21, x_2, x_3, x_4, x_5, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_28 = x_25;
} else {
 lean_dec_ref(x_25);
 x_28 = lean_box(0);
}
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_26);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Meta.SynthInstance");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("global instance is not a constant");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
x_2 = lean_unsigned_to_nat(174u);
x_3 = lean_unsigned_to_nat(13u);
x_4 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_2);
x_9 = lean_nat_dec_lt(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_10 = x_2;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_28; 
x_12 = lean_array_fget(x_2, x_1);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_fset(x_2, x_1, x_13);
x_28 = x_12;
if (lean_obj_tag(x_28) == 4)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
x_30 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_29, x_3, x_4, x_5, x_6, x_7);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_expr_update_const(x_28, x_32);
lean_ctor_set(x_30, 0, x_33);
x_15 = x_30;
goto block_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 0);
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_30);
x_36 = lean_expr_update_const(x_28, x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_15 = x_37;
goto block_27;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_28);
x_38 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main___closed__1;
x_39 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3;
x_40 = lean_panic_fn(x_38, x_39);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_41 = lean_apply_5(x_40, x_3, x_4, x_5, x_6, x_7);
x_15 = x_41;
goto block_27;
}
block_27:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_1, x_18);
x_20 = x_16;
x_21 = lean_array_fset(x_14, x_1, x_20);
lean_dec(x_1);
x_1 = x_19;
x_2 = x_21;
x_7 = x_17;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_array_fget(x_3, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_array_push(x_5, x_14);
x_4 = x_12;
x_5 = x_15;
goto _start;
}
}
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type class instance expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthInstance");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_1__regTraceClasses___closed__2;
x_2 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("globalInstances");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_2 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Format_flatten___main___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_nat_dec_lt(x_4, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_12 = l___private_Lean_Meta_Basic_15__isClassImpl_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_indentExpr(x_15);
x_17 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3;
x_18 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_18, x_5, x_6, x_7, x_8, x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = l_Lean_Meta_getGlobalInstances___rarg(x_8, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_25 = l_Lean_Meta_DiscrTree_getUnify___rarg(x_23, x_1, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = x_26;
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2), 7, 2);
lean_closure_set(x_30, 0, x_29);
lean_closure_set(x_30, 1, x_28);
x_31 = x_30;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_32 = lean_apply_5(x_31, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_45; lean_object* x_46; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_57 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_58 = lean_ctor_get(x_57, 2);
lean_inc(x_58);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_59 = lean_apply_5(x_58, x_5, x_6, x_7, x_8, x_34);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get_uint8(x_60, sizeof(void*)*1);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = 0;
x_45 = x_63;
x_46 = x_62;
goto block_56;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_dec(x_59);
x_65 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_66 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_65, x_5, x_6, x_7, x_8, x_64);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_unbox(x_67);
lean_dec(x_67);
x_45 = x_69;
x_46 = x_68;
goto block_56;
}
}
else
{
uint8_t x_70; 
lean_dec(x_33);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_59);
if (x_70 == 0)
{
return x_59;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_59, 0);
x_72 = lean_ctor_get(x_59, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_59);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
block_44:
{
lean_object* x_36; uint8_t x_37; 
x_36 = l_Lean_getLocalInstances___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__2(x_5, x_6, x_7, x_8, x_35);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_21, x_38, x_38, x_29, x_33);
lean_dec(x_38);
lean_dec(x_21);
lean_ctor_set(x_36, 0, x_39);
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_36, 0);
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_36);
x_42 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_21, x_40, x_40, x_29, x_33);
lean_dec(x_40);
lean_dec(x_21);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
block_56:
{
if (x_45 == 0)
{
lean_dec(x_1);
x_35 = x_46;
goto block_44;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_1);
x_48 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8;
x_49 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_51 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_33, x_29, x_50);
x_52 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_54 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_53, x_52, x_5, x_6, x_7, x_8, x_46);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_35 = x_55;
goto block_44;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_32);
if (x_74 == 0)
{
return x_32;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_32, 0);
x_76 = lean_ctor_get(x_32, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_32);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_25);
if (x_78 == 0)
{
return x_25;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_25, 0);
x_80 = lean_ctor_get(x_25, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_25);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_12);
if (x_82 == 0)
{
return x_12;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_12, 0);
x_84 = lean_ctor_get(x_12, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_12);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_array_fget(x_3, x_4);
x_87 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_86, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_LocalDecl_type(x_88);
lean_dec(x_88);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_90);
x_91 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_90, x_5, x_6, x_7, x_8, x_89);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
switch (lean_obj_tag(x_92)) {
case 0:
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_90);
lean_dec(x_86);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_unsigned_to_nat(1u);
x_95 = lean_nat_add(x_4, x_94);
lean_dec(x_4);
x_4 = x_95;
x_9 = x_93;
goto _start;
}
case 1:
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_90);
x_97 = lean_ctor_get(x_91, 1);
lean_inc(x_97);
lean_dec(x_91);
x_98 = lean_ctor_get(x_92, 0);
lean_inc(x_98);
lean_dec(x_92);
x_99 = lean_unsigned_to_nat(1u);
x_100 = lean_nat_add(x_4, x_99);
lean_dec(x_4);
x_101 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_97);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_ctor_get(x_5, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_5, 1);
lean_inc(x_105);
x_106 = lean_ctor_get(x_5, 2);
lean_inc(x_106);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_98);
lean_ctor_set(x_107, 1, x_86);
x_108 = lean_array_push(x_106, x_107);
x_109 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_109, 0, x_104);
lean_ctor_set(x_109, 1, x_105);
lean_ctor_set(x_109, 2, x_108);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_110 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6(x_1, x_2, x_3, x_100, x_109, x_6, x_7, x_8, x_103);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = l_Lean_restoreSynthInstanceCache(x_102, x_5, x_6, x_7, x_8, x_112);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_114 = !lean_is_exclusive(x_113);
if (x_114 == 0)
{
lean_object* x_115; 
x_115 = lean_ctor_get(x_113, 0);
lean_dec(x_115);
lean_ctor_set(x_113, 0, x_111);
return x_113;
}
else
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
lean_dec(x_113);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_111);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_118 = lean_ctor_get(x_110, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_110, 1);
lean_inc(x_119);
lean_dec(x_110);
x_120 = l_Lean_restoreSynthInstanceCache(x_102, x_5, x_6, x_7, x_8, x_119);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_120, 0);
lean_dec(x_122);
lean_ctor_set_tag(x_120, 1);
lean_ctor_set(x_120, 0, x_118);
return x_120;
}
else
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_123);
lean_dec(x_120);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_118);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
default: 
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_91, 1);
lean_inc(x_125);
lean_dec(x_91);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_126 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_90, x_5, x_6, x_7, x_8, x_125);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_86);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_unsigned_to_nat(1u);
x_130 = lean_nat_add(x_4, x_129);
lean_dec(x_4);
x_4 = x_130;
x_9 = x_128;
goto _start;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_132 = lean_ctor_get(x_126, 1);
lean_inc(x_132);
lean_dec(x_126);
x_133 = lean_ctor_get(x_127, 0);
lean_inc(x_133);
lean_dec(x_127);
x_134 = lean_unsigned_to_nat(1u);
x_135 = lean_nat_add(x_4, x_134);
lean_dec(x_4);
x_136 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_132);
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_139 = lean_ctor_get(x_5, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_5, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_5, 2);
lean_inc(x_141);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_133);
lean_ctor_set(x_142, 1, x_86);
x_143 = lean_array_push(x_141, x_142);
x_144 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_144, 0, x_139);
lean_ctor_set(x_144, 1, x_140);
lean_ctor_set(x_144, 2, x_143);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_145 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6(x_1, x_2, x_3, x_135, x_144, x_6, x_7, x_8, x_138);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = l_Lean_restoreSynthInstanceCache(x_137, x_5, x_6, x_7, x_8, x_147);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_149 = !lean_is_exclusive(x_148);
if (x_149 == 0)
{
lean_object* x_150; 
x_150 = lean_ctor_get(x_148, 0);
lean_dec(x_150);
lean_ctor_set(x_148, 0, x_146);
return x_148;
}
else
{
lean_object* x_151; lean_object* x_152; 
x_151 = lean_ctor_get(x_148, 1);
lean_inc(x_151);
lean_dec(x_148);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_146);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_153 = lean_ctor_get(x_145, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_145, 1);
lean_inc(x_154);
lean_dec(x_145);
x_155 = l_Lean_restoreSynthInstanceCache(x_137, x_5, x_6, x_7, x_8, x_154);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_155, 0);
lean_dec(x_157);
lean_ctor_set_tag(x_155, 1);
lean_ctor_set(x_155, 0, x_153);
return x_155;
}
else
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_155, 1);
lean_inc(x_158);
lean_dec(x_155);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_153);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
}
else
{
uint8_t x_160; 
lean_dec(x_86);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_160 = !lean_is_exclusive(x_126);
if (x_160 == 0)
{
return x_126;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_126, 0);
x_162 = lean_ctor_get(x_126, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_126);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
}
}
else
{
uint8_t x_164; 
lean_dec(x_90);
lean_dec(x_86);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_164 = !lean_is_exclusive(x_91);
if (x_164 == 0)
{
return x_91;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_91, 0);
x_166 = lean_ctor_get(x_91, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_91);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
else
{
uint8_t x_168; 
lean_dec(x_86);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_168 = !lean_is_exclusive(x_87);
if (x_168 == 0)
{
return x_87;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_87, 0);
x_170 = lean_ctor_get(x_87, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_87);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isForall(x_7);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_14 = l___private_Lean_Meta_Basic_15__isClassImpl_x3f(x_1, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = l_Lean_indentExpr(x_17);
x_19 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3;
x_20 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_20, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
lean_dec(x_15);
x_24 = l_Lean_Meta_getGlobalInstances___rarg(x_11, x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_27 = l_Lean_Meta_DiscrTree_getUnify___rarg(x_25, x_1, x_8, x_9, x_10, x_11, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = x_28;
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2), 7, 2);
lean_closure_set(x_32, 0, x_31);
lean_closure_set(x_32, 1, x_30);
x_33 = x_32;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_34 = lean_apply_5(x_33, x_8, x_9, x_10, x_11, x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_47; lean_object* x_48; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_59 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_60 = lean_ctor_get(x_59, 2);
lean_inc(x_60);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_61 = lean_apply_5(x_60, x_8, x_9, x_10, x_11, x_36);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get_uint8(x_62, sizeof(void*)*1);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; uint8_t x_65; 
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = 0;
x_47 = x_65;
x_48 = x_64;
goto block_58;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
lean_dec(x_61);
x_67 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_68 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_67, x_8, x_9, x_10, x_11, x_66);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_47 = x_71;
x_48 = x_70;
goto block_58;
}
}
else
{
uint8_t x_72; 
lean_dec(x_35);
lean_dec(x_23);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_61);
if (x_72 == 0)
{
return x_61;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_61, 0);
x_74 = lean_ctor_get(x_61, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_61);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
block_46:
{
lean_object* x_38; uint8_t x_39; 
x_38 = l_Lean_getLocalInstances___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__2(x_8, x_9, x_10, x_11, x_37);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_23, x_40, x_40, x_31, x_35);
lean_dec(x_40);
lean_dec(x_23);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_38, 0);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_38);
x_44 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_23, x_42, x_42, x_31, x_35);
lean_dec(x_42);
lean_dec(x_23);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
block_58:
{
if (x_47 == 0)
{
lean_dec(x_1);
x_37 = x_48;
goto block_46;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_1);
x_50 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8;
x_51 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_53 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_35, x_31, x_52);
x_54 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_56 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_55, x_54, x_8, x_9, x_10, x_11, x_48);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_37 = x_57;
goto block_46;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_23);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_76 = !lean_is_exclusive(x_34);
if (x_76 == 0)
{
return x_34;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_34, 0);
x_78 = lean_ctor_get(x_34, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_34);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_23);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_27);
if (x_80 == 0)
{
return x_27;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_27, 0);
x_82 = lean_ctor_get(x_27, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_27);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_14);
if (x_84 == 0)
{
return x_14;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_14, 0);
x_86 = lean_ctor_get(x_14, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_14);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
lean_object* x_88; 
lean_dec(x_1);
x_88 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__5(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_88;
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_inc(x_8);
x_17 = lean_alloc_closure((void*)(l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2), 6, 1);
lean_closure_set(x_17, 0, x_8);
x_18 = lean_box(x_1);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_8);
x_19 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___lambda__1___boxed), 12, 6);
lean_closure_set(x_19, 0, x_8);
lean_closure_set(x_19, 1, x_18);
lean_closure_set(x_19, 2, x_2);
lean_closure_set(x_19, 3, x_3);
lean_closure_set(x_19, 4, x_4);
lean_closure_set(x_19, 5, x_7);
x_20 = lean_array_get_size(x_10);
x_21 = lean_nat_dec_lt(x_11, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = l_ReaderT_bind___at_Lean_getLCtx___spec__2___rarg(x_17, x_19, x_12, x_13, x_14, x_15, x_16);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_19);
lean_dec(x_17);
x_23 = lean_array_fget(x_10, x_11);
x_24 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_23, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_LocalDecl_type(x_25);
lean_dec(x_25);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_27);
x_28 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_27, x_12, x_13, x_14, x_15, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
switch (lean_obj_tag(x_29)) {
case 0:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
lean_dec(x_23);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_11, x_31);
lean_dec(x_11);
x_11 = x_32;
x_16 = x_30;
goto _start;
}
case 1:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_27);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
lean_dec(x_29);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_11, x_36);
lean_dec(x_11);
x_38 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_13, x_14, x_15, x_34);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_12, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_12, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_12, 2);
lean_inc(x_43);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set(x_44, 1, x_23);
x_45 = lean_array_push(x_43, x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_45);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_47 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_37, x_46, x_13, x_14, x_15, x_40);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_restoreSynthInstanceCache(x_39, x_12, x_13, x_14, x_15, x_49);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 0);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_48);
return x_50;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_47, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_47, 1);
lean_inc(x_56);
lean_dec(x_47);
x_57 = l_Lean_restoreSynthInstanceCache(x_39, x_12, x_13, x_14, x_15, x_56);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set_tag(x_57, 1);
lean_ctor_set(x_57, 0, x_55);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
default: 
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_28, 1);
lean_inc(x_62);
lean_dec(x_28);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_63 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_27, x_12, x_13, x_14, x_15, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_23);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_add(x_11, x_66);
lean_dec(x_11);
x_11 = x_67;
x_16 = x_65;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_69 = lean_ctor_get(x_63, 1);
lean_inc(x_69);
lean_dec(x_63);
x_70 = lean_ctor_get(x_64, 0);
lean_inc(x_70);
lean_dec(x_64);
x_71 = lean_unsigned_to_nat(1u);
x_72 = lean_nat_add(x_11, x_71);
lean_dec(x_11);
x_73 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_13, x_14, x_15, x_69);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_ctor_get(x_12, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_12, 1);
lean_inc(x_77);
x_78 = lean_ctor_get(x_12, 2);
lean_inc(x_78);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_70);
lean_ctor_set(x_79, 1, x_23);
x_80 = lean_array_push(x_78, x_79);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_76);
lean_ctor_set(x_81, 1, x_77);
lean_ctor_set(x_81, 2, x_80);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_82 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_72, x_81, x_13, x_14, x_15, x_75);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_Lean_restoreSynthInstanceCache(x_74, x_12, x_13, x_14, x_15, x_84);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; 
x_87 = lean_ctor_get(x_85, 0);
lean_dec(x_87);
lean_ctor_set(x_85, 0, x_83);
return x_85;
}
else
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
lean_dec(x_85);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_83);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_82, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_82, 1);
lean_inc(x_91);
lean_dec(x_82);
x_92 = l_Lean_restoreSynthInstanceCache(x_74, x_12, x_13, x_14, x_15, x_91);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_93 = !lean_is_exclusive(x_92);
if (x_93 == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_92, 0);
lean_dec(x_94);
lean_ctor_set_tag(x_92, 1);
lean_ctor_set(x_92, 0, x_90);
return x_92;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_95);
lean_dec(x_92);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_23);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_97 = !lean_is_exclusive(x_63);
if (x_97 == 0)
{
return x_63;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_63, 0);
x_99 = lean_ctor_get(x_63, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_63);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_101 = !lean_is_exclusive(x_28);
if (x_101 == 0)
{
return x_28;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_28, 0);
x_103 = lean_ctor_get(x_28, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_28);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_23);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = !lean_is_exclusive(x_24);
if (x_105 == 0)
{
return x_24;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_24, 0);
x_107 = lean_ctor_get(x_24, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_24);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_2);
x_10 = lean_nat_dec_lt(x_3, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_11 = l___private_Lean_Meta_Basic_15__isClassImpl_x3f(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_1);
x_15 = l_Lean_indentExpr(x_14);
x_16 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3;
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_17, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
x_21 = l_Lean_Meta_getGlobalInstances___rarg(x_7, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_24 = l_Lean_Meta_DiscrTree_getUnify___rarg(x_22, x_1, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = x_25;
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2), 7, 2);
lean_closure_set(x_29, 0, x_28);
lean_closure_set(x_29, 1, x_27);
x_30 = x_29;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = lean_apply_5(x_30, x_4, x_5, x_6, x_7, x_26);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_44; lean_object* x_45; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_56 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_57 = lean_ctor_get(x_56, 2);
lean_inc(x_57);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_58 = lean_apply_5(x_57, x_4, x_5, x_6, x_7, x_33);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get_uint8(x_59, sizeof(void*)*1);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
lean_dec(x_58);
x_62 = 0;
x_44 = x_62;
x_45 = x_61;
goto block_55;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_63 = lean_ctor_get(x_58, 1);
lean_inc(x_63);
lean_dec(x_58);
x_64 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_65 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_64, x_4, x_5, x_6, x_7, x_63);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_unbox(x_66);
lean_dec(x_66);
x_44 = x_68;
x_45 = x_67;
goto block_55;
}
}
else
{
uint8_t x_69; 
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_58);
if (x_69 == 0)
{
return x_58;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_58, 0);
x_71 = lean_ctor_get(x_58, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_58);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
block_43:
{
lean_object* x_35; uint8_t x_36; 
x_35 = l_Lean_getLocalInstances___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__2(x_4, x_5, x_6, x_7, x_34);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_20, x_37, x_37, x_28, x_32);
lean_dec(x_37);
lean_dec(x_20);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_20, x_39, x_39, x_28, x_32);
lean_dec(x_39);
lean_dec(x_20);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
block_55:
{
if (x_44 == 0)
{
lean_dec(x_1);
x_34 = x_45;
goto block_43;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_1);
x_47 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8;
x_48 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_50 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_32, x_28, x_49);
x_51 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_53 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_52, x_51, x_4, x_5, x_6, x_7, x_45);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_34 = x_54;
goto block_43;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_31);
if (x_73 == 0)
{
return x_31;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_31, 0);
x_75 = lean_ctor_get(x_31, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_31);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_24);
if (x_77 == 0)
{
return x_24;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_24, 0);
x_79 = lean_ctor_get(x_24, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_24);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_11);
if (x_81 == 0)
{
return x_11;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_11, 0);
x_83 = lean_ctor_get(x_11, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_11);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_array_fget(x_2, x_3);
x_86 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_85, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_LocalDecl_type(x_87);
lean_dec(x_87);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_89);
x_90 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_89, x_4, x_5, x_6, x_7, x_88);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
switch (lean_obj_tag(x_91)) {
case 0:
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_89);
lean_dec(x_85);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_unsigned_to_nat(1u);
x_94 = lean_nat_add(x_3, x_93);
lean_dec(x_3);
x_3 = x_94;
x_8 = x_92;
goto _start;
}
case 1:
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_89);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_dec(x_90);
x_97 = lean_ctor_get(x_91, 0);
lean_inc(x_97);
lean_dec(x_91);
x_98 = lean_unsigned_to_nat(1u);
x_99 = lean_nat_add(x_3, x_98);
lean_dec(x_3);
x_100 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_96);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_ctor_get(x_4, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_4, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_4, 2);
lean_inc(x_105);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_97);
lean_ctor_set(x_106, 1, x_85);
x_107 = lean_array_push(x_105, x_106);
x_108 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_108, 0, x_103);
lean_ctor_set(x_108, 1, x_104);
lean_ctor_set(x_108, 2, x_107);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_109 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8(x_1, x_2, x_99, x_108, x_5, x_6, x_7, x_102);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = l_Lean_restoreSynthInstanceCache(x_101, x_4, x_5, x_6, x_7, x_111);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_113 = !lean_is_exclusive(x_112);
if (x_113 == 0)
{
lean_object* x_114; 
x_114 = lean_ctor_get(x_112, 0);
lean_dec(x_114);
lean_ctor_set(x_112, 0, x_110);
return x_112;
}
else
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
lean_dec(x_112);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_110);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_117 = lean_ctor_get(x_109, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_109, 1);
lean_inc(x_118);
lean_dec(x_109);
x_119 = l_Lean_restoreSynthInstanceCache(x_101, x_4, x_5, x_6, x_7, x_118);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_120 = !lean_is_exclusive(x_119);
if (x_120 == 0)
{
lean_object* x_121; 
x_121 = lean_ctor_get(x_119, 0);
lean_dec(x_121);
lean_ctor_set_tag(x_119, 1);
lean_ctor_set(x_119, 0, x_117);
return x_119;
}
else
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_119, 1);
lean_inc(x_122);
lean_dec(x_119);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_117);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
default: 
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_90, 1);
lean_inc(x_124);
lean_dec(x_90);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_125 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_89, x_4, x_5, x_6, x_7, x_124);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_85);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_unsigned_to_nat(1u);
x_129 = lean_nat_add(x_3, x_128);
lean_dec(x_3);
x_3 = x_129;
x_8 = x_127;
goto _start;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_131 = lean_ctor_get(x_125, 1);
lean_inc(x_131);
lean_dec(x_125);
x_132 = lean_ctor_get(x_126, 0);
lean_inc(x_132);
lean_dec(x_126);
x_133 = lean_unsigned_to_nat(1u);
x_134 = lean_nat_add(x_3, x_133);
lean_dec(x_3);
x_135 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_131);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = lean_ctor_get(x_4, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_4, 1);
lean_inc(x_139);
x_140 = lean_ctor_get(x_4, 2);
lean_inc(x_140);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_132);
lean_ctor_set(x_141, 1, x_85);
x_142 = lean_array_push(x_140, x_141);
x_143 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_139);
lean_ctor_set(x_143, 2, x_142);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_144 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8(x_1, x_2, x_134, x_143, x_5, x_6, x_7, x_137);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = l_Lean_restoreSynthInstanceCache(x_136, x_4, x_5, x_6, x_7, x_146);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_147, 0);
lean_dec(x_149);
lean_ctor_set(x_147, 0, x_145);
return x_147;
}
else
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
lean_dec(x_147);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_145);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_152 = lean_ctor_get(x_144, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_144, 1);
lean_inc(x_153);
lean_dec(x_144);
x_154 = l_Lean_restoreSynthInstanceCache(x_136, x_4, x_5, x_6, x_7, x_153);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_155 = !lean_is_exclusive(x_154);
if (x_155 == 0)
{
lean_object* x_156; 
x_156 = lean_ctor_get(x_154, 0);
lean_dec(x_156);
lean_ctor_set_tag(x_154, 1);
lean_ctor_set(x_154, 0, x_152);
return x_154;
}
else
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_154, 1);
lean_inc(x_157);
lean_dec(x_154);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_152);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
else
{
uint8_t x_159; 
lean_dec(x_85);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_159 = !lean_is_exclusive(x_125);
if (x_159 == 0)
{
return x_125;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_125, 0);
x_161 = lean_ctor_get(x_125, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_125);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_89);
lean_dec(x_85);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_90);
if (x_163 == 0)
{
return x_90;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_90, 0);
x_165 = lean_ctor_get(x_90, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_90);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_85);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_167 = !lean_is_exclusive(x_86);
if (x_167 == 0)
{
return x_86;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_86, 0);
x_169 = lean_ctor_get(x_86, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_86);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__5(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
if (lean_obj_tag(x_6) == 7)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint64_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_29 = lean_ctor_get(x_6, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_6, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_6, 2);
lean_inc(x_31);
x_32 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_33 = lean_array_get_size(x_4);
x_34 = lean_expr_instantiate_rev_range(x_30, x_5, x_33, x_4);
lean_dec(x_33);
lean_dec(x_30);
x_35 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = (uint8_t)((x_32 << 24) >> 61);
lean_inc(x_36);
x_39 = lean_local_ctx_mk_local_decl(x_3, x_36, x_29, x_34, x_38);
x_40 = l_Lean_mkFVar(x_36);
x_41 = lean_array_push(x_4, x_40);
x_3 = x_39;
x_4 = x_41;
x_6 = x_31;
x_11 = x_37;
goto _start;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint64_t x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_43 = lean_ctor_get(x_6, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_6, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_6, 2);
lean_inc(x_45);
x_46 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
x_47 = lean_ctor_get(x_2, 0);
lean_inc(x_47);
x_48 = lean_array_get_size(x_4);
x_49 = lean_nat_dec_lt(x_48, x_47);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_2);
x_50 = lean_expr_instantiate_rev_range(x_6, x_5, x_48, x_4);
lean_dec(x_48);
lean_dec(x_6);
x_51 = !lean_is_exclusive(x_7);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_7, 1);
lean_dec(x_52);
lean_ctor_set(x_7, 1, x_3);
x_53 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8(x_50, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_7, 0);
x_55 = lean_ctor_get(x_7, 2);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_7);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_3);
lean_ctor_set(x_56, 2, x_55);
x_57 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8(x_50, x_4, x_5, x_56, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_6);
x_58 = lean_expr_instantiate_rev_range(x_44, x_5, x_48, x_4);
lean_dec(x_48);
lean_dec(x_44);
x_59 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = (uint8_t)((x_46 << 24) >> 61);
lean_inc(x_60);
x_63 = lean_local_ctx_mk_local_decl(x_3, x_60, x_43, x_58, x_62);
x_64 = l_Lean_mkFVar(x_60);
x_65 = lean_array_push(x_4, x_64);
x_3 = x_63;
x_4 = x_65;
x_6 = x_45;
x_11 = x_61;
goto _start;
}
}
}
else
{
lean_object* x_67; 
x_67 = lean_box(0);
x_12 = x_67;
goto block_28;
}
block_28:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_12);
x_13 = lean_array_get_size(x_4);
x_14 = lean_expr_instantiate_rev_range(x_6, x_5, x_13, x_4);
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_7, 1);
lean_dec(x_16);
lean_inc(x_3);
lean_ctor_set(x_7, 1, x_3);
if (x_1 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_17 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__2;
x_18 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6(x_14, x_17, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__2;
lean_inc(x_5);
lean_inc(x_4);
x_20 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_14, x_19, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 2);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
lean_inc(x_3);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_3);
lean_ctor_set(x_23, 2, x_22);
if (x_1 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_24 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__2;
x_25 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6(x_14, x_24, x_4, x_5, x_23, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__2;
lean_inc(x_5);
lean_inc(x_4);
x_27 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_14, x_26, x_4, x_5, x_23, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_27;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_getInstances___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Expr_isForall(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_12 = l___private_Lean_Meta_Basic_15__isClassImpl_x3f(x_1, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_indentExpr(x_15);
x_17 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3;
x_18 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_18, x_3, x_4, x_5, x_6, x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = l_Lean_Meta_getGlobalInstances___rarg(x_6, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_25 = l_Lean_Meta_DiscrTree_getUnify___rarg(x_23, x_1, x_3, x_4, x_5, x_6, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = x_26;
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2), 7, 2);
lean_closure_set(x_30, 0, x_29);
lean_closure_set(x_30, 1, x_28);
x_31 = x_30;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_32 = lean_apply_5(x_31, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_45; lean_object* x_46; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_57 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_58 = lean_ctor_get(x_57, 2);
lean_inc(x_58);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_59 = lean_apply_5(x_58, x_3, x_4, x_5, x_6, x_34);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get_uint8(x_60, sizeof(void*)*1);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = 0;
x_45 = x_63;
x_46 = x_62;
goto block_56;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_dec(x_59);
x_65 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_66 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_65, x_3, x_4, x_5, x_6, x_64);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_unbox(x_67);
lean_dec(x_67);
x_45 = x_69;
x_46 = x_68;
goto block_56;
}
}
else
{
uint8_t x_70; 
lean_dec(x_33);
lean_dec(x_21);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_59);
if (x_70 == 0)
{
return x_59;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_59, 0);
x_72 = lean_ctor_get(x_59, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_59);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
block_44:
{
lean_object* x_36; uint8_t x_37; 
x_36 = l_Lean_getLocalInstances___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__2(x_3, x_4, x_5, x_6, x_35);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_21, x_38, x_38, x_29, x_33);
lean_dec(x_38);
lean_dec(x_21);
lean_ctor_set(x_36, 0, x_39);
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_36, 0);
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_36);
x_42 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_21, x_40, x_40, x_29, x_33);
lean_dec(x_40);
lean_dec(x_21);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
block_56:
{
if (x_45 == 0)
{
lean_dec(x_1);
x_35 = x_46;
goto block_44;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_1);
x_48 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8;
x_49 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_51 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_33, x_29, x_50);
x_52 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_54 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_53, x_52, x_3, x_4, x_5, x_6, x_46);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_35 = x_55;
goto block_44;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_21);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_32);
if (x_74 == 0)
{
return x_32;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_32, 0);
x_76 = lean_ctor_get(x_32, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_32);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_21);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_25);
if (x_78 == 0)
{
return x_25;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_25, 0);
x_80 = lean_ctor_get(x_25, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_25);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_12);
if (x_82 == 0)
{
return x_12;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_12, 0);
x_84 = lean_ctor_get(x_12, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_12);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_1);
x_86 = l_Lean_getLCtx___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__1(x_3, x_4, x_5, x_6, x_10);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = 1;
x_90 = l_Array_empty___closed__1;
x_91 = lean_unsigned_to_nat(0u);
x_92 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__5(x_89, x_2, x_87, x_90, x_91, x_9, x_3, x_4, x_5, x_6, x_88);
return x_92;
}
}
else
{
uint8_t x_93; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_8);
if (x_93 == 0)
{
return x_8;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_8, 0);
x_95 = lean_ctor_get(x_8, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_8);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_getInstances___spec__4(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_mapM___main___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___lambda__1(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_1);
lean_dec(x_1);
x_18 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__7(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
return x_18;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__5(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkGeneratorNode_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_9, x_3, x_4, x_5, x_6, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = l_Lean_Meta_SynthInstance_getInstances(x_12, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = l_Array_isEmpty___rarg(x_16);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
lean_free_object(x_14);
x_19 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_4, x_5, x_6, x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_array_get_size(x_16);
x_23 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_23, 0, x_2);
lean_ctor_set(x_23, 1, x_1);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set(x_23, 3, x_16);
lean_ctor_set(x_23, 4, x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_array_get_size(x_16);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_1);
lean_ctor_set(x_28, 2, x_25);
lean_ctor_set(x_28, 3, x_16);
lean_ctor_set(x_28, 4, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_26);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_box(0);
lean_ctor_set(x_14, 0, x_31);
return x_14;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_14, 0);
x_33 = lean_ctor_get(x_14, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_14);
x_34 = l_Array_isEmpty___rarg(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_4, x_5, x_6, x_33);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_38 = x_35;
} else {
 lean_dec_ref(x_35);
 x_38 = lean_box(0);
}
x_39 = lean_array_get_size(x_32);
x_40 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_40, 0, x_2);
lean_ctor_set(x_40, 1, x_1);
lean_ctor_set(x_40, 2, x_36);
lean_ctor_set(x_40, 3, x_32);
lean_ctor_set(x_40, 4, x_39);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
if (lean_is_scalar(x_38)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_38;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_37);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_32);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_33);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_14);
if (x_45 == 0)
{
return x_14;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_8);
if (x_49 == 0)
{
return x_8;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_8, 0);
x_51 = lean_ctor_get(x_8, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_8);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
uint8_t l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_expr_eqv(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Expr_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Expr_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_expr_eqv(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_expr_eqv(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Expr_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Expr_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* _init_l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter;
x_2 = l_Lean_simpleMonadTracerAdapterLift___at_Lean_StateRefT_tracer___spec__1___rarg(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_apply_6(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_checkTraceOption(x_12, x_1);
lean_dec(x_12);
x_14 = lean_box(x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = l_Lean_checkTraceOption(x_15, x_1);
lean_dec(x_15);
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
x_7 = l_Std_PersistentArray_push___rarg(x_5, x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_2);
x_11 = l_Std_PersistentArray_push___rarg(x_9, x_10);
x_12 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_8);
return x_12;
}
}
}
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_7(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
x_15 = lean_alloc_closure((void*)(l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8___lambda__1), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_12);
x_16 = lean_apply_7(x_14, x_15, x_3, x_4, x_5, x_6, x_7, x_13);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_11);
if (x_17 == 0)
{
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("newSubgoal");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_2 = l_Lean_Meta_SynthInstance_newSubgoal___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_55; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_11 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
x_13 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_7, x_8, x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_91 = lean_st_ref_take(x_7, x_15);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = !lean_is_exclusive(x_92);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_95 = lean_ctor_get(x_92, 0);
lean_dec(x_95);
lean_ctor_set(x_92, 0, x_1);
x_96 = lean_st_ref_set(x_7, x_92, x_93);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_98 = lean_apply_6(x_12, x_5, x_6, x_7, x_8, x_9, x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; uint8_t x_100; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get_uint8(x_99, sizeof(void*)*1);
lean_dec(x_99);
if (x_100 == 0)
{
lean_object* x_101; 
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
lean_dec(x_98);
x_55 = x_101;
goto block_90;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
lean_dec(x_98);
x_103 = l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_104 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_103, x_5, x_6, x_7, x_8, x_9, x_102);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; uint8_t x_106; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_unbox(x_105);
lean_dec(x_105);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_104, 1);
lean_inc(x_107);
lean_dec(x_104);
x_55 = x_107;
goto block_90;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_104, 1);
lean_inc(x_108);
lean_dec(x_104);
lean_inc(x_2);
x_109 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_109, 0, x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_110 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_103, x_109, x_5, x_6, x_7, x_8, x_9, x_108);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
lean_dec(x_110);
x_55 = x_111;
goto block_90;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_112 = lean_ctor_get(x_110, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_110, 1);
lean_inc(x_113);
lean_dec(x_110);
x_114 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_114, 0, x_112);
x_16 = x_114;
x_17 = x_113;
goto block_54;
}
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_115 = lean_ctor_get(x_104, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_104, 1);
lean_inc(x_116);
lean_dec(x_104);
x_117 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_117, 0, x_115);
x_16 = x_117;
x_17 = x_116;
goto block_54;
}
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_118 = lean_ctor_get(x_98, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_98, 1);
lean_inc(x_119);
lean_dec(x_98);
x_120 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_120, 0, x_118);
x_16 = x_120;
x_17 = x_119;
goto block_54;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_121 = lean_ctor_get(x_92, 1);
x_122 = lean_ctor_get(x_92, 2);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_92);
x_123 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_123, 0, x_1);
lean_ctor_set(x_123, 1, x_121);
lean_ctor_set(x_123, 2, x_122);
x_124 = lean_st_ref_set(x_7, x_123, x_93);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_126 = lean_apply_6(x_12, x_5, x_6, x_7, x_8, x_9, x_125);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; uint8_t x_128; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get_uint8(x_127, sizeof(void*)*1);
lean_dec(x_127);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_126, 1);
lean_inc(x_129);
lean_dec(x_126);
x_55 = x_129;
goto block_90;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_126, 1);
lean_inc(x_130);
lean_dec(x_126);
x_131 = l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_132 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_131, x_5, x_6, x_7, x_8, x_9, x_130);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_unbox(x_133);
lean_dec(x_133);
if (x_134 == 0)
{
lean_object* x_135; 
x_135 = lean_ctor_get(x_132, 1);
lean_inc(x_135);
lean_dec(x_132);
x_55 = x_135;
goto block_90;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_132, 1);
lean_inc(x_136);
lean_dec(x_132);
lean_inc(x_2);
x_137 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_137, 0, x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_138 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_131, x_137, x_5, x_6, x_7, x_8, x_9, x_136);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; 
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
lean_dec(x_138);
x_55 = x_139;
goto block_90;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_140 = lean_ctor_get(x_138, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_138, 1);
lean_inc(x_141);
lean_dec(x_138);
x_142 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_142, 0, x_140);
x_16 = x_142;
x_17 = x_141;
goto block_54;
}
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_143 = lean_ctor_get(x_132, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_132, 1);
lean_inc(x_144);
lean_dec(x_132);
x_145 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_145, 0, x_143);
x_16 = x_145;
x_17 = x_144;
goto block_54;
}
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_146 = lean_ctor_get(x_126, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_126, 1);
lean_inc(x_147);
lean_dec(x_126);
x_148 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_148, 0, x_146);
x_16 = x_148;
x_17 = x_147;
goto block_54;
}
}
block_54:
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_take(x_7, x_17);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
lean_ctor_set(x_20, 0, x_14);
x_24 = lean_st_ref_set(x_7, x_20, x_21);
lean_dec(x_7);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set_tag(x_24, 1);
lean_ctor_set(x_24, 0, x_18);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_20, 1);
x_30 = lean_ctor_get(x_20, 2);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_14);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set(x_31, 2, x_30);
x_32 = lean_st_ref_set(x_7, x_31, x_21);
lean_dec(x_7);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(1, 2, 0);
} else {
 x_35 = x_34;
 lean_ctor_set_tag(x_35, 1);
}
lean_ctor_set(x_35, 0, x_18);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_16, 0);
lean_inc(x_36);
lean_dec(x_16);
x_37 = lean_st_ref_take(x_7, x_17);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_38, 0);
lean_dec(x_41);
lean_ctor_set(x_38, 0, x_14);
x_42 = lean_st_ref_set(x_7, x_38, x_39);
lean_dec(x_7);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_36);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_36);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_38, 1);
x_48 = lean_ctor_get(x_38, 2);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_38);
x_49 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_49, 0, x_14);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_48);
x_50 = lean_st_ref_set(x_7, x_49, x_39);
lean_dec(x_7);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_52 = x_50;
} else {
 lean_dec_ref(x_50);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_36);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
block_90:
{
lean_object* x_56; 
lean_inc(x_7);
lean_inc(x_2);
x_56 = l_Lean_Meta_SynthInstance_mkGeneratorNode_x3f(x_2, x_3, x_6, x_7, x_8, x_9, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_Compiler_checkIsDefinition___closed__5;
x_16 = x_59;
x_17 = x_58;
goto block_54;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_60 = lean_ctor_get(x_56, 1);
lean_inc(x_60);
lean_dec(x_56);
x_61 = lean_ctor_get(x_57, 0);
lean_inc(x_61);
lean_dec(x_57);
x_62 = l_Lean_mkOptionalNode___closed__2;
x_63 = lean_array_push(x_62, x_4);
x_64 = l_Array_empty___closed__1;
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_st_ref_take(x_5, x_60);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = !lean_is_exclusive(x_67);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_70 = lean_ctor_get(x_67, 1);
x_71 = lean_ctor_get(x_67, 3);
x_72 = lean_array_push(x_70, x_61);
x_73 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_71, x_2, x_65);
lean_ctor_set(x_67, 3, x_73);
lean_ctor_set(x_67, 1, x_72);
x_74 = lean_st_ref_set(x_5, x_67, x_68);
lean_dec(x_5);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = l_Lean_Compiler_checkIsDefinition___closed__5;
x_16 = x_76;
x_17 = x_75;
goto block_54;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_77 = lean_ctor_get(x_67, 0);
x_78 = lean_ctor_get(x_67, 1);
x_79 = lean_ctor_get(x_67, 2);
x_80 = lean_ctor_get(x_67, 3);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_67);
x_81 = lean_array_push(x_78, x_61);
x_82 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_80, x_2, x_65);
x_83 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_83, 0, x_77);
lean_ctor_set(x_83, 1, x_81);
lean_ctor_set(x_83, 2, x_79);
lean_ctor_set(x_83, 3, x_82);
x_84 = lean_st_ref_set(x_5, x_83, x_68);
lean_dec(x_5);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_86 = l_Lean_Compiler_checkIsDefinition___closed__5;
x_16 = x_86;
x_17 = x_85;
goto block_54;
}
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_87 = lean_ctor_get(x_56, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_56, 1);
lean_inc(x_88);
lean_dec(x_56);
x_89 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_89, 0, x_87);
x_16 = x_89;
x_17 = x_88;
goto block_54;
}
}
}
}
lean_object* l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___main___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_expr_eqv(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Expr_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_2, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(x_11, x_1);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_ctor_get(x_13, 3);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(x_15, x_1);
lean_dec(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___main___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_findEntry_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getEntry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_SynthM_inhabited___boxed), 6, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getEntry___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid key at synthInstance");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_getEntry___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
x_2 = lean_unsigned_to_nat(219u);
x_3 = lean_unsigned_to_nat(16u);
x_4 = l_Lean_Meta_SynthInstance_getEntry___closed__2;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_getEntry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Meta_SynthInstance_findEntry_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Meta_SynthInstance_getEntry___closed__1;
x_12 = l_Lean_Meta_SynthInstance_getEntry___closed__3;
x_13 = lean_panic_fn(x_11, x_12);
x_14 = lean_apply_6(x_13, x_2, x_3, x_4, x_5, x_6, x_10);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_8, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_dec(x_8);
x_19 = lean_ctor_get(x_9, 0);
lean_inc(x_19);
lean_dec(x_9);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getEntry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_getEntry(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 3);
lean_inc(x_11);
x_12 = lean_nat_dec_eq(x_9, x_10);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_5, 3);
lean_dec(x_14);
x_15 = lean_ctor_get(x_5, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_5, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_5, 0);
lean_dec(x_17);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_9, x_18);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_19);
x_20 = l_Lean_inferTypeRef;
x_21 = lean_st_ref_get(x_20, x_7);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_apply_6(x_22, x_1, x_3, x_4, x_5, x_6, x_23);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_5);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_9, x_25);
lean_dec(x_9);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_8);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_10);
lean_ctor_set(x_27, 3, x_11);
x_28 = l_Lean_inferTypeRef;
x_29 = lean_st_ref_get(x_28, x_7);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_apply_6(x_30, x_1, x_3, x_4, x_27, x_6, x_31);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_33 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_34 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_33, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
return x_34;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_34);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_instantiateMVars___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasMVar(x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_4, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = l_Lean_MetavarContext_instantiateMVars(x_14, x_1);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_ctor_set(x_11, 0, x_17);
x_18 = lean_st_ref_set(x_4, x_11, x_12);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_26 = l_Lean_MetavarContext_instantiateMVars(x_23, x_1);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_24);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_st_ref_set(x_4, x_29, x_12);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_9 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_51 = lean_st_ref_take(x_5, x_11);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_52, 0);
lean_dec(x_55);
lean_inc(x_1);
lean_ctor_set(x_52, 0, x_1);
x_56 = lean_st_ref_set(x_5, x_52, x_53);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_58 = l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_instantiateMVars___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__2(x_59, x_3, x_4, x_5, x_6, x_7, x_60);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_62);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_12 = x_65;
x_13 = x_63;
goto block_50;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_66 = lean_ctor_get(x_58, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_58, 1);
lean_inc(x_67);
lean_dec(x_58);
x_68 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_68, 0, x_66);
x_12 = x_68;
x_13 = x_67;
goto block_50;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_52, 1);
x_70 = lean_ctor_get(x_52, 2);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_52);
lean_inc(x_1);
x_71 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_71, 0, x_1);
lean_ctor_set(x_71, 1, x_69);
lean_ctor_set(x_71, 2, x_70);
x_72 = lean_st_ref_set(x_5, x_71, x_53);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_74 = l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_73);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = l_Lean_instantiateMVars___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__2(x_75, x_3, x_4, x_5, x_6, x_7, x_76);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_78);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_12 = x_81;
x_13 = x_79;
goto block_50;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_82 = lean_ctor_get(x_74, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_74, 1);
lean_inc(x_83);
lean_dec(x_74);
x_84 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_84, 0, x_82);
x_12 = x_84;
x_13 = x_83;
goto block_50;
}
}
block_50:
{
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_take(x_5, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
lean_ctor_set(x_16, 0, x_10);
x_20 = lean_st_ref_set(x_5, x_16, x_17);
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 0, x_14);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_16, 1);
x_26 = lean_ctor_get(x_16, 2);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_10);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_26);
x_28 = lean_st_ref_set(x_5, x_27, x_17);
lean_dec(x_5);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(1, 2, 0);
} else {
 x_31 = x_30;
 lean_ctor_set_tag(x_31, 1);
}
lean_ctor_set(x_31, 0, x_14);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_ctor_get(x_12, 0);
lean_inc(x_32);
lean_dec(x_12);
x_33 = lean_st_ref_take(x_5, x_13);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = !lean_is_exclusive(x_34);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_34, 0);
lean_dec(x_37);
lean_ctor_set(x_34, 0, x_10);
x_38 = lean_st_ref_set(x_5, x_34, x_35);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set(x_38, 0, x_32);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_32);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_43 = lean_ctor_get(x_34, 1);
x_44 = lean_ctor_get(x_34, 2);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_34);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_10);
lean_ctor_set(x_45, 1, x_43);
lean_ctor_set(x_45, 2, x_44);
x_46 = lean_st_ref_set(x_5, x_45, x_35);
lean_dec(x_5);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_32);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
}
}
lean_object* l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_instantiateMVars___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_instantiateMVars___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_mkTableKeyFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_1__getSubgoalsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
if (lean_obj_tag(x_8) == 7)
{
lean_object* x_35; lean_object* x_36; uint64_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_8, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_8, 2);
lean_inc(x_36);
x_37 = lean_ctor_get_uint64(x_8, sizeof(void*)*3);
lean_dec(x_8);
x_38 = lean_array_get_size(x_4);
x_39 = lean_expr_instantiate_rev_range(x_35, x_5, x_38, x_4);
lean_dec(x_38);
lean_dec(x_35);
lean_inc(x_3);
x_40 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_3, x_39, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; lean_object* x_53; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = 0;
x_44 = lean_box(0);
lean_inc(x_2);
lean_inc(x_1);
x_45 = l_Lean_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__3(x_1, x_2, x_41, x_43, x_44, x_9, x_10, x_11, x_12, x_42);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_unsigned_to_nat(0u);
lean_inc(x_46);
x_49 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_3, x_3, x_48, x_46);
lean_inc(x_49);
x_50 = l_Lean_mkApp(x_7, x_49);
x_51 = (uint8_t)((x_37 << 24) >> 61);
x_52 = l_Lean_BinderInfo_isInstImplicit(x_51);
x_53 = lean_array_push(x_4, x_49);
if (x_52 == 0)
{
lean_dec(x_46);
x_4 = x_53;
x_7 = x_50;
x_8 = x_36;
x_13 = x_47;
goto _start;
}
else
{
lean_object* x_55; 
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_46);
lean_ctor_set(x_55, 1, x_6);
x_4 = x_53;
x_6 = x_55;
x_7 = x_50;
x_8 = x_36;
x_13 = x_47;
goto _start;
}
}
else
{
uint8_t x_57; 
lean_dec(x_36);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_40);
if (x_57 == 0)
{
return x_40;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_40, 0);
x_59 = lean_ctor_get(x_40, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_40);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
lean_object* x_61; 
x_61 = lean_box(0);
x_14 = x_61;
goto block_34;
}
block_34:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_14);
x_15 = lean_array_get_size(x_4);
x_16 = lean_expr_instantiate_rev_range(x_8, x_5, x_15, x_4);
lean_dec(x_5);
lean_dec(x_8);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_17 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_16, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = l_Lean_Expr_isForall(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_6);
lean_ctor_set(x_22, 1, x_7);
lean_ctor_set(x_22, 2, x_19);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_free_object(x_17);
x_5 = x_15;
x_8 = x_19;
x_13 = x_20;
goto _start;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = l_Lean_Expr_isForall(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_6);
lean_ctor_set(x_27, 1, x_7);
lean_ctor_set(x_27, 2, x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
else
{
x_5 = x_15;
x_8 = x_24;
x_13 = x_25;
goto _start;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_17);
if (x_30 == 0)
{
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_17, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_17);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_1__getSubgoalsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Meta_SynthInstance_1__getSubgoalsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
}
lean_object* l_Lean_Meta_SynthInstance_getSubgoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Array_empty___closed__1;
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_4);
x_16 = l___private_Lean_Meta_SynthInstance_1__getSubgoalsAux___main(x_1, x_2, x_3, x_14, x_15, x_13, x_4, x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = l_Lean_Expr_getAppFn___main(x_4);
lean_dec(x_4);
if (lean_obj_tag(x_20) == 4)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_free_object(x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_get(x_8, x_19);
lean_dec(x_8);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_Meta_SynthInstance_inferTCGoalsLRAttr;
x_27 = l_Lean_TagAttribute_hasTag(x_26, x_25, x_21);
lean_dec(x_21);
lean_dec(x_25);
if (x_27 == 0)
{
lean_ctor_set(x_22, 0, x_18);
return x_22;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_18);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_18, 0);
x_30 = l_List_reverse___rarg(x_29);
lean_ctor_set(x_18, 0, x_30);
lean_ctor_set(x_22, 0, x_18);
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_18, 0);
x_32 = lean_ctor_get(x_18, 1);
x_33 = lean_ctor_get(x_18, 2);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_18);
x_34 = l_List_reverse___rarg(x_31);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_22, 0, x_35);
return x_22;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_22, 0);
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_22);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Meta_SynthInstance_inferTCGoalsLRAttr;
x_40 = l_Lean_TagAttribute_hasTag(x_39, x_38, x_21);
lean_dec(x_21);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_18);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = lean_ctor_get(x_18, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_18, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_18, 2);
lean_inc(x_44);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 x_45 = x_18;
} else {
 lean_dec_ref(x_18);
 x_45 = lean_box(0);
}
x_46 = l_List_reverse___rarg(x_42);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 3, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_43);
lean_ctor_set(x_47, 2, x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_37);
return x_48;
}
}
}
else
{
lean_dec(x_20);
lean_dec(x_8);
return x_16;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_16, 0);
x_50 = lean_ctor_get(x_16, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_16);
x_51 = l_Lean_Expr_getAppFn___main(x_4);
lean_dec(x_4);
if (lean_obj_tag(x_51) == 4)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_st_ref_get(x_8, x_50);
lean_dec(x_8);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_57 = lean_ctor_get(x_54, 0);
lean_inc(x_57);
lean_dec(x_54);
x_58 = l_Lean_Meta_SynthInstance_inferTCGoalsLRAttr;
x_59 = l_Lean_TagAttribute_hasTag(x_58, x_57, x_52);
lean_dec(x_52);
lean_dec(x_57);
if (x_59 == 0)
{
lean_object* x_60; 
if (lean_is_scalar(x_56)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_56;
}
lean_ctor_set(x_60, 0, x_49);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_61 = lean_ctor_get(x_49, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_49, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_49, 2);
lean_inc(x_63);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 lean_ctor_release(x_49, 2);
 x_64 = x_49;
} else {
 lean_dec_ref(x_49);
 x_64 = lean_box(0);
}
x_65 = l_List_reverse___rarg(x_61);
if (lean_is_scalar(x_64)) {
 x_66 = lean_alloc_ctor(0, 3, 0);
} else {
 x_66 = x_64;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
lean_ctor_set(x_66, 2, x_63);
if (lean_is_scalar(x_56)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_56;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_55);
return x_67;
}
}
else
{
lean_object* x_68; 
lean_dec(x_51);
lean_dec(x_8);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_49);
lean_ctor_set(x_68, 1, x_50);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_8);
lean_dec(x_4);
x_69 = !lean_is_exclusive(x_16);
if (x_69 == 0)
{
return x_16;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_16, 0);
x_71 = lean_ctor_get(x_16, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_16);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_10);
if (x_73 == 0)
{
return x_10;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_10, 0);
x_75 = lean_ctor_get(x_10, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_10);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
lean_object* l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Array_isEmpty___rarg(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_9 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_4, x_5, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_6, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_getLCtx___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__1(x_3, x_4, x_5, x_6, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Std_HashMap_inhabited___closed__1;
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_15);
lean_ctor_set(x_20, 2, x_19);
x_21 = 1;
x_22 = 0;
x_23 = l_Lean_MetavarContext_MkBinding_mkBinding(x_21, x_17, x_1, x_2, x_22, x_22, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_st_ref_take(x_6, x_18);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_30, 1);
lean_dec(x_33);
lean_ctor_set(x_30, 1, x_28);
x_34 = lean_st_ref_set(x_6, x_30, x_31);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(x_27, x_3, x_4, x_5, x_6, x_35);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
lean_ctor_set(x_36, 0, x_26);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_26);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_41 = lean_ctor_get(x_30, 0);
x_42 = lean_ctor_get(x_30, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_30);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_28);
lean_ctor_set(x_43, 2, x_42);
x_44 = lean_st_ref_set(x_6, x_43, x_31);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l_Lean_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(x_27, x_3, x_4, x_5, x_6, x_45);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_26);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_50 = lean_ctor_get(x_23, 1);
lean_inc(x_50);
lean_dec(x_23);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_setMCtx___at___private_Lean_Meta_Basic_6__liftMkBindingM___spec__1(x_51, x_3, x_4, x_5, x_6, x_18);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_st_ref_take(x_6, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = !lean_is_exclusive(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_ctor_get(x_56, 1);
lean_dec(x_59);
lean_ctor_set(x_56, 1, x_52);
x_60 = lean_st_ref_set(x_6, x_56, x_57);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = l___private_Lean_Meta_Basic_6__liftMkBindingM___rarg___closed__3;
x_63 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_62, x_3, x_4, x_5, x_6, x_61);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_64 = lean_ctor_get(x_56, 0);
x_65 = lean_ctor_get(x_56, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_56);
x_66 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_52);
lean_ctor_set(x_66, 2, x_65);
x_67 = lean_st_ref_set(x_6, x_66, x_57);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = l___private_Lean_Meta_Basic_6__liftMkBindingM___rarg___closed__3;
x_70 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_69, x_3, x_4, x_5, x_6, x_68);
return x_70;
}
}
}
else
{
lean_object* x_71; 
lean_dec(x_1);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_2);
lean_ctor_set(x_71, 1, x_7);
return x_71;
}
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tryResolve");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_2 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failure assigning");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_8);
x_16 = lean_nat_dec_lt(x_9, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_9);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_6);
x_17 = l_Lean_Meta_SynthInstance_getSubgoals(x_4, x_5, x_6, x_2, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_164; lean_object* x_165; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 2);
lean_inc(x_22);
lean_dec(x_18);
x_175 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_176 = lean_ctor_get(x_175, 2);
lean_inc(x_176);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_177 = lean_apply_5(x_176, x_10, x_11, x_12, x_13, x_19);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; uint8_t x_179; 
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get_uint8(x_178, sizeof(void*)*1);
lean_dec(x_178);
if (x_179 == 0)
{
lean_object* x_180; uint8_t x_181; 
x_180 = lean_ctor_get(x_177, 1);
lean_inc(x_180);
lean_dec(x_177);
x_181 = 0;
x_164 = x_181;
x_165 = x_180;
goto block_174;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_182 = lean_ctor_get(x_177, 1);
lean_inc(x_182);
lean_dec(x_177);
x_183 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_184 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_183, x_10, x_11, x_12, x_13, x_182);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_unbox(x_185);
lean_dec(x_185);
x_164 = x_187;
x_165 = x_186;
goto block_174;
}
}
else
{
uint8_t x_188; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_188 = !lean_is_exclusive(x_177);
if (x_188 == 0)
{
return x_177;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_189 = lean_ctor_get(x_177, 0);
x_190 = lean_ctor_get(x_177, 1);
lean_inc(x_190);
lean_inc(x_189);
lean_dec(x_177);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_189);
lean_ctor_set(x_191, 1, x_190);
return x_191;
}
}
block_163:
{
lean_object* x_24; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_24 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_7, x_22, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_1);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_29 = lean_ctor_get(x_28, 2);
lean_inc(x_29);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_30 = lean_apply_5(x_29, x_10, x_11, x_12, x_13, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get_uint8(x_31, sizeof(void*)*1);
lean_dec(x_31);
if (x_32 == 0)
{
uint8_t x_33; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_33 = !lean_is_exclusive(x_30);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_30, 0);
lean_dec(x_34);
x_35 = lean_box(0);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_dec(x_30);
x_40 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_41 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_40, x_10, x_11, x_12, x_13, x_39);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_44 = !lean_is_exclusive(x_41);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_41, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_41, 0, x_46);
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec(x_41);
x_51 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__6;
x_52 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_40, x_51, x_10, x_11, x_12, x_13, x_50);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_52, 0);
lean_dec(x_54);
x_55 = lean_box(0);
lean_ctor_set(x_52, 0, x_55);
return x_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_59 = !lean_is_exclusive(x_30);
if (x_59 == 0)
{
return x_30;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_30, 0);
x_61 = lean_ctor_get(x_30, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_30);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_24, 1);
lean_inc(x_63);
lean_dec(x_24);
x_64 = l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(x_6, x_21, x_10, x_11, x_12, x_13, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_94; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_94 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_1, x_65, x_10, x_11, x_12, x_13, x_66);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; uint8_t x_96; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_unbox(x_95);
lean_dec(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_20);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_99 = lean_ctor_get(x_98, 2);
lean_inc(x_99);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_100 = lean_apply_5(x_99, x_10, x_11, x_12, x_13, x_97);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get_uint8(x_101, sizeof(void*)*1);
lean_dec(x_101);
if (x_102 == 0)
{
uint8_t x_103; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_103 = !lean_is_exclusive(x_100);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_100, 0);
lean_dec(x_104);
x_105 = lean_box(0);
lean_ctor_set(x_100, 0, x_105);
return x_100;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_100, 1);
lean_inc(x_106);
lean_dec(x_100);
x_107 = lean_box(0);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_109 = lean_ctor_get(x_100, 1);
lean_inc(x_109);
lean_dec(x_100);
x_110 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_111 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_110, x_10, x_11, x_12, x_13, x_109);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_unbox(x_112);
lean_dec(x_112);
if (x_113 == 0)
{
uint8_t x_114; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_114 = !lean_is_exclusive(x_111);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_111, 0);
lean_dec(x_115);
x_116 = lean_box(0);
lean_ctor_set(x_111, 0, x_116);
return x_111;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_111, 1);
lean_inc(x_117);
lean_dec(x_111);
x_118 = lean_box(0);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
x_120 = lean_ctor_get(x_111, 1);
lean_inc(x_120);
lean_dec(x_111);
x_121 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5;
x_122 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_110, x_121, x_10, x_11, x_12, x_13, x_120);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_122, 0);
lean_dec(x_124);
x_125 = lean_box(0);
lean_ctor_set(x_122, 0, x_125);
return x_122;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_122, 1);
lean_inc(x_126);
lean_dec(x_122);
x_127 = lean_box(0);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
}
}
else
{
uint8_t x_129; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_129 = !lean_is_exclusive(x_100);
if (x_129 == 0)
{
return x_100;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_100, 0);
x_131 = lean_ctor_get(x_100, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_100);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_94, 1);
lean_inc(x_133);
lean_dec(x_94);
x_134 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_135 = lean_ctor_get(x_134, 2);
lean_inc(x_135);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_136 = lean_apply_5(x_135, x_10, x_11, x_12, x_13, x_133);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; uint8_t x_138; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get_uint8(x_137, sizeof(void*)*1);
lean_dec(x_137);
if (x_138 == 0)
{
lean_object* x_139; uint8_t x_140; 
x_139 = lean_ctor_get(x_136, 1);
lean_inc(x_139);
lean_dec(x_136);
x_140 = 0;
x_67 = x_140;
x_68 = x_139;
goto block_93;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
lean_dec(x_136);
x_142 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_143 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_142, x_10, x_11, x_12, x_13, x_141);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = lean_unbox(x_144);
lean_dec(x_144);
x_67 = x_146;
x_68 = x_145;
goto block_93;
}
}
else
{
uint8_t x_147; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_147 = !lean_is_exclusive(x_136);
if (x_147 == 0)
{
return x_136;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_136, 0);
x_149 = lean_ctor_get(x_136, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_136);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_151 = !lean_is_exclusive(x_94);
if (x_151 == 0)
{
return x_94;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_94, 0);
x_153 = lean_ctor_get(x_94, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_94);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
block_93:
{
if (x_67 == 0)
{
lean_object* x_69; uint8_t x_70; 
lean_dec(x_10);
x_69 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_11, x_12, x_13, x_68);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_20);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_69, 0, x_73);
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_69, 0);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_69);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_20);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_79 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_80 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__9;
x_81 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_79, x_80, x_10, x_11, x_12, x_13, x_68);
lean_dec(x_10);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_11, x_12, x_13, x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_83, 0);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_20);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_83, 0, x_87);
return x_83;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_83, 0);
x_89 = lean_ctor_get(x_83, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_83);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_20);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_89);
return x_92;
}
}
}
}
else
{
uint8_t x_155; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_155 = !lean_is_exclusive(x_64);
if (x_155 == 0)
{
return x_64;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_64, 0);
x_157 = lean_ctor_get(x_64, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_64);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
else
{
uint8_t x_159; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_159 = !lean_is_exclusive(x_24);
if (x_159 == 0)
{
return x_24;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_24, 0);
x_161 = lean_ctor_get(x_24, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_24);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
block_174:
{
if (x_164 == 0)
{
x_23 = x_165;
goto block_163;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_inc(x_7);
x_166 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_166, 0, x_7);
x_167 = l_Lean_Meta_isLevelDefEqAux___main___closed__7;
x_168 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_22);
x_169 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_169, 0, x_22);
x_170 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
x_171 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_172 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_171, x_170, x_10, x_11, x_12, x_13, x_165);
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
lean_dec(x_172);
x_23 = x_173;
goto block_163;
}
}
}
else
{
uint8_t x_192; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_192 = !lean_is_exclusive(x_17);
if (x_192 == 0)
{
return x_17;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_17, 0);
x_194 = lean_ctor_get(x_17, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_17);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; 
x_196 = lean_array_fget(x_8, x_9);
x_197 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_196, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = l_Lean_LocalDecl_type(x_198);
lean_dec(x_198);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_200);
x_201 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_200, x_10, x_11, x_12, x_13, x_199);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; 
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
switch (lean_obj_tag(x_202)) {
case 0:
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_200);
lean_dec(x_196);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
x_204 = lean_unsigned_to_nat(1u);
x_205 = lean_nat_add(x_9, x_204);
lean_dec(x_9);
x_9 = x_205;
x_14 = x_203;
goto _start;
}
case 1:
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_200);
x_207 = lean_ctor_get(x_201, 1);
lean_inc(x_207);
lean_dec(x_201);
x_208 = lean_ctor_get(x_202, 0);
lean_inc(x_208);
lean_dec(x_202);
x_209 = lean_unsigned_to_nat(1u);
x_210 = lean_nat_add(x_9, x_209);
lean_dec(x_9);
x_211 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_207);
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = lean_ctor_get(x_10, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_10, 1);
lean_inc(x_215);
x_216 = lean_ctor_get(x_10, 2);
lean_inc(x_216);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_208);
lean_ctor_set(x_217, 1, x_196);
x_218 = lean_array_push(x_216, x_217);
x_219 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_219, 0, x_214);
lean_ctor_set(x_219, 1, x_215);
lean_ctor_set(x_219, 2, x_218);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_220 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_210, x_219, x_11, x_12, x_13, x_213);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = l_Lean_restoreSynthInstanceCache(x_212, x_10, x_11, x_12, x_13, x_222);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_224 = !lean_is_exclusive(x_223);
if (x_224 == 0)
{
lean_object* x_225; 
x_225 = lean_ctor_get(x_223, 0);
lean_dec(x_225);
lean_ctor_set(x_223, 0, x_221);
return x_223;
}
else
{
lean_object* x_226; lean_object* x_227; 
x_226 = lean_ctor_get(x_223, 1);
lean_inc(x_226);
lean_dec(x_223);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_221);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_228 = lean_ctor_get(x_220, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_220, 1);
lean_inc(x_229);
lean_dec(x_220);
x_230 = l_Lean_restoreSynthInstanceCache(x_212, x_10, x_11, x_12, x_13, x_229);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_231 = !lean_is_exclusive(x_230);
if (x_231 == 0)
{
lean_object* x_232; 
x_232 = lean_ctor_get(x_230, 0);
lean_dec(x_232);
lean_ctor_set_tag(x_230, 1);
lean_ctor_set(x_230, 0, x_228);
return x_230;
}
else
{
lean_object* x_233; lean_object* x_234; 
x_233 = lean_ctor_get(x_230, 1);
lean_inc(x_233);
lean_dec(x_230);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_228);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
}
}
default: 
{
lean_object* x_235; lean_object* x_236; 
x_235 = lean_ctor_get(x_201, 1);
lean_inc(x_235);
lean_dec(x_201);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_236 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_200, x_10, x_11, x_12, x_13, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec(x_196);
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec(x_236);
x_239 = lean_unsigned_to_nat(1u);
x_240 = lean_nat_add(x_9, x_239);
lean_dec(x_9);
x_9 = x_240;
x_14 = x_238;
goto _start;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_242 = lean_ctor_get(x_236, 1);
lean_inc(x_242);
lean_dec(x_236);
x_243 = lean_ctor_get(x_237, 0);
lean_inc(x_243);
lean_dec(x_237);
x_244 = lean_unsigned_to_nat(1u);
x_245 = lean_nat_add(x_9, x_244);
lean_dec(x_9);
x_246 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_242);
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_249 = lean_ctor_get(x_10, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_10, 1);
lean_inc(x_250);
x_251 = lean_ctor_get(x_10, 2);
lean_inc(x_251);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_243);
lean_ctor_set(x_252, 1, x_196);
x_253 = lean_array_push(x_251, x_252);
x_254 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_254, 0, x_249);
lean_ctor_set(x_254, 1, x_250);
lean_ctor_set(x_254, 2, x_253);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_255 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_245, x_254, x_11, x_12, x_13, x_248);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = l_Lean_restoreSynthInstanceCache(x_247, x_10, x_11, x_12, x_13, x_257);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_259 = !lean_is_exclusive(x_258);
if (x_259 == 0)
{
lean_object* x_260; 
x_260 = lean_ctor_get(x_258, 0);
lean_dec(x_260);
lean_ctor_set(x_258, 0, x_256);
return x_258;
}
else
{
lean_object* x_261; lean_object* x_262; 
x_261 = lean_ctor_get(x_258, 1);
lean_inc(x_261);
lean_dec(x_258);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_256);
lean_ctor_set(x_262, 1, x_261);
return x_262;
}
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_263 = lean_ctor_get(x_255, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_255, 1);
lean_inc(x_264);
lean_dec(x_255);
x_265 = l_Lean_restoreSynthInstanceCache(x_247, x_10, x_11, x_12, x_13, x_264);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_266 = !lean_is_exclusive(x_265);
if (x_266 == 0)
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_265, 0);
lean_dec(x_267);
lean_ctor_set_tag(x_265, 1);
lean_ctor_set(x_265, 0, x_263);
return x_265;
}
else
{
lean_object* x_268; lean_object* x_269; 
x_268 = lean_ctor_get(x_265, 1);
lean_inc(x_268);
lean_dec(x_265);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_263);
lean_ctor_set(x_269, 1, x_268);
return x_269;
}
}
}
}
else
{
uint8_t x_270; 
lean_dec(x_196);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_270 = !lean_is_exclusive(x_236);
if (x_270 == 0)
{
return x_236;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_271 = lean_ctor_get(x_236, 0);
x_272 = lean_ctor_get(x_236, 1);
lean_inc(x_272);
lean_inc(x_271);
lean_dec(x_236);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_271);
lean_ctor_set(x_273, 1, x_272);
return x_273;
}
}
}
}
}
else
{
uint8_t x_274; 
lean_dec(x_200);
lean_dec(x_196);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_274 = !lean_is_exclusive(x_201);
if (x_274 == 0)
{
return x_201;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_275 = lean_ctor_get(x_201, 0);
x_276 = lean_ctor_get(x_201, 1);
lean_inc(x_276);
lean_inc(x_275);
lean_dec(x_201);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_275);
lean_ctor_set(x_277, 1, x_276);
return x_277;
}
}
}
else
{
uint8_t x_278; 
lean_dec(x_196);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_278 = !lean_is_exclusive(x_197);
if (x_278 == 0)
{
return x_197;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_279 = lean_ctor_get(x_197, 0);
x_280 = lean_ctor_get(x_197, 1);
lean_inc(x_280);
lean_inc(x_279);
lean_dec(x_197);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_280);
return x_281;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
uint8_t x_18; 
x_18 = l_Lean_Expr_isForall(x_12);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_3);
x_19 = l_Lean_Meta_SynthInstance_getSubgoals(x_1, x_2, x_3, x_4, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_166; lean_object* x_167; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 2);
lean_inc(x_24);
lean_dec(x_20);
x_177 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_178 = lean_ctor_get(x_177, 2);
lean_inc(x_178);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_179 = lean_apply_5(x_178, x_13, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; uint8_t x_181; 
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get_uint8(x_180, sizeof(void*)*1);
lean_dec(x_180);
if (x_181 == 0)
{
lean_object* x_182; uint8_t x_183; 
x_182 = lean_ctor_get(x_179, 1);
lean_inc(x_182);
lean_dec(x_179);
x_183 = 0;
x_166 = x_183;
x_167 = x_182;
goto block_176;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; 
x_184 = lean_ctor_get(x_179, 1);
lean_inc(x_184);
lean_dec(x_179);
x_185 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_186 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_185, x_13, x_14, x_15, x_16, x_184);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_189 = lean_unbox(x_187);
lean_dec(x_187);
x_166 = x_189;
x_167 = x_188;
goto block_176;
}
}
else
{
uint8_t x_190; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_190 = !lean_is_exclusive(x_179);
if (x_190 == 0)
{
return x_179;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_179, 0);
x_192 = lean_ctor_get(x_179, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_179);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
block_165:
{
lean_object* x_26; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_26 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_5, x_24, x_13, x_14, x_15, x_16, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_3);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_31 = lean_ctor_get(x_30, 2);
lean_inc(x_31);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_32 = lean_apply_5(x_31, x_13, x_14, x_15, x_16, x_29);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get_uint8(x_33, sizeof(void*)*1);
lean_dec(x_33);
if (x_34 == 0)
{
uint8_t x_35; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_32, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_32, 0, x_37);
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_32, 1);
lean_inc(x_41);
lean_dec(x_32);
x_42 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_43 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_42, x_13, x_14, x_15, x_16, x_41);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
uint8_t x_46; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_46 = !lean_is_exclusive(x_43);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_43, 0);
lean_dec(x_47);
x_48 = lean_box(0);
lean_ctor_set(x_43, 0, x_48);
return x_43;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_dec(x_43);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_43, 1);
lean_inc(x_52);
lean_dec(x_43);
x_53 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__6;
x_54 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_42, x_53, x_13, x_14, x_15, x_16, x_52);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = lean_box(0);
lean_ctor_set(x_54, 0, x_57);
return x_54;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_dec(x_54);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_61 = !lean_is_exclusive(x_32);
if (x_61 == 0)
{
return x_32;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_32, 0);
x_63 = lean_ctor_get(x_32, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_32);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_26, 1);
lean_inc(x_65);
lean_dec(x_26);
x_66 = l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(x_3, x_23, x_13, x_14, x_15, x_16, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_96; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_96 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_6, x_67, x_13, x_14, x_15, x_16, x_68);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_unbox(x_97);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_22);
x_99 = lean_ctor_get(x_96, 1);
lean_inc(x_99);
lean_dec(x_96);
x_100 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_101 = lean_ctor_get(x_100, 2);
lean_inc(x_101);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_102 = lean_apply_5(x_101, x_13, x_14, x_15, x_16, x_99);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get_uint8(x_103, sizeof(void*)*1);
lean_dec(x_103);
if (x_104 == 0)
{
uint8_t x_105; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_105 = !lean_is_exclusive(x_102);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_102, 0);
lean_dec(x_106);
x_107 = lean_box(0);
lean_ctor_set(x_102, 0, x_107);
return x_102;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_102, 1);
lean_inc(x_108);
lean_dec(x_102);
x_109 = lean_box(0);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_111 = lean_ctor_get(x_102, 1);
lean_inc(x_111);
lean_dec(x_102);
x_112 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_113 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_112, x_13, x_14, x_15, x_16, x_111);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_unbox(x_114);
lean_dec(x_114);
if (x_115 == 0)
{
uint8_t x_116; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_116 = !lean_is_exclusive(x_113);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_113, 0);
lean_dec(x_117);
x_118 = lean_box(0);
lean_ctor_set(x_113, 0, x_118);
return x_113;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_113, 1);
lean_inc(x_119);
lean_dec(x_113);
x_120 = lean_box(0);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_122 = lean_ctor_get(x_113, 1);
lean_inc(x_122);
lean_dec(x_113);
x_123 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5;
x_124 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_112, x_123, x_13, x_14, x_15, x_16, x_122);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_124, 0);
lean_dec(x_126);
x_127 = lean_box(0);
lean_ctor_set(x_124, 0, x_127);
return x_124;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_124, 1);
lean_inc(x_128);
lean_dec(x_124);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_131 = !lean_is_exclusive(x_102);
if (x_131 == 0)
{
return x_102;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_102, 0);
x_133 = lean_ctor_get(x_102, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_102);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_96, 1);
lean_inc(x_135);
lean_dec(x_96);
x_136 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_137 = lean_ctor_get(x_136, 2);
lean_inc(x_137);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_138 = lean_apply_5(x_137, x_13, x_14, x_15, x_16, x_135);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; uint8_t x_140; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get_uint8(x_139, sizeof(void*)*1);
lean_dec(x_139);
if (x_140 == 0)
{
lean_object* x_141; uint8_t x_142; 
x_141 = lean_ctor_get(x_138, 1);
lean_inc(x_141);
lean_dec(x_138);
x_142 = 0;
x_69 = x_142;
x_70 = x_141;
goto block_95;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_143 = lean_ctor_get(x_138, 1);
lean_inc(x_143);
lean_dec(x_138);
x_144 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_145 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_144, x_13, x_14, x_15, x_16, x_143);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_unbox(x_146);
lean_dec(x_146);
x_69 = x_148;
x_70 = x_147;
goto block_95;
}
}
else
{
uint8_t x_149; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_149 = !lean_is_exclusive(x_138);
if (x_149 == 0)
{
return x_138;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_138, 0);
x_151 = lean_ctor_get(x_138, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_138);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_153 = !lean_is_exclusive(x_96);
if (x_153 == 0)
{
return x_96;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_96, 0);
x_155 = lean_ctor_get(x_96, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_96);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
block_95:
{
if (x_69 == 0)
{
lean_object* x_71; uint8_t x_72; 
lean_dec(x_13);
x_71 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_14, x_15, x_16, x_70);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_22);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_71, 0, x_75);
return x_71;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_ctor_get(x_71, 0);
x_77 = lean_ctor_get(x_71, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_71);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_22);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_81 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_82 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__9;
x_83 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_81, x_82, x_13, x_14, x_15, x_16, x_70);
lean_dec(x_13);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_14, x_15, x_16, x_84);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_22);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_85, 0, x_89);
return x_85;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_85, 0);
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_85);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_22);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
return x_94;
}
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
x_157 = !lean_is_exclusive(x_66);
if (x_157 == 0)
{
return x_66;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_66, 0);
x_159 = lean_ctor_get(x_66, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_66);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
else
{
uint8_t x_161; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
x_161 = !lean_is_exclusive(x_26);
if (x_161 == 0)
{
return x_26;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_26, 0);
x_163 = lean_ctor_get(x_26, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_26);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
}
}
block_176:
{
if (x_166 == 0)
{
x_25 = x_167;
goto block_165;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_inc(x_5);
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_5);
x_169 = l_Lean_Meta_isLevelDefEqAux___main___closed__7;
x_170 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
lean_inc(x_24);
x_171 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_171, 0, x_24);
x_172 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
x_173 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_174 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_173, x_172, x_13, x_14, x_15, x_16, x_167);
x_175 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
lean_dec(x_174);
x_25 = x_175;
goto block_165;
}
}
}
else
{
uint8_t x_194; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_194 = !lean_is_exclusive(x_19);
if (x_194 == 0)
{
return x_19;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_19, 0);
x_196 = lean_ctor_get(x_19, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_19);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
}
else
{
lean_object* x_198; 
lean_dec(x_5);
x_198 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__3(x_6, x_4, x_7, x_1, x_2, x_8, x_9, x_10, x_3, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_198;
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_inc(x_13);
x_21 = lean_alloc_closure((void*)(l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2), 6, 1);
lean_closure_set(x_21, 0, x_13);
x_22 = lean_box(x_6);
lean_inc(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_13);
lean_inc(x_2);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___lambda__1___boxed), 17, 11);
lean_closure_set(x_23, 0, x_4);
lean_closure_set(x_23, 1, x_5);
lean_closure_set(x_23, 2, x_9);
lean_closure_set(x_23, 3, x_2);
lean_closure_set(x_23, 4, x_13);
lean_closure_set(x_23, 5, x_1);
lean_closure_set(x_23, 6, x_3);
lean_closure_set(x_23, 7, x_22);
lean_closure_set(x_23, 8, x_7);
lean_closure_set(x_23, 9, x_8);
lean_closure_set(x_23, 10, x_12);
x_24 = lean_array_get_size(x_14);
x_25 = lean_nat_dec_lt(x_15, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = l_ReaderT_bind___at_Lean_getLCtx___spec__2___rarg(x_21, x_23, x_16, x_17, x_18, x_19, x_20);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
lean_dec(x_21);
x_27 = lean_array_fget(x_14, x_15);
x_28 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_27, x_16, x_17, x_18, x_19, x_20);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_LocalDecl_type(x_29);
lean_dec(x_29);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_31);
x_32 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_31, x_16, x_17, x_18, x_19, x_30);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
switch (lean_obj_tag(x_33)) {
case 0:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_27);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_15, x_35);
lean_dec(x_15);
x_15 = x_36;
x_20 = x_34;
goto _start;
}
case 1:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_31);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = lean_ctor_get(x_33, 0);
lean_inc(x_39);
lean_dec(x_33);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_add(x_15, x_40);
lean_dec(x_15);
x_42 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_17, x_18, x_19, x_38);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_16, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_16, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_16, 2);
lean_inc(x_47);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_39);
lean_ctor_set(x_48, 1, x_27);
x_49 = lean_array_push(x_47, x_48);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_46);
lean_ctor_set(x_50, 2, x_49);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
x_51 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_41, x_50, x_17, x_18, x_19, x_44);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_restoreSynthInstanceCache(x_43, x_16, x_17, x_18, x_19, x_53);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
lean_ctor_set(x_54, 0, x_52);
return x_54;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_59 = lean_ctor_get(x_51, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_51, 1);
lean_inc(x_60);
lean_dec(x_51);
x_61 = l_Lean_restoreSynthInstanceCache(x_43, x_16, x_17, x_18, x_19, x_60);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_61, 0);
lean_dec(x_63);
lean_ctor_set_tag(x_61, 1);
lean_ctor_set(x_61, 0, x_59);
return x_61;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
default: 
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_32, 1);
lean_inc(x_66);
lean_dec(x_32);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
x_67 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_31, x_16, x_17, x_18, x_19, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_27);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_15, x_70);
lean_dec(x_15);
x_15 = x_71;
x_20 = x_69;
goto _start;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
lean_dec(x_67);
x_74 = lean_ctor_get(x_68, 0);
lean_inc(x_74);
lean_dec(x_68);
x_75 = lean_unsigned_to_nat(1u);
x_76 = lean_nat_add(x_15, x_75);
lean_dec(x_15);
x_77 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_17, x_18, x_19, x_73);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_16, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_16, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_16, 2);
lean_inc(x_82);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_74);
lean_ctor_set(x_83, 1, x_27);
x_84 = lean_array_push(x_82, x_83);
x_85 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_85, 0, x_80);
lean_ctor_set(x_85, 1, x_81);
lean_ctor_set(x_85, 2, x_84);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
x_86 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_76, x_85, x_17, x_18, x_19, x_79);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_restoreSynthInstanceCache(x_78, x_16, x_17, x_18, x_19, x_88);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_89, 0);
lean_dec(x_91);
lean_ctor_set(x_89, 0, x_87);
return x_89;
}
else
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_dec(x_89);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_87);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_94 = lean_ctor_get(x_86, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_86, 1);
lean_inc(x_95);
lean_dec(x_86);
x_96 = l_Lean_restoreSynthInstanceCache(x_78, x_16, x_17, x_18, x_19, x_95);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
x_97 = !lean_is_exclusive(x_96);
if (x_97 == 0)
{
lean_object* x_98; 
x_98 = lean_ctor_get(x_96, 0);
lean_dec(x_98);
lean_ctor_set_tag(x_96, 1);
lean_ctor_set(x_96, 0, x_94);
return x_96;
}
else
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_96, 1);
lean_inc(x_99);
lean_dec(x_96);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_94);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_27);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_101 = !lean_is_exclusive(x_67);
if (x_101 == 0)
{
return x_67;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_67, 0);
x_103 = lean_ctor_get(x_67, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_67);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_105 = !lean_is_exclusive(x_32);
if (x_105 == 0)
{
return x_32;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_32, 0);
x_107 = lean_ctor_get(x_32, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_32);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_27);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_28);
if (x_109 == 0)
{
return x_28;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_28, 0);
x_111 = lean_ctor_get(x_28, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_28);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_8);
x_16 = lean_nat_dec_lt(x_9, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_9);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_6);
x_17 = l_Lean_Meta_SynthInstance_getSubgoals(x_4, x_5, x_6, x_2, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_164; lean_object* x_165; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 2);
lean_inc(x_22);
lean_dec(x_18);
x_175 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_176 = lean_ctor_get(x_175, 2);
lean_inc(x_176);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_177 = lean_apply_5(x_176, x_10, x_11, x_12, x_13, x_19);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; uint8_t x_179; 
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get_uint8(x_178, sizeof(void*)*1);
lean_dec(x_178);
if (x_179 == 0)
{
lean_object* x_180; uint8_t x_181; 
x_180 = lean_ctor_get(x_177, 1);
lean_inc(x_180);
lean_dec(x_177);
x_181 = 0;
x_164 = x_181;
x_165 = x_180;
goto block_174;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_182 = lean_ctor_get(x_177, 1);
lean_inc(x_182);
lean_dec(x_177);
x_183 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_184 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_183, x_10, x_11, x_12, x_13, x_182);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_unbox(x_185);
lean_dec(x_185);
x_164 = x_187;
x_165 = x_186;
goto block_174;
}
}
else
{
uint8_t x_188; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_188 = !lean_is_exclusive(x_177);
if (x_188 == 0)
{
return x_177;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_189 = lean_ctor_get(x_177, 0);
x_190 = lean_ctor_get(x_177, 1);
lean_inc(x_190);
lean_inc(x_189);
lean_dec(x_177);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_189);
lean_ctor_set(x_191, 1, x_190);
return x_191;
}
}
block_163:
{
lean_object* x_24; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_24 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_7, x_22, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_1);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_29 = lean_ctor_get(x_28, 2);
lean_inc(x_29);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_30 = lean_apply_5(x_29, x_10, x_11, x_12, x_13, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get_uint8(x_31, sizeof(void*)*1);
lean_dec(x_31);
if (x_32 == 0)
{
uint8_t x_33; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_33 = !lean_is_exclusive(x_30);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_30, 0);
lean_dec(x_34);
x_35 = lean_box(0);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_dec(x_30);
x_40 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_41 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_40, x_10, x_11, x_12, x_13, x_39);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_44 = !lean_is_exclusive(x_41);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_41, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_41, 0, x_46);
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec(x_41);
x_51 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__6;
x_52 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_40, x_51, x_10, x_11, x_12, x_13, x_50);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_52, 0);
lean_dec(x_54);
x_55 = lean_box(0);
lean_ctor_set(x_52, 0, x_55);
return x_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_59 = !lean_is_exclusive(x_30);
if (x_59 == 0)
{
return x_30;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_30, 0);
x_61 = lean_ctor_get(x_30, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_30);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_24, 1);
lean_inc(x_63);
lean_dec(x_24);
x_64 = l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(x_6, x_21, x_10, x_11, x_12, x_13, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_94; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_94 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_1, x_65, x_10, x_11, x_12, x_13, x_66);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; uint8_t x_96; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_unbox(x_95);
lean_dec(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_20);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_99 = lean_ctor_get(x_98, 2);
lean_inc(x_99);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_100 = lean_apply_5(x_99, x_10, x_11, x_12, x_13, x_97);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get_uint8(x_101, sizeof(void*)*1);
lean_dec(x_101);
if (x_102 == 0)
{
uint8_t x_103; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_103 = !lean_is_exclusive(x_100);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_100, 0);
lean_dec(x_104);
x_105 = lean_box(0);
lean_ctor_set(x_100, 0, x_105);
return x_100;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_100, 1);
lean_inc(x_106);
lean_dec(x_100);
x_107 = lean_box(0);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_109 = lean_ctor_get(x_100, 1);
lean_inc(x_109);
lean_dec(x_100);
x_110 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_111 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_110, x_10, x_11, x_12, x_13, x_109);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_unbox(x_112);
lean_dec(x_112);
if (x_113 == 0)
{
uint8_t x_114; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_114 = !lean_is_exclusive(x_111);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_111, 0);
lean_dec(x_115);
x_116 = lean_box(0);
lean_ctor_set(x_111, 0, x_116);
return x_111;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_111, 1);
lean_inc(x_117);
lean_dec(x_111);
x_118 = lean_box(0);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
x_120 = lean_ctor_get(x_111, 1);
lean_inc(x_120);
lean_dec(x_111);
x_121 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5;
x_122 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_110, x_121, x_10, x_11, x_12, x_13, x_120);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_122, 0);
lean_dec(x_124);
x_125 = lean_box(0);
lean_ctor_set(x_122, 0, x_125);
return x_122;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_122, 1);
lean_inc(x_126);
lean_dec(x_122);
x_127 = lean_box(0);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
}
}
else
{
uint8_t x_129; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_129 = !lean_is_exclusive(x_100);
if (x_129 == 0)
{
return x_100;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_100, 0);
x_131 = lean_ctor_get(x_100, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_100);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_94, 1);
lean_inc(x_133);
lean_dec(x_94);
x_134 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_135 = lean_ctor_get(x_134, 2);
lean_inc(x_135);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_136 = lean_apply_5(x_135, x_10, x_11, x_12, x_13, x_133);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; uint8_t x_138; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get_uint8(x_137, sizeof(void*)*1);
lean_dec(x_137);
if (x_138 == 0)
{
lean_object* x_139; uint8_t x_140; 
x_139 = lean_ctor_get(x_136, 1);
lean_inc(x_139);
lean_dec(x_136);
x_140 = 0;
x_67 = x_140;
x_68 = x_139;
goto block_93;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
lean_dec(x_136);
x_142 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_143 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_142, x_10, x_11, x_12, x_13, x_141);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = lean_unbox(x_144);
lean_dec(x_144);
x_67 = x_146;
x_68 = x_145;
goto block_93;
}
}
else
{
uint8_t x_147; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_147 = !lean_is_exclusive(x_136);
if (x_147 == 0)
{
return x_136;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_136, 0);
x_149 = lean_ctor_get(x_136, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_136);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_151 = !lean_is_exclusive(x_94);
if (x_151 == 0)
{
return x_94;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_94, 0);
x_153 = lean_ctor_get(x_94, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_94);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
block_93:
{
if (x_67 == 0)
{
lean_object* x_69; uint8_t x_70; 
lean_dec(x_10);
x_69 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_11, x_12, x_13, x_68);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_20);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_69, 0, x_73);
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_69, 0);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_69);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_20);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_79 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_80 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__9;
x_81 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_79, x_80, x_10, x_11, x_12, x_13, x_68);
lean_dec(x_10);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_11, x_12, x_13, x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_83, 0);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_20);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_83, 0, x_87);
return x_83;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_83, 0);
x_89 = lean_ctor_get(x_83, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_83);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_20);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_89);
return x_92;
}
}
}
}
else
{
uint8_t x_155; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_155 = !lean_is_exclusive(x_64);
if (x_155 == 0)
{
return x_64;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_64, 0);
x_157 = lean_ctor_get(x_64, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_64);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
else
{
uint8_t x_159; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_159 = !lean_is_exclusive(x_24);
if (x_159 == 0)
{
return x_24;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_24, 0);
x_161 = lean_ctor_get(x_24, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_24);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
block_174:
{
if (x_164 == 0)
{
x_23 = x_165;
goto block_163;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_inc(x_7);
x_166 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_166, 0, x_7);
x_167 = l_Lean_Meta_isLevelDefEqAux___main___closed__7;
x_168 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_22);
x_169 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_169, 0, x_22);
x_170 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
x_171 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_172 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_171, x_170, x_10, x_11, x_12, x_13, x_165);
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
lean_dec(x_172);
x_23 = x_173;
goto block_163;
}
}
}
else
{
uint8_t x_192; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_192 = !lean_is_exclusive(x_17);
if (x_192 == 0)
{
return x_17;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_17, 0);
x_194 = lean_ctor_get(x_17, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_17);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; 
x_196 = lean_array_fget(x_8, x_9);
x_197 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_196, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = l_Lean_LocalDecl_type(x_198);
lean_dec(x_198);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_200);
x_201 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_200, x_10, x_11, x_12, x_13, x_199);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; 
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
switch (lean_obj_tag(x_202)) {
case 0:
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_200);
lean_dec(x_196);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
x_204 = lean_unsigned_to_nat(1u);
x_205 = lean_nat_add(x_9, x_204);
lean_dec(x_9);
x_9 = x_205;
x_14 = x_203;
goto _start;
}
case 1:
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_200);
x_207 = lean_ctor_get(x_201, 1);
lean_inc(x_207);
lean_dec(x_201);
x_208 = lean_ctor_get(x_202, 0);
lean_inc(x_208);
lean_dec(x_202);
x_209 = lean_unsigned_to_nat(1u);
x_210 = lean_nat_add(x_9, x_209);
lean_dec(x_9);
x_211 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_207);
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = lean_ctor_get(x_10, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_10, 1);
lean_inc(x_215);
x_216 = lean_ctor_get(x_10, 2);
lean_inc(x_216);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_208);
lean_ctor_set(x_217, 1, x_196);
x_218 = lean_array_push(x_216, x_217);
x_219 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_219, 0, x_214);
lean_ctor_set(x_219, 1, x_215);
lean_ctor_set(x_219, 2, x_218);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_220 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_210, x_219, x_11, x_12, x_13, x_213);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = l_Lean_restoreSynthInstanceCache(x_212, x_10, x_11, x_12, x_13, x_222);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_224 = !lean_is_exclusive(x_223);
if (x_224 == 0)
{
lean_object* x_225; 
x_225 = lean_ctor_get(x_223, 0);
lean_dec(x_225);
lean_ctor_set(x_223, 0, x_221);
return x_223;
}
else
{
lean_object* x_226; lean_object* x_227; 
x_226 = lean_ctor_get(x_223, 1);
lean_inc(x_226);
lean_dec(x_223);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_221);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_228 = lean_ctor_get(x_220, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_220, 1);
lean_inc(x_229);
lean_dec(x_220);
x_230 = l_Lean_restoreSynthInstanceCache(x_212, x_10, x_11, x_12, x_13, x_229);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_231 = !lean_is_exclusive(x_230);
if (x_231 == 0)
{
lean_object* x_232; 
x_232 = lean_ctor_get(x_230, 0);
lean_dec(x_232);
lean_ctor_set_tag(x_230, 1);
lean_ctor_set(x_230, 0, x_228);
return x_230;
}
else
{
lean_object* x_233; lean_object* x_234; 
x_233 = lean_ctor_get(x_230, 1);
lean_inc(x_233);
lean_dec(x_230);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_228);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
}
}
default: 
{
lean_object* x_235; lean_object* x_236; 
x_235 = lean_ctor_get(x_201, 1);
lean_inc(x_235);
lean_dec(x_201);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_236 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_200, x_10, x_11, x_12, x_13, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec(x_196);
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec(x_236);
x_239 = lean_unsigned_to_nat(1u);
x_240 = lean_nat_add(x_9, x_239);
lean_dec(x_9);
x_9 = x_240;
x_14 = x_238;
goto _start;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_242 = lean_ctor_get(x_236, 1);
lean_inc(x_242);
lean_dec(x_236);
x_243 = lean_ctor_get(x_237, 0);
lean_inc(x_243);
lean_dec(x_237);
x_244 = lean_unsigned_to_nat(1u);
x_245 = lean_nat_add(x_9, x_244);
lean_dec(x_9);
x_246 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_242);
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_249 = lean_ctor_get(x_10, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_10, 1);
lean_inc(x_250);
x_251 = lean_ctor_get(x_10, 2);
lean_inc(x_251);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_243);
lean_ctor_set(x_252, 1, x_196);
x_253 = lean_array_push(x_251, x_252);
x_254 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_254, 0, x_249);
lean_ctor_set(x_254, 1, x_250);
lean_ctor_set(x_254, 2, x_253);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_255 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_245, x_254, x_11, x_12, x_13, x_248);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = l_Lean_restoreSynthInstanceCache(x_247, x_10, x_11, x_12, x_13, x_257);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_259 = !lean_is_exclusive(x_258);
if (x_259 == 0)
{
lean_object* x_260; 
x_260 = lean_ctor_get(x_258, 0);
lean_dec(x_260);
lean_ctor_set(x_258, 0, x_256);
return x_258;
}
else
{
lean_object* x_261; lean_object* x_262; 
x_261 = lean_ctor_get(x_258, 1);
lean_inc(x_261);
lean_dec(x_258);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_256);
lean_ctor_set(x_262, 1, x_261);
return x_262;
}
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_263 = lean_ctor_get(x_255, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_255, 1);
lean_inc(x_264);
lean_dec(x_255);
x_265 = l_Lean_restoreSynthInstanceCache(x_247, x_10, x_11, x_12, x_13, x_264);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_266 = !lean_is_exclusive(x_265);
if (x_266 == 0)
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_265, 0);
lean_dec(x_267);
lean_ctor_set_tag(x_265, 1);
lean_ctor_set(x_265, 0, x_263);
return x_265;
}
else
{
lean_object* x_268; lean_object* x_269; 
x_268 = lean_ctor_get(x_265, 1);
lean_inc(x_268);
lean_dec(x_265);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_263);
lean_ctor_set(x_269, 1, x_268);
return x_269;
}
}
}
}
else
{
uint8_t x_270; 
lean_dec(x_196);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_270 = !lean_is_exclusive(x_236);
if (x_270 == 0)
{
return x_236;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_271 = lean_ctor_get(x_236, 0);
x_272 = lean_ctor_get(x_236, 1);
lean_inc(x_272);
lean_inc(x_271);
lean_dec(x_236);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_271);
lean_ctor_set(x_273, 1, x_272);
return x_273;
}
}
}
}
}
else
{
uint8_t x_274; 
lean_dec(x_200);
lean_dec(x_196);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_274 = !lean_is_exclusive(x_201);
if (x_274 == 0)
{
return x_201;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_275 = lean_ctor_get(x_201, 0);
x_276 = lean_ctor_get(x_201, 1);
lean_inc(x_276);
lean_inc(x_275);
lean_dec(x_201);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_275);
lean_ctor_set(x_277, 1, x_276);
return x_277;
}
}
}
else
{
uint8_t x_278; 
lean_dec(x_196);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_278 = !lean_is_exclusive(x_197);
if (x_278 == 0)
{
return x_197;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_279 = lean_ctor_get(x_197, 0);
x_280 = lean_ctor_get(x_197, 1);
lean_inc(x_280);
lean_inc(x_279);
lean_dec(x_197);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_280);
return x_281;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
if (lean_obj_tag(x_11) == 7)
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint64_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_30 = lean_ctor_get(x_11, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_11, 2);
lean_inc(x_32);
x_33 = lean_ctor_get_uint64(x_11, sizeof(void*)*3);
lean_dec(x_11);
x_34 = lean_array_get_size(x_9);
x_35 = lean_expr_instantiate_rev_range(x_31, x_10, x_34, x_9);
lean_dec(x_34);
lean_dec(x_31);
x_36 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_15, x_16);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = (uint8_t)((x_33 << 24) >> 61);
lean_inc(x_37);
x_40 = lean_local_ctx_mk_local_decl(x_8, x_37, x_30, x_35, x_39);
x_41 = l_Lean_mkFVar(x_37);
x_42 = lean_array_push(x_9, x_41);
x_8 = x_40;
x_9 = x_42;
x_11 = x_32;
x_16 = x_38;
goto _start;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint64_t x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_44 = lean_ctor_get(x_11, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_11, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_11, 2);
lean_inc(x_46);
x_47 = lean_ctor_get_uint64(x_11, sizeof(void*)*3);
x_48 = lean_ctor_get(x_7, 0);
lean_inc(x_48);
x_49 = lean_array_get_size(x_9);
x_50 = lean_nat_dec_lt(x_49, x_48);
lean_dec(x_48);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_7);
x_51 = lean_expr_instantiate_rev_range(x_11, x_10, x_49, x_9);
lean_dec(x_49);
lean_dec(x_11);
x_52 = !lean_is_exclusive(x_12);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_12, 1);
lean_dec(x_53);
lean_ctor_set(x_12, 1, x_8);
lean_inc(x_9);
x_54 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6(x_1, x_2, x_3, x_4, x_5, x_9, x_51, x_9, x_10, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_9);
lean_dec(x_3);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_12, 0);
x_56 = lean_ctor_get(x_12, 2);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_12);
x_57 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_8);
lean_ctor_set(x_57, 2, x_56);
lean_inc(x_9);
x_58 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6(x_1, x_2, x_3, x_4, x_5, x_9, x_51, x_9, x_10, x_57, x_13, x_14, x_15, x_16);
lean_dec(x_9);
lean_dec(x_3);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_11);
x_59 = lean_expr_instantiate_rev_range(x_45, x_10, x_49, x_9);
lean_dec(x_49);
lean_dec(x_45);
x_60 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_15, x_16);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = (uint8_t)((x_47 << 24) >> 61);
lean_inc(x_61);
x_64 = lean_local_ctx_mk_local_decl(x_8, x_61, x_44, x_59, x_63);
x_65 = l_Lean_mkFVar(x_61);
x_66 = lean_array_push(x_9, x_65);
x_8 = x_64;
x_9 = x_66;
x_11 = x_46;
x_16 = x_62;
goto _start;
}
}
}
else
{
lean_object* x_68; 
x_68 = lean_box(0);
x_17 = x_68;
goto block_29;
}
block_29:
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_17);
x_18 = lean_array_get_size(x_9);
x_19 = lean_expr_instantiate_rev_range(x_11, x_10, x_18, x_9);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_12, 1);
lean_dec(x_21);
lean_inc(x_8);
lean_ctor_set(x_12, 1, x_8);
if (x_6 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_inc(x_9);
x_22 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4(x_1, x_2, x_3, x_4, x_5, x_9, x_19, x_9, x_10, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_9);
lean_dec(x_3);
return x_22;
}
else
{
lean_object* x_23; 
lean_inc(x_10);
lean_inc(x_9);
x_23 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18, x_19, x_9, x_10, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
lean_inc(x_8);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_8);
lean_ctor_set(x_26, 2, x_25);
if (x_6 == 0)
{
lean_object* x_27; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_inc(x_9);
x_27 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4(x_1, x_2, x_3, x_4, x_5, x_9, x_19, x_9, x_10, x_26, x_13, x_14, x_15, x_16);
lean_dec(x_9);
lean_dec(x_3);
return x_27;
}
else
{
lean_object* x_28; 
lean_inc(x_10);
lean_inc(x_9);
x_28 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18, x_19, x_9, x_10, x_26, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_28;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_tryResolveCore___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_7);
x_14 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_7, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_isForall(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_3);
x_18 = l_Array_empty___closed__1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_19 = l_Lean_Meta_SynthInstance_getSubgoals(x_5, x_6, x_18, x_2, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_166; lean_object* x_167; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 2);
lean_inc(x_24);
lean_dec(x_20);
x_177 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_178 = lean_ctor_get(x_177, 2);
lean_inc(x_178);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_179 = lean_apply_5(x_178, x_9, x_10, x_11, x_12, x_21);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; uint8_t x_181; 
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get_uint8(x_180, sizeof(void*)*1);
lean_dec(x_180);
if (x_181 == 0)
{
lean_object* x_182; uint8_t x_183; 
x_182 = lean_ctor_get(x_179, 1);
lean_inc(x_182);
lean_dec(x_179);
x_183 = 0;
x_166 = x_183;
x_167 = x_182;
goto block_176;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; 
x_184 = lean_ctor_get(x_179, 1);
lean_inc(x_184);
lean_dec(x_179);
x_185 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_186 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_185, x_9, x_10, x_11, x_12, x_184);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_189 = lean_unbox(x_187);
lean_dec(x_187);
x_166 = x_189;
x_167 = x_188;
goto block_176;
}
}
else
{
uint8_t x_190; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_1);
x_190 = !lean_is_exclusive(x_179);
if (x_190 == 0)
{
return x_179;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_179, 0);
x_192 = lean_ctor_get(x_179, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_179);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
block_165:
{
lean_object* x_26; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_26 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_7, x_24, x_9, x_10, x_11, x_12, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_1);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_31 = lean_ctor_get(x_30, 2);
lean_inc(x_31);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_32 = lean_apply_5(x_31, x_9, x_10, x_11, x_12, x_29);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get_uint8(x_33, sizeof(void*)*1);
lean_dec(x_33);
if (x_34 == 0)
{
uint8_t x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_32, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_32, 0, x_37);
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_32, 1);
lean_inc(x_41);
lean_dec(x_32);
x_42 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_43 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_42, x_9, x_10, x_11, x_12, x_41);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
uint8_t x_46; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_46 = !lean_is_exclusive(x_43);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_43, 0);
lean_dec(x_47);
x_48 = lean_box(0);
lean_ctor_set(x_43, 0, x_48);
return x_43;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_dec(x_43);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_43, 1);
lean_inc(x_52);
lean_dec(x_43);
x_53 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__6;
x_54 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_42, x_53, x_9, x_10, x_11, x_12, x_52);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = lean_box(0);
lean_ctor_set(x_54, 0, x_57);
return x_54;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_dec(x_54);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_61 = !lean_is_exclusive(x_32);
if (x_61 == 0)
{
return x_32;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_32, 0);
x_63 = lean_ctor_get(x_32, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_32);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_26, 1);
lean_inc(x_65);
lean_dec(x_26);
x_66 = l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(x_18, x_23, x_9, x_10, x_11, x_12, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_96; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_96 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_1, x_67, x_9, x_10, x_11, x_12, x_68);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_unbox(x_97);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_22);
x_99 = lean_ctor_get(x_96, 1);
lean_inc(x_99);
lean_dec(x_96);
x_100 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_101 = lean_ctor_get(x_100, 2);
lean_inc(x_101);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_102 = lean_apply_5(x_101, x_9, x_10, x_11, x_12, x_99);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get_uint8(x_103, sizeof(void*)*1);
lean_dec(x_103);
if (x_104 == 0)
{
uint8_t x_105; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_105 = !lean_is_exclusive(x_102);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_102, 0);
lean_dec(x_106);
x_107 = lean_box(0);
lean_ctor_set(x_102, 0, x_107);
return x_102;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_102, 1);
lean_inc(x_108);
lean_dec(x_102);
x_109 = lean_box(0);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_111 = lean_ctor_get(x_102, 1);
lean_inc(x_111);
lean_dec(x_102);
x_112 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_113 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_112, x_9, x_10, x_11, x_12, x_111);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_unbox(x_114);
lean_dec(x_114);
if (x_115 == 0)
{
uint8_t x_116; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_116 = !lean_is_exclusive(x_113);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_113, 0);
lean_dec(x_117);
x_118 = lean_box(0);
lean_ctor_set(x_113, 0, x_118);
return x_113;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_113, 1);
lean_inc(x_119);
lean_dec(x_113);
x_120 = lean_box(0);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_122 = lean_ctor_get(x_113, 1);
lean_inc(x_122);
lean_dec(x_113);
x_123 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5;
x_124 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_112, x_123, x_9, x_10, x_11, x_12, x_122);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_124, 0);
lean_dec(x_126);
x_127 = lean_box(0);
lean_ctor_set(x_124, 0, x_127);
return x_124;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_124, 1);
lean_inc(x_128);
lean_dec(x_124);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_131 = !lean_is_exclusive(x_102);
if (x_131 == 0)
{
return x_102;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_102, 0);
x_133 = lean_ctor_get(x_102, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_102);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_96, 1);
lean_inc(x_135);
lean_dec(x_96);
x_136 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_137 = lean_ctor_get(x_136, 2);
lean_inc(x_137);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_138 = lean_apply_5(x_137, x_9, x_10, x_11, x_12, x_135);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; uint8_t x_140; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get_uint8(x_139, sizeof(void*)*1);
lean_dec(x_139);
if (x_140 == 0)
{
lean_object* x_141; uint8_t x_142; 
x_141 = lean_ctor_get(x_138, 1);
lean_inc(x_141);
lean_dec(x_138);
x_142 = 0;
x_69 = x_142;
x_70 = x_141;
goto block_95;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_143 = lean_ctor_get(x_138, 1);
lean_inc(x_143);
lean_dec(x_138);
x_144 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_145 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_144, x_9, x_10, x_11, x_12, x_143);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_unbox(x_146);
lean_dec(x_146);
x_69 = x_148;
x_70 = x_147;
goto block_95;
}
}
else
{
uint8_t x_149; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_149 = !lean_is_exclusive(x_138);
if (x_149 == 0)
{
return x_138;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_138, 0);
x_151 = lean_ctor_get(x_138, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_138);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_153 = !lean_is_exclusive(x_96);
if (x_153 == 0)
{
return x_96;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_96, 0);
x_155 = lean_ctor_get(x_96, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_96);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
block_95:
{
if (x_69 == 0)
{
lean_object* x_71; uint8_t x_72; 
lean_dec(x_9);
x_71 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_10, x_11, x_12, x_70);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_22);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_71, 0, x_75);
return x_71;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_ctor_get(x_71, 0);
x_77 = lean_ctor_get(x_71, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_71);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_22);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_81 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_82 = l_Lean_isLevelDefEq___rarg___lambda__2___closed__9;
x_83 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_81, x_82, x_9, x_10, x_11, x_12, x_70);
lean_dec(x_9);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_10, x_11, x_12, x_84);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_22);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_85, 0, x_89);
return x_85;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_85, 0);
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_85);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_22);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
return x_94;
}
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_157 = !lean_is_exclusive(x_66);
if (x_157 == 0)
{
return x_66;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_66, 0);
x_159 = lean_ctor_get(x_66, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_66);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
else
{
uint8_t x_161; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_161 = !lean_is_exclusive(x_26);
if (x_161 == 0)
{
return x_26;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_26, 0);
x_163 = lean_ctor_get(x_26, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_26);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
}
}
block_176:
{
if (x_166 == 0)
{
x_25 = x_167;
goto block_165;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_inc(x_7);
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_7);
x_169 = l_Lean_Meta_isLevelDefEqAux___main___closed__7;
x_170 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
lean_inc(x_24);
x_171 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_171, 0, x_24);
x_172 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
x_173 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_174 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_173, x_172, x_9, x_10, x_11, x_12, x_167);
x_175 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
lean_dec(x_174);
x_25 = x_175;
goto block_165;
}
}
}
else
{
uint8_t x_194; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_1);
x_194 = !lean_is_exclusive(x_19);
if (x_194 == 0)
{
return x_19;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_19, 0);
x_196 = lean_ctor_get(x_19, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_19);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_7);
x_198 = l_Lean_getLCtx___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__1(x_9, x_10, x_11, x_12, x_16);
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = 1;
x_202 = l_Array_empty___closed__1;
x_203 = lean_unsigned_to_nat(0u);
x_204 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__3(x_1, x_2, x_3, x_5, x_6, x_201, x_8, x_199, x_202, x_203, x_15, x_9, x_10, x_11, x_12, x_200);
return x_204;
}
}
else
{
uint8_t x_205; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_205 = !lean_is_exclusive(x_14);
if (x_205 == 0)
{
return x_14;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_14, 0);
x_207 = lean_ctor_get(x_14, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_14);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_getLCtx___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__1(x_3, x_4, x_5, x_6, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_getLocalInstances___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__2(x_3, x_4, x_5, x_6, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__2;
x_19 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___rarg___closed__3;
x_20 = l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_tryResolveCore___spec__2(x_1, x_2, x_18, x_19, x_12, x_15, x_9, x_17, x_3, x_4, x_5, x_6, x_16);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
return x_8;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_8);
lean_dec(x_3);
return x_15;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; lean_object* x_19; 
x_18 = lean_unbox(x_8);
lean_dec(x_8);
x_19 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_18, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_19;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
uint8_t x_21; lean_object* x_22; 
x_21 = lean_unbox(x_6);
lean_dec(x_6);
x_22 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__5(x_1, x_2, x_3, x_4, x_5, x_21, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
return x_22;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_8);
lean_dec(x_3);
return x_15;
}
}
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__3(x_1, x_2, x_3, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_18;
}
}
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_tryResolveCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at_Lean_Meta_SynthInstance_tryResolveCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolve(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_450; 
x_10 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_450 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_450) == 0)
{
lean_object* x_451; uint8_t x_452; 
x_451 = lean_ctor_get(x_450, 0);
lean_inc(x_451);
x_452 = lean_ctor_get_uint8(x_451, sizeof(void*)*1);
lean_dec(x_451);
if (x_452 == 0)
{
lean_object* x_453; uint8_t x_454; 
x_453 = lean_ctor_get(x_450, 1);
lean_inc(x_453);
lean_dec(x_450);
x_454 = 0;
x_12 = x_454;
x_13 = x_453;
goto block_449;
}
else
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; uint8_t x_460; 
x_455 = lean_ctor_get(x_450, 1);
lean_inc(x_455);
lean_dec(x_450);
x_456 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_457 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_456, x_5, x_6, x_7, x_8, x_455);
x_458 = lean_ctor_get(x_457, 0);
lean_inc(x_458);
x_459 = lean_ctor_get(x_457, 1);
lean_inc(x_459);
lean_dec(x_457);
x_460 = lean_unbox(x_458);
lean_dec(x_458);
x_12 = x_460;
x_13 = x_459;
goto block_449;
}
}
else
{
uint8_t x_461; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_461 = !lean_is_exclusive(x_450);
if (x_461 == 0)
{
return x_450;
}
else
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; 
x_462 = lean_ctor_get(x_450, 0);
x_463 = lean_ctor_get(x_450, 1);
lean_inc(x_463);
lean_inc(x_462);
lean_dec(x_450);
x_464 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_464, 0, x_462);
lean_ctor_set(x_464, 1, x_463);
return x_464;
}
}
block_449:
{
if (x_12 == 0)
{
lean_object* x_14; 
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get_uint8(x_15, sizeof(void*)*1);
lean_dec(x_15);
x_18 = lean_st_ref_take(x_8, x_16);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_19, 2);
lean_dec(x_23);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; 
x_25 = 0;
lean_ctor_set_uint8(x_20, sizeof(void*)*1, x_25);
x_26 = lean_st_ref_set(x_8, x_19, x_21);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_65 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_27);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_148 = lean_st_ref_take(x_6, x_67);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
x_151 = !lean_is_exclusive(x_149);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_152 = lean_ctor_get(x_149, 0);
lean_dec(x_152);
lean_ctor_set(x_149, 0, x_1);
x_153 = lean_st_ref_set(x_6, x_149, x_150);
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
lean_dec(x_153);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_155 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_5, x_6, x_7, x_8, x_154);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_158, 0, x_156);
x_68 = x_158;
x_69 = x_157;
goto block_147;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_155, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_161, 0, x_159);
x_68 = x_161;
x_69 = x_160;
goto block_147;
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_162 = lean_ctor_get(x_149, 1);
x_163 = lean_ctor_get(x_149, 2);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_149);
x_164 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_164, 0, x_1);
lean_ctor_set(x_164, 1, x_162);
lean_ctor_set(x_164, 2, x_163);
x_165 = lean_st_ref_set(x_6, x_164, x_150);
x_166 = lean_ctor_get(x_165, 1);
lean_inc(x_166);
lean_dec(x_165);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_167 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_5, x_6, x_7, x_8, x_166);
if (lean_obj_tag(x_167) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
lean_dec(x_167);
x_170 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_170, 0, x_168);
x_68 = x_170;
x_69 = x_169;
goto block_147;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_167, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_167, 1);
lean_inc(x_172);
lean_dec(x_167);
x_173 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_173, 0, x_171);
x_68 = x_173;
x_69 = x_172;
goto block_147;
}
}
block_64:
{
lean_object* x_30; 
lean_inc(x_8);
x_30 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_st_ref_take(x_8, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = !lean_is_exclusive(x_33);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_33, 2);
lean_dec(x_37);
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_17);
x_39 = lean_st_ref_set(x_8, x_33, x_35);
lean_dec(x_8);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set_tag(x_39, 1);
lean_ctor_set(x_39, 0, x_28);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_28);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_34, 0);
lean_inc(x_44);
lean_dec(x_34);
x_45 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_17);
lean_ctor_set(x_33, 2, x_45);
x_46 = lean_st_ref_set(x_8, x_33, x_35);
lean_dec(x_8);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
 lean_ctor_set_tag(x_49, 1);
}
lean_ctor_set(x_49, 0, x_28);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_50 = lean_ctor_get(x_33, 0);
x_51 = lean_ctor_get(x_33, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_33);
x_52 = lean_ctor_get(x_34, 0);
lean_inc(x_52);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 x_53 = x_34;
} else {
 lean_dec_ref(x_34);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 1, 1);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_17);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_51);
lean_ctor_set(x_55, 2, x_54);
x_56 = lean_st_ref_set(x_8, x_55, x_35);
lean_dec(x_8);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
 lean_ctor_set_tag(x_59, 1);
}
lean_ctor_set(x_59, 0, x_28);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_28);
lean_dec(x_8);
x_60 = !lean_is_exclusive(x_30);
if (x_60 == 0)
{
return x_30;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_30, 0);
x_62 = lean_ctor_get(x_30, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_30);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
block_147:
{
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_st_ref_take(x_6, x_69);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = !lean_is_exclusive(x_72);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_72, 0);
lean_dec(x_75);
lean_ctor_set(x_72, 0, x_66);
x_76 = lean_st_ref_set(x_6, x_72, x_73);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_28 = x_70;
x_29 = x_77;
goto block_64;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_72, 1);
x_79 = lean_ctor_get(x_72, 2);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_72);
x_80 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_80, 0, x_66);
lean_ctor_set(x_80, 1, x_78);
lean_ctor_set(x_80, 2, x_79);
x_81 = lean_st_ref_set(x_6, x_80, x_73);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_28 = x_70;
x_29 = x_82;
goto block_64;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_68, 0);
lean_inc(x_83);
lean_dec(x_68);
x_84 = lean_st_ref_take(x_6, x_69);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = !lean_is_exclusive(x_85);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_85, 0);
lean_dec(x_88);
lean_ctor_set(x_85, 0, x_66);
x_89 = lean_st_ref_set(x_6, x_85, x_86);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_91 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = lean_st_ref_take(x_8, x_92);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_94, 2);
lean_inc(x_95);
x_96 = lean_ctor_get(x_93, 1);
lean_inc(x_96);
lean_dec(x_93);
x_97 = !lean_is_exclusive(x_94);
if (x_97 == 0)
{
lean_object* x_98; uint8_t x_99; 
x_98 = lean_ctor_get(x_94, 2);
lean_dec(x_98);
x_99 = !lean_is_exclusive(x_95);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
lean_ctor_set_uint8(x_95, sizeof(void*)*1, x_17);
x_100 = lean_st_ref_set(x_8, x_94, x_96);
lean_dec(x_8);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_100, 0);
lean_dec(x_102);
lean_ctor_set(x_100, 0, x_83);
return x_100;
}
else
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_103);
lean_dec(x_100);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_83);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_105 = lean_ctor_get(x_95, 0);
lean_inc(x_105);
lean_dec(x_95);
x_106 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set_uint8(x_106, sizeof(void*)*1, x_17);
lean_ctor_set(x_94, 2, x_106);
x_107 = lean_st_ref_set(x_8, x_94, x_96);
lean_dec(x_8);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_109 = x_107;
} else {
 lean_dec_ref(x_107);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_83);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_111 = lean_ctor_get(x_94, 0);
x_112 = lean_ctor_get(x_94, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_94);
x_113 = lean_ctor_get(x_95, 0);
lean_inc(x_113);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 x_114 = x_95;
} else {
 lean_dec_ref(x_95);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(0, 1, 1);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set_uint8(x_115, sizeof(void*)*1, x_17);
x_116 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_116, 0, x_111);
lean_ctor_set(x_116, 1, x_112);
lean_ctor_set(x_116, 2, x_115);
x_117 = lean_st_ref_set(x_8, x_116, x_96);
lean_dec(x_8);
x_118 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_119 = x_117;
} else {
 lean_dec_ref(x_117);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_83);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_83);
x_121 = lean_ctor_get(x_91, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_91, 1);
lean_inc(x_122);
lean_dec(x_91);
x_28 = x_121;
x_29 = x_122;
goto block_64;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_123 = lean_ctor_get(x_85, 1);
x_124 = lean_ctor_get(x_85, 2);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_85);
x_125 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_125, 0, x_66);
lean_ctor_set(x_125, 1, x_123);
lean_ctor_set(x_125, 2, x_124);
x_126 = lean_st_ref_set(x_6, x_125, x_86);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_128 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
lean_dec(x_128);
x_130 = lean_st_ref_take(x_8, x_129);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_131, 2);
lean_inc(x_132);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_dec(x_130);
x_134 = lean_ctor_get(x_131, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_131, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 lean_ctor_release(x_131, 2);
 x_136 = x_131;
} else {
 lean_dec_ref(x_131);
 x_136 = lean_box(0);
}
x_137 = lean_ctor_get(x_132, 0);
lean_inc(x_137);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 x_138 = x_132;
} else {
 lean_dec_ref(x_132);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(0, 1, 1);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set_uint8(x_139, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_136)) {
 x_140 = lean_alloc_ctor(0, 3, 0);
} else {
 x_140 = x_136;
}
lean_ctor_set(x_140, 0, x_134);
lean_ctor_set(x_140, 1, x_135);
lean_ctor_set(x_140, 2, x_139);
x_141 = lean_st_ref_set(x_8, x_140, x_133);
lean_dec(x_8);
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_143 = x_141;
} else {
 lean_dec_ref(x_141);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_83);
lean_ctor_set(x_144, 1, x_142);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_83);
x_145 = lean_ctor_get(x_128, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_128, 1);
lean_inc(x_146);
lean_dec(x_128);
x_28 = x_145;
x_29 = x_146;
goto block_64;
}
}
}
}
}
else
{
lean_object* x_174; uint8_t x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_174 = lean_ctor_get(x_20, 0);
lean_inc(x_174);
lean_dec(x_20);
x_175 = 0;
x_176 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set_uint8(x_176, sizeof(void*)*1, x_175);
lean_ctor_set(x_19, 2, x_176);
x_177 = lean_st_ref_set(x_8, x_19, x_21);
x_178 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
lean_dec(x_177);
x_203 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_178);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_248 = lean_st_ref_take(x_6, x_205);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_248, 1);
lean_inc(x_250);
lean_dec(x_248);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
x_252 = lean_ctor_get(x_249, 2);
lean_inc(x_252);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 lean_ctor_release(x_249, 2);
 x_253 = x_249;
} else {
 lean_dec_ref(x_249);
 x_253 = lean_box(0);
}
if (lean_is_scalar(x_253)) {
 x_254 = lean_alloc_ctor(0, 3, 0);
} else {
 x_254 = x_253;
}
lean_ctor_set(x_254, 0, x_1);
lean_ctor_set(x_254, 1, x_251);
lean_ctor_set(x_254, 2, x_252);
x_255 = lean_st_ref_set(x_6, x_254, x_250);
x_256 = lean_ctor_get(x_255, 1);
lean_inc(x_256);
lean_dec(x_255);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_257 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_5, x_6, x_7, x_8, x_256);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_260 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_260, 0, x_258);
x_206 = x_260;
x_207 = x_259;
goto block_247;
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_261 = lean_ctor_get(x_257, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_257, 1);
lean_inc(x_262);
lean_dec(x_257);
x_263 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_263, 0, x_261);
x_206 = x_263;
x_207 = x_262;
goto block_247;
}
block_202:
{
lean_object* x_181; 
lean_inc(x_8);
x_181 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_180);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_182 = lean_ctor_get(x_181, 1);
lean_inc(x_182);
lean_dec(x_181);
x_183 = lean_st_ref_take(x_8, x_182);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_184, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_183, 1);
lean_inc(x_186);
lean_dec(x_183);
x_187 = lean_ctor_get(x_184, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_184, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 lean_ctor_release(x_184, 2);
 x_189 = x_184;
} else {
 lean_dec_ref(x_184);
 x_189 = lean_box(0);
}
x_190 = lean_ctor_get(x_185, 0);
lean_inc(x_190);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 x_191 = x_185;
} else {
 lean_dec_ref(x_185);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(0, 1, 1);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set_uint8(x_192, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_189)) {
 x_193 = lean_alloc_ctor(0, 3, 0);
} else {
 x_193 = x_189;
}
lean_ctor_set(x_193, 0, x_187);
lean_ctor_set(x_193, 1, x_188);
lean_ctor_set(x_193, 2, x_192);
x_194 = lean_st_ref_set(x_8, x_193, x_186);
lean_dec(x_8);
x_195 = lean_ctor_get(x_194, 1);
lean_inc(x_195);
if (lean_is_exclusive(x_194)) {
 lean_ctor_release(x_194, 0);
 lean_ctor_release(x_194, 1);
 x_196 = x_194;
} else {
 lean_dec_ref(x_194);
 x_196 = lean_box(0);
}
if (lean_is_scalar(x_196)) {
 x_197 = lean_alloc_ctor(1, 2, 0);
} else {
 x_197 = x_196;
 lean_ctor_set_tag(x_197, 1);
}
lean_ctor_set(x_197, 0, x_179);
lean_ctor_set(x_197, 1, x_195);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_179);
lean_dec(x_8);
x_198 = lean_ctor_get(x_181, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_181, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_200 = x_181;
} else {
 lean_dec_ref(x_181);
 x_200 = lean_box(0);
}
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(1, 2, 0);
} else {
 x_201 = x_200;
}
lean_ctor_set(x_201, 0, x_198);
lean_ctor_set(x_201, 1, x_199);
return x_201;
}
}
block_247:
{
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_208 = lean_ctor_get(x_206, 0);
lean_inc(x_208);
lean_dec(x_206);
x_209 = lean_st_ref_take(x_6, x_207);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
lean_dec(x_209);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
x_213 = lean_ctor_get(x_210, 2);
lean_inc(x_213);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 lean_ctor_release(x_210, 2);
 x_214 = x_210;
} else {
 lean_dec_ref(x_210);
 x_214 = lean_box(0);
}
if (lean_is_scalar(x_214)) {
 x_215 = lean_alloc_ctor(0, 3, 0);
} else {
 x_215 = x_214;
}
lean_ctor_set(x_215, 0, x_204);
lean_ctor_set(x_215, 1, x_212);
lean_ctor_set(x_215, 2, x_213);
x_216 = lean_st_ref_set(x_6, x_215, x_211);
x_217 = lean_ctor_get(x_216, 1);
lean_inc(x_217);
lean_dec(x_216);
x_179 = x_208;
x_180 = x_217;
goto block_202;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_218 = lean_ctor_get(x_206, 0);
lean_inc(x_218);
lean_dec(x_206);
x_219 = lean_st_ref_take(x_6, x_207);
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
lean_dec(x_219);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
x_223 = lean_ctor_get(x_220, 2);
lean_inc(x_223);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 lean_ctor_release(x_220, 2);
 x_224 = x_220;
} else {
 lean_dec_ref(x_220);
 x_224 = lean_box(0);
}
if (lean_is_scalar(x_224)) {
 x_225 = lean_alloc_ctor(0, 3, 0);
} else {
 x_225 = x_224;
}
lean_ctor_set(x_225, 0, x_204);
lean_ctor_set(x_225, 1, x_222);
lean_ctor_set(x_225, 2, x_223);
x_226 = lean_st_ref_set(x_6, x_225, x_221);
x_227 = lean_ctor_get(x_226, 1);
lean_inc(x_227);
lean_dec(x_226);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_228 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_227);
if (lean_obj_tag(x_228) == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_229 = lean_ctor_get(x_228, 1);
lean_inc(x_229);
lean_dec(x_228);
x_230 = lean_st_ref_take(x_8, x_229);
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_231, 2);
lean_inc(x_232);
x_233 = lean_ctor_get(x_230, 1);
lean_inc(x_233);
lean_dec(x_230);
x_234 = lean_ctor_get(x_231, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_231, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 lean_ctor_release(x_231, 2);
 x_236 = x_231;
} else {
 lean_dec_ref(x_231);
 x_236 = lean_box(0);
}
x_237 = lean_ctor_get(x_232, 0);
lean_inc(x_237);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 x_238 = x_232;
} else {
 lean_dec_ref(x_232);
 x_238 = lean_box(0);
}
if (lean_is_scalar(x_238)) {
 x_239 = lean_alloc_ctor(0, 1, 1);
} else {
 x_239 = x_238;
}
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set_uint8(x_239, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_236)) {
 x_240 = lean_alloc_ctor(0, 3, 0);
} else {
 x_240 = x_236;
}
lean_ctor_set(x_240, 0, x_234);
lean_ctor_set(x_240, 1, x_235);
lean_ctor_set(x_240, 2, x_239);
x_241 = lean_st_ref_set(x_8, x_240, x_233);
lean_dec(x_8);
x_242 = lean_ctor_get(x_241, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_243 = x_241;
} else {
 lean_dec_ref(x_241);
 x_243 = lean_box(0);
}
if (lean_is_scalar(x_243)) {
 x_244 = lean_alloc_ctor(0, 2, 0);
} else {
 x_244 = x_243;
}
lean_ctor_set(x_244, 0, x_218);
lean_ctor_set(x_244, 1, x_242);
return x_244;
}
else
{
lean_object* x_245; lean_object* x_246; 
lean_dec(x_218);
x_245 = lean_ctor_get(x_228, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_228, 1);
lean_inc(x_246);
lean_dec(x_228);
x_179 = x_245;
x_180 = x_246;
goto block_202;
}
}
}
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_264 = lean_ctor_get(x_19, 0);
x_265 = lean_ctor_get(x_19, 1);
lean_inc(x_265);
lean_inc(x_264);
lean_dec(x_19);
x_266 = lean_ctor_get(x_20, 0);
lean_inc(x_266);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 x_267 = x_20;
} else {
 lean_dec_ref(x_20);
 x_267 = lean_box(0);
}
x_268 = 0;
if (lean_is_scalar(x_267)) {
 x_269 = lean_alloc_ctor(0, 1, 1);
} else {
 x_269 = x_267;
}
lean_ctor_set(x_269, 0, x_266);
lean_ctor_set_uint8(x_269, sizeof(void*)*1, x_268);
x_270 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_270, 0, x_264);
lean_ctor_set(x_270, 1, x_265);
lean_ctor_set(x_270, 2, x_269);
x_271 = lean_st_ref_set(x_8, x_270, x_21);
x_272 = lean_ctor_get(x_271, 1);
lean_inc(x_272);
lean_dec(x_271);
x_297 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_272);
x_298 = lean_ctor_get(x_297, 0);
lean_inc(x_298);
x_299 = lean_ctor_get(x_297, 1);
lean_inc(x_299);
lean_dec(x_297);
x_342 = lean_st_ref_take(x_6, x_299);
x_343 = lean_ctor_get(x_342, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_342, 1);
lean_inc(x_344);
lean_dec(x_342);
x_345 = lean_ctor_get(x_343, 1);
lean_inc(x_345);
x_346 = lean_ctor_get(x_343, 2);
lean_inc(x_346);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 lean_ctor_release(x_343, 2);
 x_347 = x_343;
} else {
 lean_dec_ref(x_343);
 x_347 = lean_box(0);
}
if (lean_is_scalar(x_347)) {
 x_348 = lean_alloc_ctor(0, 3, 0);
} else {
 x_348 = x_347;
}
lean_ctor_set(x_348, 0, x_1);
lean_ctor_set(x_348, 1, x_345);
lean_ctor_set(x_348, 2, x_346);
x_349 = lean_st_ref_set(x_6, x_348, x_344);
x_350 = lean_ctor_get(x_349, 1);
lean_inc(x_350);
lean_dec(x_349);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_351 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_5, x_6, x_7, x_8, x_350);
if (lean_obj_tag(x_351) == 0)
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; 
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
x_353 = lean_ctor_get(x_351, 1);
lean_inc(x_353);
lean_dec(x_351);
x_354 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_354, 0, x_352);
x_300 = x_354;
x_301 = x_353;
goto block_341;
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_355 = lean_ctor_get(x_351, 0);
lean_inc(x_355);
x_356 = lean_ctor_get(x_351, 1);
lean_inc(x_356);
lean_dec(x_351);
x_357 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_357, 0, x_355);
x_300 = x_357;
x_301 = x_356;
goto block_341;
}
block_296:
{
lean_object* x_275; 
lean_inc(x_8);
x_275 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_274);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_276 = lean_ctor_get(x_275, 1);
lean_inc(x_276);
lean_dec(x_275);
x_277 = lean_st_ref_take(x_8, x_276);
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_278, 2);
lean_inc(x_279);
x_280 = lean_ctor_get(x_277, 1);
lean_inc(x_280);
lean_dec(x_277);
x_281 = lean_ctor_get(x_278, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_278, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_278)) {
 lean_ctor_release(x_278, 0);
 lean_ctor_release(x_278, 1);
 lean_ctor_release(x_278, 2);
 x_283 = x_278;
} else {
 lean_dec_ref(x_278);
 x_283 = lean_box(0);
}
x_284 = lean_ctor_get(x_279, 0);
lean_inc(x_284);
if (lean_is_exclusive(x_279)) {
 lean_ctor_release(x_279, 0);
 x_285 = x_279;
} else {
 lean_dec_ref(x_279);
 x_285 = lean_box(0);
}
if (lean_is_scalar(x_285)) {
 x_286 = lean_alloc_ctor(0, 1, 1);
} else {
 x_286 = x_285;
}
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set_uint8(x_286, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_283)) {
 x_287 = lean_alloc_ctor(0, 3, 0);
} else {
 x_287 = x_283;
}
lean_ctor_set(x_287, 0, x_281);
lean_ctor_set(x_287, 1, x_282);
lean_ctor_set(x_287, 2, x_286);
x_288 = lean_st_ref_set(x_8, x_287, x_280);
lean_dec(x_8);
x_289 = lean_ctor_get(x_288, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 x_290 = x_288;
} else {
 lean_dec_ref(x_288);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_290)) {
 x_291 = lean_alloc_ctor(1, 2, 0);
} else {
 x_291 = x_290;
 lean_ctor_set_tag(x_291, 1);
}
lean_ctor_set(x_291, 0, x_273);
lean_ctor_set(x_291, 1, x_289);
return x_291;
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
lean_dec(x_273);
lean_dec(x_8);
x_292 = lean_ctor_get(x_275, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_275, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_294 = x_275;
} else {
 lean_dec_ref(x_275);
 x_294 = lean_box(0);
}
if (lean_is_scalar(x_294)) {
 x_295 = lean_alloc_ctor(1, 2, 0);
} else {
 x_295 = x_294;
}
lean_ctor_set(x_295, 0, x_292);
lean_ctor_set(x_295, 1, x_293);
return x_295;
}
}
block_341:
{
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_302 = lean_ctor_get(x_300, 0);
lean_inc(x_302);
lean_dec(x_300);
x_303 = lean_st_ref_take(x_6, x_301);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
x_306 = lean_ctor_get(x_304, 1);
lean_inc(x_306);
x_307 = lean_ctor_get(x_304, 2);
lean_inc(x_307);
if (lean_is_exclusive(x_304)) {
 lean_ctor_release(x_304, 0);
 lean_ctor_release(x_304, 1);
 lean_ctor_release(x_304, 2);
 x_308 = x_304;
} else {
 lean_dec_ref(x_304);
 x_308 = lean_box(0);
}
if (lean_is_scalar(x_308)) {
 x_309 = lean_alloc_ctor(0, 3, 0);
} else {
 x_309 = x_308;
}
lean_ctor_set(x_309, 0, x_298);
lean_ctor_set(x_309, 1, x_306);
lean_ctor_set(x_309, 2, x_307);
x_310 = lean_st_ref_set(x_6, x_309, x_305);
x_311 = lean_ctor_get(x_310, 1);
lean_inc(x_311);
lean_dec(x_310);
x_273 = x_302;
x_274 = x_311;
goto block_296;
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_312 = lean_ctor_get(x_300, 0);
lean_inc(x_312);
lean_dec(x_300);
x_313 = lean_st_ref_take(x_6, x_301);
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
x_316 = lean_ctor_get(x_314, 1);
lean_inc(x_316);
x_317 = lean_ctor_get(x_314, 2);
lean_inc(x_317);
if (lean_is_exclusive(x_314)) {
 lean_ctor_release(x_314, 0);
 lean_ctor_release(x_314, 1);
 lean_ctor_release(x_314, 2);
 x_318 = x_314;
} else {
 lean_dec_ref(x_314);
 x_318 = lean_box(0);
}
if (lean_is_scalar(x_318)) {
 x_319 = lean_alloc_ctor(0, 3, 0);
} else {
 x_319 = x_318;
}
lean_ctor_set(x_319, 0, x_298);
lean_ctor_set(x_319, 1, x_316);
lean_ctor_set(x_319, 2, x_317);
x_320 = lean_st_ref_set(x_6, x_319, x_315);
x_321 = lean_ctor_get(x_320, 1);
lean_inc(x_321);
lean_dec(x_320);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_322 = lean_apply_5(x_11, x_5, x_6, x_7, x_8, x_321);
if (lean_obj_tag(x_322) == 0)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_323 = lean_ctor_get(x_322, 1);
lean_inc(x_323);
lean_dec(x_322);
x_324 = lean_st_ref_take(x_8, x_323);
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_325, 2);
lean_inc(x_326);
x_327 = lean_ctor_get(x_324, 1);
lean_inc(x_327);
lean_dec(x_324);
x_328 = lean_ctor_get(x_325, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_325, 1);
lean_inc(x_329);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 x_330 = x_325;
} else {
 lean_dec_ref(x_325);
 x_330 = lean_box(0);
}
x_331 = lean_ctor_get(x_326, 0);
lean_inc(x_331);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 x_332 = x_326;
} else {
 lean_dec_ref(x_326);
 x_332 = lean_box(0);
}
if (lean_is_scalar(x_332)) {
 x_333 = lean_alloc_ctor(0, 1, 1);
} else {
 x_333 = x_332;
}
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set_uint8(x_333, sizeof(void*)*1, x_17);
if (lean_is_scalar(x_330)) {
 x_334 = lean_alloc_ctor(0, 3, 0);
} else {
 x_334 = x_330;
}
lean_ctor_set(x_334, 0, x_328);
lean_ctor_set(x_334, 1, x_329);
lean_ctor_set(x_334, 2, x_333);
x_335 = lean_st_ref_set(x_8, x_334, x_327);
lean_dec(x_8);
x_336 = lean_ctor_get(x_335, 1);
lean_inc(x_336);
if (lean_is_exclusive(x_335)) {
 lean_ctor_release(x_335, 0);
 lean_ctor_release(x_335, 1);
 x_337 = x_335;
} else {
 lean_dec_ref(x_335);
 x_337 = lean_box(0);
}
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(0, 2, 0);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_312);
lean_ctor_set(x_338, 1, x_336);
return x_338;
}
else
{
lean_object* x_339; lean_object* x_340; 
lean_dec(x_312);
x_339 = lean_ctor_get(x_322, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_322, 1);
lean_inc(x_340);
lean_dec(x_322);
x_273 = x_339;
x_274 = x_340;
goto block_296;
}
}
}
}
}
else
{
uint8_t x_358; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_358 = !lean_is_exclusive(x_14);
if (x_358 == 0)
{
return x_14;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; 
x_359 = lean_ctor_get(x_14, 0);
x_360 = lean_ctor_get(x_14, 1);
lean_inc(x_360);
lean_inc(x_359);
lean_dec(x_14);
x_361 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_361, 0, x_359);
lean_ctor_set(x_361, 1, x_360);
return x_361;
}
}
}
else
{
lean_object* x_362; 
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_362 = l___private_Lean_Util_Trace_3__getResetTraces___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__6(x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_362) == 0)
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; 
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_362, 1);
lean_inc(x_364);
lean_dec(x_362);
x_365 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_364);
x_366 = lean_ctor_get(x_365, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_365, 1);
lean_inc(x_367);
lean_dec(x_365);
x_419 = lean_st_ref_take(x_6, x_367);
x_420 = lean_ctor_get(x_419, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_419, 1);
lean_inc(x_421);
lean_dec(x_419);
x_422 = !lean_is_exclusive(x_420);
if (x_422 == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_423 = lean_ctor_get(x_420, 0);
lean_dec(x_423);
lean_ctor_set(x_420, 0, x_1);
x_424 = lean_st_ref_set(x_6, x_420, x_421);
x_425 = lean_ctor_get(x_424, 1);
lean_inc(x_425);
lean_dec(x_424);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_426 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_5, x_6, x_7, x_8, x_425);
if (lean_obj_tag(x_426) == 0)
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_427 = lean_ctor_get(x_426, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_426, 1);
lean_inc(x_428);
lean_dec(x_426);
x_429 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_429, 0, x_427);
x_368 = x_429;
x_369 = x_428;
goto block_418;
}
else
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; 
x_430 = lean_ctor_get(x_426, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_426, 1);
lean_inc(x_431);
lean_dec(x_426);
x_432 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_432, 0, x_430);
x_368 = x_432;
x_369 = x_431;
goto block_418;
}
}
else
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
x_433 = lean_ctor_get(x_420, 1);
x_434 = lean_ctor_get(x_420, 2);
lean_inc(x_434);
lean_inc(x_433);
lean_dec(x_420);
x_435 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_435, 0, x_1);
lean_ctor_set(x_435, 1, x_433);
lean_ctor_set(x_435, 2, x_434);
x_436 = lean_st_ref_set(x_6, x_435, x_421);
x_437 = lean_ctor_get(x_436, 1);
lean_inc(x_437);
lean_dec(x_436);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_438 = l_Lean_Meta_SynthInstance_tryResolveCore(x_2, x_3, x_5, x_6, x_7, x_8, x_437);
if (lean_obj_tag(x_438) == 0)
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_439 = lean_ctor_get(x_438, 0);
lean_inc(x_439);
x_440 = lean_ctor_get(x_438, 1);
lean_inc(x_440);
lean_dec(x_438);
x_441 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_441, 0, x_439);
x_368 = x_441;
x_369 = x_440;
goto block_418;
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; 
x_442 = lean_ctor_get(x_438, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_438, 1);
lean_inc(x_443);
lean_dec(x_438);
x_444 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_444, 0, x_442);
x_368 = x_444;
x_369 = x_443;
goto block_418;
}
}
block_418:
{
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; 
x_370 = lean_ctor_get(x_368, 0);
lean_inc(x_370);
lean_dec(x_368);
x_371 = lean_st_ref_take(x_6, x_369);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
lean_dec(x_371);
x_374 = !lean_is_exclusive(x_372);
if (x_374 == 0)
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; uint8_t x_380; 
x_375 = lean_ctor_get(x_372, 0);
lean_dec(x_375);
lean_ctor_set(x_372, 0, x_366);
x_376 = lean_st_ref_set(x_6, x_372, x_373);
x_377 = lean_ctor_get(x_376, 1);
lean_inc(x_377);
lean_dec(x_376);
x_378 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_379 = l___private_Lean_Util_Trace_2__addNode___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__7(x_363, x_378, x_5, x_6, x_7, x_8, x_377);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_380 = !lean_is_exclusive(x_379);
if (x_380 == 0)
{
lean_object* x_381; 
x_381 = lean_ctor_get(x_379, 0);
lean_dec(x_381);
lean_ctor_set_tag(x_379, 1);
lean_ctor_set(x_379, 0, x_370);
return x_379;
}
else
{
lean_object* x_382; lean_object* x_383; 
x_382 = lean_ctor_get(x_379, 1);
lean_inc(x_382);
lean_dec(x_379);
x_383 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_383, 0, x_370);
lean_ctor_set(x_383, 1, x_382);
return x_383;
}
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; 
x_384 = lean_ctor_get(x_372, 1);
x_385 = lean_ctor_get(x_372, 2);
lean_inc(x_385);
lean_inc(x_384);
lean_dec(x_372);
x_386 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_386, 0, x_366);
lean_ctor_set(x_386, 1, x_384);
lean_ctor_set(x_386, 2, x_385);
x_387 = lean_st_ref_set(x_6, x_386, x_373);
x_388 = lean_ctor_get(x_387, 1);
lean_inc(x_388);
lean_dec(x_387);
x_389 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_390 = l___private_Lean_Util_Trace_2__addNode___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__7(x_363, x_389, x_5, x_6, x_7, x_8, x_388);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_391 = lean_ctor_get(x_390, 1);
lean_inc(x_391);
if (lean_is_exclusive(x_390)) {
 lean_ctor_release(x_390, 0);
 lean_ctor_release(x_390, 1);
 x_392 = x_390;
} else {
 lean_dec_ref(x_390);
 x_392 = lean_box(0);
}
if (lean_is_scalar(x_392)) {
 x_393 = lean_alloc_ctor(1, 2, 0);
} else {
 x_393 = x_392;
 lean_ctor_set_tag(x_393, 1);
}
lean_ctor_set(x_393, 0, x_370);
lean_ctor_set(x_393, 1, x_391);
return x_393;
}
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; uint8_t x_398; 
x_394 = lean_ctor_get(x_368, 0);
lean_inc(x_394);
lean_dec(x_368);
x_395 = lean_st_ref_take(x_6, x_369);
x_396 = lean_ctor_get(x_395, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_395, 1);
lean_inc(x_397);
lean_dec(x_395);
x_398 = !lean_is_exclusive(x_396);
if (x_398 == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; 
x_399 = lean_ctor_get(x_396, 0);
lean_dec(x_399);
lean_ctor_set(x_396, 0, x_366);
x_400 = lean_st_ref_set(x_6, x_396, x_397);
x_401 = lean_ctor_get(x_400, 1);
lean_inc(x_401);
lean_dec(x_400);
x_402 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_403 = l___private_Lean_Util_Trace_2__addNode___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__7(x_363, x_402, x_5, x_6, x_7, x_8, x_401);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_404 = !lean_is_exclusive(x_403);
if (x_404 == 0)
{
lean_object* x_405; 
x_405 = lean_ctor_get(x_403, 0);
lean_dec(x_405);
lean_ctor_set(x_403, 0, x_394);
return x_403;
}
else
{
lean_object* x_406; lean_object* x_407; 
x_406 = lean_ctor_get(x_403, 1);
lean_inc(x_406);
lean_dec(x_403);
x_407 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_407, 0, x_394);
lean_ctor_set(x_407, 1, x_406);
return x_407;
}
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
x_408 = lean_ctor_get(x_396, 1);
x_409 = lean_ctor_get(x_396, 2);
lean_inc(x_409);
lean_inc(x_408);
lean_dec(x_396);
x_410 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_410, 0, x_366);
lean_ctor_set(x_410, 1, x_408);
lean_ctor_set(x_410, 2, x_409);
x_411 = lean_st_ref_set(x_6, x_410, x_397);
x_412 = lean_ctor_get(x_411, 1);
lean_inc(x_412);
lean_dec(x_411);
x_413 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_414 = l___private_Lean_Util_Trace_2__addNode___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__7(x_363, x_413, x_5, x_6, x_7, x_8, x_412);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_415 = lean_ctor_get(x_414, 1);
lean_inc(x_415);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_416 = x_414;
} else {
 lean_dec_ref(x_414);
 x_416 = lean_box(0);
}
if (lean_is_scalar(x_416)) {
 x_417 = lean_alloc_ctor(0, 2, 0);
} else {
 x_417 = x_416;
}
lean_ctor_set(x_417, 0, x_394);
lean_ctor_set(x_417, 1, x_415);
return x_417;
}
}
}
}
else
{
uint8_t x_445; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_445 = !lean_is_exclusive(x_362);
if (x_445 == 0)
{
return x_362;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_446 = lean_ctor_get(x_362, 0);
x_447 = lean_ctor_get(x_362, 1);
lean_inc(x_447);
lean_inc(x_446);
lean_dec(x_362);
x_448 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_448, 0, x_446);
lean_ctor_set(x_448, 1, x_447);
return x_448;
}
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolve___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_tryResolve(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_tryAnswer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_53 = lean_st_ref_take(x_6, x_13);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_54, 0);
lean_dec(x_57);
lean_ctor_set(x_54, 0, x_1);
x_58 = lean_st_ref_set(x_6, x_54, x_55);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_60 = l_Lean_Meta_openAbstractMVarsResult(x_10, x_5, x_6, x_7, x_8, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_65 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_2, x_64, x_5, x_6, x_7, x_8, x_63);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_unbox(x_66);
lean_dec(x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_8);
lean_dec(x_7);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
x_14 = x_69;
x_15 = x_68;
goto block_52;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_70 = lean_ctor_get(x_65, 1);
lean_inc(x_70);
lean_dec(x_65);
x_71 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_70);
lean_dec(x_8);
lean_dec(x_7);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_72);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_14 = x_75;
x_15 = x_73;
goto block_52;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_8);
lean_dec(x_7);
x_76 = lean_ctor_get(x_65, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_65, 1);
lean_inc(x_77);
lean_dec(x_65);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_76);
x_14 = x_78;
x_15 = x_77;
goto block_52;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_79 = lean_ctor_get(x_60, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_60, 1);
lean_inc(x_80);
lean_dec(x_60);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_79);
x_14 = x_81;
x_15 = x_80;
goto block_52;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_54, 1);
x_83 = lean_ctor_get(x_54, 2);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_54);
x_84 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_84, 0, x_1);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_84, 2, x_83);
x_85 = lean_st_ref_set(x_6, x_84, x_55);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_87 = l_Lean_Meta_openAbstractMVarsResult(x_10, x_5, x_6, x_7, x_8, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_90);
lean_dec(x_87);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_92 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_2, x_91, x_5, x_6, x_7, x_8, x_90);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_unbox(x_93);
lean_dec(x_93);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_8);
lean_dec(x_7);
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_95);
lean_dec(x_92);
x_96 = l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
x_14 = x_96;
x_15 = x_95;
goto block_52;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_97 = lean_ctor_get(x_92, 1);
lean_inc(x_97);
lean_dec(x_92);
x_98 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_97);
lean_dec(x_8);
lean_dec(x_7);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_101, 0, x_99);
x_102 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_14 = x_102;
x_15 = x_100;
goto block_52;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_8);
lean_dec(x_7);
x_103 = lean_ctor_get(x_92, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_92, 1);
lean_inc(x_104);
lean_dec(x_92);
x_105 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_105, 0, x_103);
x_14 = x_105;
x_15 = x_104;
goto block_52;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_106 = lean_ctor_get(x_87, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_87, 1);
lean_inc(x_107);
lean_dec(x_87);
x_108 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_108, 0, x_106);
x_14 = x_108;
x_15 = x_107;
goto block_52;
}
}
block_52:
{
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_take(x_6, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
lean_ctor_set(x_18, 0, x_12);
x_22 = lean_st_ref_set(x_6, x_18, x_19);
lean_dec(x_6);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_16);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_16);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_18, 1);
x_28 = lean_ctor_get(x_18, 2);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_12);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_st_ref_set(x_6, x_29, x_19);
lean_dec(x_6);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(1, 2, 0);
} else {
 x_33 = x_32;
 lean_ctor_set_tag(x_33, 1);
}
lean_ctor_set(x_33, 0, x_16);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_14, 0);
lean_inc(x_34);
lean_dec(x_14);
x_35 = lean_st_ref_take(x_6, x_15);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_36, 0);
lean_dec(x_39);
lean_ctor_set(x_36, 0, x_12);
x_40 = lean_st_ref_set(x_6, x_36, x_37);
lean_dec(x_6);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_34);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_34);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_45 = lean_ctor_get(x_36, 1);
x_46 = lean_ctor_get(x_36, 2);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_36);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_12);
lean_ctor_set(x_47, 1, x_45);
lean_ctor_set(x_47, 2, x_46);
x_48 = lean_st_ref_set(x_6, x_47, x_37);
lean_dec(x_6);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_34);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_tryAnswer(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("skip answer containing metavariables ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_wakeUp___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_wakeUp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_wakeUp___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_st_ref_take(x_3, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_11, 2);
lean_inc(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_1);
x_16 = lean_array_push(x_14, x_15);
lean_ctor_set(x_11, 2, x_16);
x_17 = lean_st_ref_set(x_3, x_11, x_12);
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
x_26 = lean_ctor_get(x_11, 2);
x_27 = lean_ctor_get(x_11, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
lean_inc(x_9);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_9);
lean_ctor_set(x_28, 1, x_1);
x_29 = lean_array_push(x_26, x_28);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set(x_30, 3, x_27);
x_31 = lean_st_ref_set(x_3, x_30, x_12);
lean_dec(x_3);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
x_34 = lean_box(0);
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_33;
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_93; uint8_t x_94; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
lean_dec(x_1);
x_93 = lean_ctor_get(x_36, 0);
lean_inc(x_93);
x_94 = l_Array_isEmpty___rarg(x_93);
lean_dec(x_93);
if (x_94 == 0)
{
lean_object* x_95; 
x_95 = lean_box(0);
x_37 = x_95;
goto block_92;
}
else
{
lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_96 = lean_ctor_get(x_36, 1);
lean_inc(x_96);
x_97 = lean_unsigned_to_nat(0u);
x_98 = lean_nat_dec_eq(x_96, x_97);
lean_dec(x_96);
if (x_98 == 0)
{
lean_object* x_99; 
x_99 = lean_box(0);
x_37 = x_99;
goto block_92;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_100 = lean_st_ref_take(x_3, x_8);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_ctor_get(x_36, 2);
lean_inc(x_103);
lean_dec(x_36);
x_104 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = !lean_is_exclusive(x_101);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_106 = lean_ctor_get(x_101, 0);
lean_dec(x_106);
lean_ctor_set(x_101, 0, x_104);
x_107 = lean_st_ref_set(x_3, x_101, x_102);
lean_dec(x_3);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_107, 0);
lean_dec(x_109);
x_110 = lean_box(0);
lean_ctor_set(x_107, 0, x_110);
return x_107;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_107, 1);
lean_inc(x_111);
lean_dec(x_107);
x_112 = lean_box(0);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_114 = lean_ctor_get(x_101, 1);
x_115 = lean_ctor_get(x_101, 2);
x_116 = lean_ctor_get(x_101, 3);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_101);
x_117 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_117, 0, x_104);
lean_ctor_set(x_117, 1, x_114);
lean_ctor_set(x_117, 2, x_115);
lean_ctor_set(x_117, 3, x_116);
x_118 = lean_st_ref_set(x_3, x_117, x_102);
lean_dec(x_3);
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_120 = x_118;
} else {
 lean_dec_ref(x_118);
 x_120 = lean_box(0);
}
x_121 = lean_box(0);
if (lean_is_scalar(x_120)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_120;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_119);
return x_122;
}
}
}
block_92:
{
lean_object* x_38; 
lean_dec(x_37);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_38 = l_Lean_Meta_openAbstractMVarsResult(x_36, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_44 = lean_ctor_get(x_43, 2);
lean_inc(x_44);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_45 = lean_apply_6(x_44, x_3, x_4, x_5, x_6, x_7, x_41);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get_uint8(x_46, sizeof(void*)*1);
lean_dec(x_46);
if (x_47 == 0)
{
uint8_t x_48; 
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_45, 0);
lean_dec(x_49);
x_50 = lean_box(0);
lean_ctor_set(x_45, 0, x_50);
return x_45;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_45, 1);
lean_inc(x_51);
lean_dec(x_45);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_45, 1);
lean_inc(x_54);
lean_dec(x_45);
x_55 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_56 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_55, x_3, x_4, x_5, x_6, x_7, x_54);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
uint8_t x_59; 
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_59 = !lean_is_exclusive(x_56);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_56, 0);
lean_dec(x_60);
x_61 = lean_box(0);
lean_ctor_set(x_56, 0, x_61);
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_dec(x_56);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_56, 1);
lean_inc(x_65);
lean_dec(x_56);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_42);
x_67 = l_Lean_Meta_SynthInstance_wakeUp___closed__3;
x_68 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_55, x_68, x_3, x_4, x_5, x_6, x_7, x_65);
if (lean_obj_tag(x_69) == 0)
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_69, 0);
lean_dec(x_71);
x_72 = lean_box(0);
lean_ctor_set(x_69, 0, x_72);
return x_69;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_69, 1);
lean_inc(x_73);
lean_dec(x_69);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
else
{
uint8_t x_76; 
x_76 = !lean_is_exclusive(x_69);
if (x_76 == 0)
{
return x_69;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_69, 0);
x_78 = lean_ctor_get(x_69, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_69);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_80 = !lean_is_exclusive(x_56);
if (x_80 == 0)
{
return x_56;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_56, 0);
x_82 = lean_ctor_get(x_56, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_56);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_45);
if (x_84 == 0)
{
return x_45;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_45, 0);
x_86 = lean_ctor_get(x_45, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_45);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_88 = !lean_is_exclusive(x_38);
if (x_88 == 0)
{
return x_38;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_38, 0);
x_90 = lean_ctor_get(x_38, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_38);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_2, 1);
x_11 = lean_expr_eqv(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_5 = x_13;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_5);
x_15 = 1;
return x_15;
}
}
}
}
uint8_t l_Lean_Meta_SynthInstance_isNewAnswer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(x_1, x_2, x_1, x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_isNewAnswer___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_SynthInstance_isNewAnswer(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("newAnswer");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_2 = l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_2__mkAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_53; uint8_t x_70; lean_object* x_71; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
x_11 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_3, x_4, x_5, x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_83 = lean_st_ref_take(x_3, x_13);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = !lean_is_exclusive(x_84);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_84, 0);
lean_dec(x_87);
lean_ctor_set(x_84, 0, x_7);
x_88 = lean_st_ref_set(x_3, x_84, x_85);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_90 = lean_apply_5(x_10, x_2, x_3, x_4, x_5, x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get_uint8(x_91, sizeof(void*)*1);
lean_dec(x_91);
if (x_92 == 0)
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
lean_dec(x_90);
x_94 = 0;
x_70 = x_94;
x_71 = x_93;
goto block_82;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_95 = lean_ctor_get(x_90, 1);
lean_inc(x_95);
lean_dec(x_90);
x_96 = l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2;
x_97 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_96, x_2, x_3, x_4, x_5, x_95);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
x_100 = lean_unbox(x_98);
lean_dec(x_98);
x_70 = x_100;
x_71 = x_99;
goto block_82;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_101 = lean_ctor_get(x_90, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_90, 1);
lean_inc(x_102);
lean_dec(x_90);
x_103 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_103, 0, x_101);
x_14 = x_103;
x_15 = x_102;
goto block_52;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_104 = lean_ctor_get(x_84, 1);
x_105 = lean_ctor_get(x_84, 2);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_84);
x_106 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_106, 0, x_7);
lean_ctor_set(x_106, 1, x_104);
lean_ctor_set(x_106, 2, x_105);
x_107 = lean_st_ref_set(x_3, x_106, x_85);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_109 = lean_apply_5(x_10, x_2, x_3, x_4, x_5, x_108);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; uint8_t x_111; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get_uint8(x_110, sizeof(void*)*1);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; uint8_t x_113; 
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_dec(x_109);
x_113 = 0;
x_70 = x_113;
x_71 = x_112;
goto block_82;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_114 = lean_ctor_get(x_109, 1);
lean_inc(x_114);
lean_dec(x_109);
x_115 = l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2;
x_116 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_115, x_2, x_3, x_4, x_5, x_114);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_unbox(x_117);
lean_dec(x_117);
x_70 = x_119;
x_71 = x_118;
goto block_82;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_120 = lean_ctor_get(x_109, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_109, 1);
lean_inc(x_121);
lean_dec(x_109);
x_122 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_122, 0, x_120);
x_14 = x_122;
x_15 = x_121;
goto block_52;
}
}
block_52:
{
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_take(x_3, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
lean_ctor_set(x_18, 0, x_12);
x_22 = lean_st_ref_set(x_3, x_18, x_19);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_16);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_16);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_18, 1);
x_28 = lean_ctor_get(x_18, 2);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_12);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_st_ref_set(x_3, x_29, x_19);
lean_dec(x_3);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(1, 2, 0);
} else {
 x_33 = x_32;
 lean_ctor_set_tag(x_33, 1);
}
lean_ctor_set(x_33, 0, x_16);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_14, 0);
lean_inc(x_34);
lean_dec(x_14);
x_35 = lean_st_ref_take(x_3, x_15);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_36, 0);
lean_dec(x_39);
lean_ctor_set(x_36, 0, x_12);
x_40 = lean_st_ref_set(x_3, x_36, x_37);
lean_dec(x_3);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_34);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_34);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_45 = lean_ctor_get(x_36, 1);
x_46 = lean_ctor_get(x_36, 2);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_36);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_12);
lean_ctor_set(x_47, 1, x_45);
lean_ctor_set(x_47, 2, x_46);
x_48 = lean_st_ref_set(x_3, x_47, x_37);
lean_dec(x_3);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_34);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
block_69:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_54 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_8, x_2, x_3, x_4, x_5, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Meta_abstractMVars(x_55, x_2, x_3, x_4, x_5, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_ctor_get(x_58, 2);
lean_inc(x_60);
lean_inc(x_3);
x_61 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_60, x_2, x_3, x_4, x_5, x_59);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_58);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_14 = x_65;
x_15 = x_63;
goto block_52;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_58);
x_66 = lean_ctor_get(x_61, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_dec(x_61);
x_68 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_68, 0, x_66);
x_14 = x_68;
x_15 = x_67;
goto block_52;
}
}
block_82:
{
if (x_70 == 0)
{
x_53 = x_71;
goto block_69;
}
else
{
lean_object* x_72; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_8);
x_72 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_8, x_2, x_3, x_4, x_5, x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_73);
x_76 = l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2;
x_77 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_76, x_75, x_2, x_3, x_4, x_5, x_74);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_53 = x_78;
goto block_69;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_79 = lean_ctor_get(x_72, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_72, 1);
lean_inc(x_80);
lean_dec(x_72);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_79);
x_14 = x_81;
x_15 = x_80;
goto block_52;
}
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_nat_dec_lt(x_3, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_15 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_14, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_3, x_17);
lean_dec(x_3);
x_3 = x_18;
x_9 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_addAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l___private_Lean_Meta_SynthInstance_2__mkAnswer(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = l_Lean_Meta_SynthInstance_getEntry(x_11, x_2, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_14, 1);
x_19 = l_Lean_Meta_SynthInstance_isNewAnswer(x_18, x_9);
if (x_19 == 0)
{
lean_object* x_20; 
lean_free_object(x_14);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_box(0);
lean_ctor_set(x_12, 0, x_20);
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_free_object(x_12);
lean_inc(x_9);
x_21 = lean_array_push(x_18, x_9);
lean_inc(x_17);
lean_ctor_set(x_14, 1, x_21);
x_22 = lean_st_ref_take(x_2, x_16);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 3);
x_27 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_26, x_11, x_14);
lean_ctor_set(x_23, 3, x_27);
x_28 = lean_st_ref_set(x_2, x_23, x_24);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_9, x_17, x_30, x_2, x_3, x_4, x_5, x_6, x_29);
lean_dec(x_17);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_32 = lean_ctor_get(x_23, 0);
x_33 = lean_ctor_get(x_23, 1);
x_34 = lean_ctor_get(x_23, 2);
x_35 = lean_ctor_get(x_23, 3);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_23);
x_36 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_35, x_11, x_14);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_33);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = lean_st_ref_set(x_2, x_37, x_24);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_unsigned_to_nat(0u);
x_41 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_9, x_17, x_40, x_2, x_3, x_4, x_5, x_6, x_39);
lean_dec(x_17);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_12, 1);
x_43 = lean_ctor_get(x_14, 0);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_14);
x_45 = l_Lean_Meta_SynthInstance_isNewAnswer(x_44, x_9);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_box(0);
lean_ctor_set(x_12, 0, x_46);
return x_12;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_free_object(x_12);
lean_inc(x_9);
x_47 = lean_array_push(x_44, x_9);
lean_inc(x_43);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_st_ref_take(x_2, x_42);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_50, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_50, 3);
lean_inc(x_55);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 lean_ctor_release(x_50, 2);
 lean_ctor_release(x_50, 3);
 x_56 = x_50;
} else {
 lean_dec_ref(x_50);
 x_56 = lean_box(0);
}
x_57 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_55, x_11, x_48);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 4, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_54);
lean_ctor_set(x_58, 3, x_57);
x_59 = lean_st_ref_set(x_2, x_58, x_51);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_unsigned_to_nat(0u);
x_62 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_9, x_43, x_61, x_2, x_3, x_4, x_5, x_6, x_60);
lean_dec(x_43);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_63 = lean_ctor_get(x_12, 0);
x_64 = lean_ctor_get(x_12, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_12);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_67 = x_63;
} else {
 lean_dec_ref(x_63);
 x_67 = lean_box(0);
}
x_68 = l_Lean_Meta_SynthInstance_isNewAnswer(x_66, x_9);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_64);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_inc(x_9);
x_71 = lean_array_push(x_66, x_9);
lean_inc(x_65);
if (lean_is_scalar(x_67)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_67;
}
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_st_ref_take(x_2, x_64);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_ctor_get(x_74, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
x_78 = lean_ctor_get(x_74, 2);
lean_inc(x_78);
x_79 = lean_ctor_get(x_74, 3);
lean_inc(x_79);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 lean_ctor_release(x_74, 2);
 lean_ctor_release(x_74, 3);
 x_80 = x_74;
} else {
 lean_dec_ref(x_74);
 x_80 = lean_box(0);
}
x_81 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_79, x_11, x_72);
if (lean_is_scalar(x_80)) {
 x_82 = lean_alloc_ctor(0, 4, 0);
} else {
 x_82 = x_80;
}
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_77);
lean_ctor_set(x_82, 2, x_78);
lean_ctor_set(x_82, 3, x_81);
x_83 = lean_st_ref_set(x_2, x_82, x_75);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_9, x_65, x_85, x_2, x_3, x_4, x_5, x_6, x_84);
lean_dec(x_65);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_12);
if (x_87 == 0)
{
return x_12;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_12, 0);
x_89 = lean_ctor_get(x_12, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_12);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_8);
if (x_91 == 0)
{
return x_8;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_8, 0);
x_93 = lean_ctor_get(x_8, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_8);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_forMAux___main___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_array_push(x_5, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_4 = x_12;
x_5 = x_10;
goto _start;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_consume(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_addAnswer(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_10);
lean_inc(x_12);
x_13 = l_Lean_Meta_SynthInstance_mkTableKeyFor(x_12, x_10, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_SynthInstance_findEntry_x3f(x_14, x_2, x_3, x_4, x_5, x_6, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_SynthInstance_newSubgoal(x_12, x_14, x_10, x_11, x_2, x_3, x_4, x_5, x_6, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_st_ref_take(x_2, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_26 = lean_ctor_get(x_23, 2);
x_27 = lean_ctor_get(x_23, 3);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_21, x_29, x_30, x_26);
x_32 = !lean_is_exclusive(x_21);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_ctor_get(x_21, 1);
lean_dec(x_33);
x_34 = lean_ctor_get(x_21, 0);
lean_dec(x_34);
x_35 = lean_array_push(x_28, x_11);
lean_ctor_set(x_21, 0, x_35);
x_36 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_27, x_14, x_21);
lean_ctor_set(x_23, 3, x_36);
lean_ctor_set(x_23, 2, x_31);
x_37 = lean_st_ref_set(x_2, x_23, x_24);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_21);
x_44 = lean_array_push(x_28, x_11);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_29);
x_46 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_27, x_14, x_45);
lean_ctor_set(x_23, 3, x_46);
lean_ctor_set(x_23, 2, x_31);
x_47 = lean_st_ref_set(x_2, x_23, x_24);
lean_dec(x_2);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
x_50 = lean_box(0);
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_49;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
x_54 = lean_ctor_get(x_23, 2);
x_55 = lean_ctor_get(x_23, 3);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_56 = lean_ctor_get(x_21, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_21, 1);
lean_inc(x_57);
x_58 = lean_unsigned_to_nat(0u);
x_59 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_21, x_57, x_58, x_54);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 x_60 = x_21;
} else {
 lean_dec_ref(x_21);
 x_60 = lean_box(0);
}
x_61 = lean_array_push(x_56, x_11);
if (lean_is_scalar(x_60)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_60;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_57);
x_63 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_55, x_14, x_62);
x_64 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_64, 0, x_52);
lean_ctor_set(x_64, 1, x_53);
lean_ctor_set(x_64, 2, x_59);
lean_ctor_set(x_64, 3, x_63);
x_65 = lean_st_ref_set(x_2, x_64, x_24);
lean_dec(x_2);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
x_68 = lean_box(0);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_13);
if (x_70 == 0)
{
return x_13;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_13, 0);
x_72 = lean_ctor_get(x_13, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_13);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_10);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SynthInstance_getTop(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_modifyTop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_2, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_array_get_size(x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_13, x_14);
x_16 = lean_nat_dec_lt(x_15, x_13);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_15);
lean_dec(x_1);
x_17 = lean_st_ref_set(x_2, x_9, x_10);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_24 = lean_array_fget(x_12, x_15);
x_25 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_26 = lean_array_fset(x_12, x_15, x_25);
x_27 = lean_apply_1(x_1, x_24);
x_28 = lean_array_fset(x_26, x_15, x_27);
lean_dec(x_15);
lean_ctor_set(x_9, 1, x_28);
x_29 = lean_st_ref_set(x_2, x_9, x_10);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_36 = lean_ctor_get(x_9, 0);
x_37 = lean_ctor_get(x_9, 1);
x_38 = lean_ctor_get(x_9, 2);
x_39 = lean_ctor_get(x_9, 3);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_9);
x_40 = lean_array_get_size(x_37);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_sub(x_40, x_41);
x_43 = lean_nat_dec_lt(x_42, x_40);
lean_dec(x_40);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_42);
lean_dec(x_1);
x_44 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_44, 0, x_36);
lean_ctor_set(x_44, 1, x_37);
lean_ctor_set(x_44, 2, x_38);
lean_ctor_set(x_44, 3, x_39);
x_45 = lean_st_ref_set(x_2, x_44, x_10);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = lean_box(0);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_50 = lean_array_fget(x_37, x_42);
x_51 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_52 = lean_array_fset(x_37, x_42, x_51);
x_53 = lean_apply_1(x_1, x_50);
x_54 = lean_array_fset(x_52, x_42, x_53);
lean_dec(x_42);
x_55 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_55, 0, x_36);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_38);
lean_ctor_set(x_55, 3, x_39);
x_56 = lean_st_ref_set(x_2, x_55, x_10);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
x_59 = lean_box(0);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_modifyTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_modifyTop(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("generate");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_2 = l_Lean_Meta_SynthInstance_generate___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("instance ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_generate___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_generate___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_generate___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_generate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_7 = l_Lean_Meta_SynthInstance_getTop(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_8, 4);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_14, x_17);
lean_dec(x_14);
x_19 = l_Lean_Expr_Inhabited;
x_20 = lean_array_get(x_19, x_13, x_18);
lean_dec(x_13);
x_92 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_93 = lean_ctor_get(x_92, 2);
lean_inc(x_93);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_94 = lean_apply_6(x_93, x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; uint8_t x_96; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get_uint8(x_95, sizeof(void*)*1);
lean_dec(x_95);
if (x_96 == 0)
{
lean_object* x_97; 
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_21 = x_97;
goto block_91;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_94, 1);
lean_inc(x_98);
lean_dec(x_94);
x_99 = l_Lean_Meta_SynthInstance_generate___closed__2;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_100 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_99, x_1, x_2, x_3, x_4, x_5, x_98);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_unbox(x_101);
lean_dec(x_101);
if (x_102 == 0)
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_103);
lean_dec(x_100);
x_21 = x_103;
goto block_91;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_104 = lean_ctor_get(x_100, 1);
lean_inc(x_104);
lean_dec(x_100);
lean_inc(x_20);
x_105 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_105, 0, x_20);
x_106 = l_Lean_Meta_SynthInstance_generate___closed__5;
x_107 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_108 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_99, x_107, x_1, x_2, x_3, x_4, x_5, x_104);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
lean_dec(x_108);
x_21 = x_109;
goto block_91;
}
else
{
uint8_t x_110; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_108);
if (x_110 == 0)
{
return x_108;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_108, 0);
x_112 = lean_ctor_get(x_108, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_108);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
else
{
uint8_t x_114; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_114 = !lean_is_exclusive(x_100);
if (x_114 == 0)
{
return x_100;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_100, 0);
x_116 = lean_ctor_get(x_100, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_100);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
}
else
{
uint8_t x_118; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_118 = !lean_is_exclusive(x_94);
if (x_118 == 0)
{
return x_94;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_94, 0);
x_120 = lean_ctor_get(x_94, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_94);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
block_91:
{
lean_object* x_22; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_st_ref_take(x_1, x_21);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_43, 1);
x_47 = lean_array_get_size(x_46);
x_48 = lean_nat_sub(x_47, x_17);
x_49 = lean_nat_dec_lt(x_48, x_47);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_48);
lean_dec(x_18);
x_50 = lean_st_ref_set(x_1, x_43, x_44);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_22 = x_51;
goto block_41;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_array_fget(x_46, x_48);
x_53 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_54 = lean_array_fset(x_46, x_48, x_53);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_52, 4);
lean_dec(x_56);
lean_ctor_set(x_52, 4, x_18);
x_57 = lean_array_fset(x_54, x_48, x_52);
lean_dec(x_48);
lean_ctor_set(x_43, 1, x_57);
x_58 = lean_st_ref_set(x_1, x_43, x_44);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_22 = x_59;
goto block_41;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = lean_ctor_get(x_52, 0);
x_61 = lean_ctor_get(x_52, 1);
x_62 = lean_ctor_get(x_52, 2);
x_63 = lean_ctor_get(x_52, 3);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_52);
x_64 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_64, 0, x_60);
lean_ctor_set(x_64, 1, x_61);
lean_ctor_set(x_64, 2, x_62);
lean_ctor_set(x_64, 3, x_63);
lean_ctor_set(x_64, 4, x_18);
x_65 = lean_array_fset(x_54, x_48, x_64);
lean_dec(x_48);
lean_ctor_set(x_43, 1, x_65);
x_66 = lean_st_ref_set(x_1, x_43, x_44);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_22 = x_67;
goto block_41;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_68 = lean_ctor_get(x_43, 0);
x_69 = lean_ctor_get(x_43, 1);
x_70 = lean_ctor_get(x_43, 2);
x_71 = lean_ctor_get(x_43, 3);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_43);
x_72 = lean_array_get_size(x_69);
x_73 = lean_nat_sub(x_72, x_17);
x_74 = lean_nat_dec_lt(x_73, x_72);
lean_dec(x_72);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_73);
lean_dec(x_18);
x_75 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_75, 0, x_68);
lean_ctor_set(x_75, 1, x_69);
lean_ctor_set(x_75, 2, x_70);
lean_ctor_set(x_75, 3, x_71);
x_76 = lean_st_ref_set(x_1, x_75, x_44);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_22 = x_77;
goto block_41;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_78 = lean_array_fget(x_69, x_73);
x_79 = l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1;
x_80 = lean_array_fset(x_69, x_73, x_79);
x_81 = lean_ctor_get(x_78, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_78, 1);
lean_inc(x_82);
x_83 = lean_ctor_get(x_78, 2);
lean_inc(x_83);
x_84 = lean_ctor_get(x_78, 3);
lean_inc(x_84);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 lean_ctor_release(x_78, 2);
 lean_ctor_release(x_78, 3);
 lean_ctor_release(x_78, 4);
 x_85 = x_78;
} else {
 lean_dec_ref(x_78);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(0, 5, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_81);
lean_ctor_set(x_86, 1, x_82);
lean_ctor_set(x_86, 2, x_83);
lean_ctor_set(x_86, 3, x_84);
lean_ctor_set(x_86, 4, x_18);
x_87 = lean_array_fset(x_80, x_73, x_86);
lean_dec(x_73);
x_88 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_88, 0, x_68);
lean_ctor_set(x_88, 1, x_87);
lean_ctor_set(x_88, 2, x_70);
lean_ctor_set(x_88, 3, x_71);
x_89 = lean_st_ref_set(x_1, x_88, x_44);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_22 = x_90;
goto block_41;
}
}
block_41:
{
lean_object* x_23; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_10);
x_23 = l_Lean_Meta_SynthInstance_tryResolve(x_12, x_10, x_20, x_1, x_2, x_3, x_4, x_5, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
x_27 = lean_box(0);
lean_ctor_set(x_23, 0, x_27);
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_dec(x_23);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_24, 0);
lean_inc(x_31);
lean_dec(x_24);
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_dec(x_23);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_10);
lean_ctor_set(x_35, 1, x_11);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_35, 3, x_34);
x_36 = l_Lean_Meta_SynthInstance_consume(x_35, x_1, x_2, x_3, x_4, x_5, x_32);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_23);
if (x_37 == 0)
{
return x_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_23, 0);
x_39 = lean_ctor_get(x_23, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_23);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_122 = lean_st_ref_take(x_1, x_9);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = !lean_is_exclusive(x_123);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_126 = lean_ctor_get(x_123, 1);
x_127 = lean_array_pop(x_126);
lean_ctor_set(x_123, 1, x_127);
x_128 = lean_st_ref_set(x_1, x_123, x_124);
lean_dec(x_1);
x_129 = !lean_is_exclusive(x_128);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_128, 0);
lean_dec(x_130);
x_131 = lean_box(0);
lean_ctor_set(x_128, 0, x_131);
return x_128;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_128, 1);
lean_inc(x_132);
lean_dec(x_128);
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_135 = lean_ctor_get(x_123, 0);
x_136 = lean_ctor_get(x_123, 1);
x_137 = lean_ctor_get(x_123, 2);
x_138 = lean_ctor_get(x_123, 3);
lean_inc(x_138);
lean_inc(x_137);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_123);
x_139 = lean_array_pop(x_136);
x_140 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_140, 0, x_135);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_140, 2, x_137);
lean_ctor_set(x_140, 3, x_138);
x_141 = lean_st_ref_set(x_1, x_140, x_124);
lean_dec(x_1);
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_143 = x_141;
} else {
 lean_dec_ref(x_141);
 x_143 = lean_box(0);
}
x_144 = lean_box(0);
if (lean_is_scalar(x_143)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_143;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_142);
return x_145;
}
}
}
}
lean_object* _init_l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_SynthInstance_Consumernode_inhabited;
x_2 = l_Lean_Meta_SynthInstance_Answer_inhabited;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(x_10);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_1, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_13, 2);
x_17 = lean_array_pop(x_16);
lean_ctor_set(x_13, 2, x_17);
x_18 = lean_st_ref_set(x_1, x_13, x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_11);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_11);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_13, 0);
x_24 = lean_ctor_get(x_13, 1);
x_25 = lean_ctor_get(x_13, 2);
x_26 = lean_ctor_get(x_13, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_13);
x_27 = lean_array_pop(x_25);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set(x_28, 3, x_26);
x_29 = lean_st_ref_set(x_1, x_28, x_14);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_11);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SynthInstance_getNextToResume(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("resume found no remaining subgoals");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1;
x_2 = lean_unsigned_to_nat(416u);
x_3 = lean_unsigned_to_nat(16u);
x_4 = l_Lean_Meta_SynthInstance_resume___closed__1;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("resume");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_2 = l_Lean_Meta_SynthInstance_resume___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" <== ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_resume___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_resume___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_resume___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_resume(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_SynthInstance_getNextToResume(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_8);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_Meta_SynthInstance_getEntry___closed__1;
x_13 = l_Lean_Meta_SynthInstance_resume___closed__2;
x_14 = lean_panic_fn(x_12, x_13);
x_15 = lean_apply_6(x_14, x_1, x_2, x_3, x_4, x_5, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 2);
lean_inc(x_20);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 x_21 = x_9;
} else {
 lean_dec_ref(x_9);
 x_21 = lean_box(0);
}
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_dec(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_22);
x_24 = l_Lean_Meta_SynthInstance_tryAnswer(x_20, x_22, x_17, x_1, x_2, x_3, x_4, x_5, x_16);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = lean_box(0);
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_76; lean_object* x_77; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_35 = lean_ctor_get(x_34, 2);
lean_inc(x_35);
x_36 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_3, x_4, x_5, x_32);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_105 = lean_st_ref_take(x_3, x_38);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = !lean_is_exclusive(x_106);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_106, 0);
lean_dec(x_109);
lean_inc(x_33);
lean_ctor_set(x_106, 0, x_33);
x_110 = lean_st_ref_set(x_3, x_106, x_107);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
lean_dec(x_110);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_112 = lean_apply_6(x_35, x_1, x_2, x_3, x_4, x_5, x_111);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; uint8_t x_114; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get_uint8(x_113, sizeof(void*)*1);
lean_dec(x_113);
if (x_114 == 0)
{
lean_object* x_115; uint8_t x_116; 
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
lean_dec(x_112);
x_116 = 0;
x_76 = x_116;
x_77 = x_115;
goto block_104;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_112, 1);
lean_inc(x_117);
lean_dec(x_112);
x_118 = l_Lean_Meta_SynthInstance_resume___closed__4;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_119 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_118, x_1, x_2, x_3, x_4, x_5, x_117);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_unbox(x_120);
lean_dec(x_120);
x_76 = x_122;
x_77 = x_121;
goto block_104;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_22);
x_123 = lean_ctor_get(x_119, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_125, 0, x_123);
x_39 = x_125;
x_40 = x_124;
goto block_75;
}
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_22);
x_126 = lean_ctor_get(x_112, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_112, 1);
lean_inc(x_127);
lean_dec(x_112);
x_128 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_128, 0, x_126);
x_39 = x_128;
x_40 = x_127;
goto block_75;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_129 = lean_ctor_get(x_106, 1);
x_130 = lean_ctor_get(x_106, 2);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_106);
lean_inc(x_33);
x_131 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_131, 0, x_33);
lean_ctor_set(x_131, 1, x_129);
lean_ctor_set(x_131, 2, x_130);
x_132 = lean_st_ref_set(x_3, x_131, x_107);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_134 = lean_apply_6(x_35, x_1, x_2, x_3, x_4, x_5, x_133);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; uint8_t x_136; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get_uint8(x_135, sizeof(void*)*1);
lean_dec(x_135);
if (x_136 == 0)
{
lean_object* x_137; uint8_t x_138; 
x_137 = lean_ctor_get(x_134, 1);
lean_inc(x_137);
lean_dec(x_134);
x_138 = 0;
x_76 = x_138;
x_77 = x_137;
goto block_104;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_134, 1);
lean_inc(x_139);
lean_dec(x_134);
x_140 = l_Lean_Meta_SynthInstance_resume___closed__4;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_141 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_140, x_1, x_2, x_3, x_4, x_5, x_139);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_unbox(x_142);
lean_dec(x_142);
x_76 = x_144;
x_77 = x_143;
goto block_104;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec(x_22);
x_145 = lean_ctor_get(x_141, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
lean_dec(x_141);
x_147 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_147, 0, x_145);
x_39 = x_147;
x_40 = x_146;
goto block_75;
}
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_22);
x_148 = lean_ctor_get(x_134, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_134, 1);
lean_inc(x_149);
lean_dec(x_134);
x_150 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_150, 0, x_148);
x_39 = x_150;
x_40 = x_149;
goto block_75;
}
}
block_75:
{
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_33);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_st_ref_take(x_3, x_40);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_43, 0);
lean_dec(x_46);
lean_ctor_set(x_43, 0, x_37);
x_47 = lean_st_ref_set(x_3, x_43, x_44);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set_tag(x_47, 1);
lean_ctor_set(x_47, 0, x_41);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_41);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_43, 1);
x_53 = lean_ctor_get(x_43, 2);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_43);
x_54 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_54, 0, x_37);
lean_ctor_set(x_54, 1, x_52);
lean_ctor_set(x_54, 2, x_53);
x_55 = lean_st_ref_set(x_3, x_54, x_44);
lean_dec(x_3);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_57 = x_55;
} else {
 lean_dec_ref(x_55);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
 lean_ctor_set_tag(x_58, 1);
}
lean_ctor_set(x_58, 0, x_41);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
lean_dec(x_39);
x_59 = lean_st_ref_take(x_3, x_40);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_60, 0);
lean_dec(x_63);
lean_ctor_set(x_60, 0, x_37);
x_64 = lean_st_ref_set(x_3, x_60, x_61);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
if (lean_is_scalar(x_21)) {
 x_66 = lean_alloc_ctor(0, 4, 0);
} else {
 x_66 = x_21;
}
lean_ctor_set(x_66, 0, x_18);
lean_ctor_set(x_66, 1, x_19);
lean_ctor_set(x_66, 2, x_33);
lean_ctor_set(x_66, 3, x_23);
x_67 = l_Lean_Meta_SynthInstance_consume(x_66, x_1, x_2, x_3, x_4, x_5, x_65);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_68 = lean_ctor_get(x_60, 1);
x_69 = lean_ctor_get(x_60, 2);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_60);
x_70 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_70, 0, x_37);
lean_ctor_set(x_70, 1, x_68);
lean_ctor_set(x_70, 2, x_69);
x_71 = lean_st_ref_set(x_3, x_70, x_61);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
if (lean_is_scalar(x_21)) {
 x_73 = lean_alloc_ctor(0, 4, 0);
} else {
 x_73 = x_21;
}
lean_ctor_set(x_73, 0, x_18);
lean_ctor_set(x_73, 1, x_19);
lean_ctor_set(x_73, 2, x_33);
lean_ctor_set(x_73, 3, x_23);
x_74 = l_Lean_Meta_SynthInstance_consume(x_73, x_1, x_2, x_3, x_4, x_5, x_72);
return x_74;
}
}
}
block_104:
{
if (x_76 == 0)
{
lean_object* x_78; 
lean_dec(x_22);
x_78 = l_Lean_Compiler_checkIsDefinition___closed__5;
x_39 = x_78;
x_40 = x_77;
goto block_75;
}
else
{
lean_object* x_79; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_18);
x_79 = l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1(x_18, x_1, x_2, x_3, x_4, x_5, x_77);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_82 = l_Lean_inferType___at_Lean_Meta_SynthInstance_mkTableKeyFor___spec__1(x_22, x_1, x_2, x_3, x_4, x_5, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_85, 0, x_80);
x_86 = l_Lean_Meta_SynthInstance_resume___closed__7;
x_87 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_88, 0, x_83);
x_89 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_Meta_SynthInstance_resume___closed__4;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_91 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_90, x_89, x_1, x_2, x_3, x_4, x_5, x_84);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_92);
x_39 = x_94;
x_40 = x_93;
goto block_75;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_91, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_91, 1);
lean_inc(x_96);
lean_dec(x_91);
x_97 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_97, 0, x_95);
x_39 = x_97;
x_40 = x_96;
goto block_75;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_80);
x_98 = lean_ctor_get(x_82, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_82, 1);
lean_inc(x_99);
lean_dec(x_82);
x_100 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_100, 0, x_98);
x_39 = x_100;
x_40 = x_99;
goto block_75;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_22);
x_101 = lean_ctor_get(x_79, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_79, 1);
lean_inc(x_102);
lean_dec(x_79);
x_103 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_103, 0, x_101);
x_39 = x_103;
x_40 = x_102;
goto block_75;
}
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_151 = !lean_is_exclusive(x_24);
if (x_151 == 0)
{
return x_24;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_24, 0);
x_153 = lean_ctor_get(x_24, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_24);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_step(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
x_12 = l_Array_isEmpty___rarg(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_free_object(x_7);
lean_dec(x_9);
x_13 = l_Lean_Meta_SynthInstance_resume(x_1, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = 1;
x_17 = lean_box(x_16);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_13);
if (x_22 == 0)
{
return x_13;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_13, 0);
x_24 = lean_ctor_get(x_13, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_13);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_9, 1);
lean_inc(x_26);
lean_dec(x_9);
x_27 = l_Array_isEmpty___rarg(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_free_object(x_7);
x_28 = l_Lean_Meta_SynthInstance_generate(x_1, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
x_31 = 1;
x_32 = lean_box(x_31);
lean_ctor_set(x_28, 0, x_32);
return x_28;
}
else
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_dec(x_28);
x_34 = 1;
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_28);
if (x_37 == 0)
{
return x_28;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_28, 0);
x_39 = lean_ctor_get(x_28, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_28);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; lean_object* x_42; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = 0;
x_42 = lean_box(x_41);
lean_ctor_set(x_7, 0, x_42);
return x_7;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_ctor_get(x_7, 0);
x_44 = lean_ctor_get(x_7, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_7);
x_45 = lean_ctor_get(x_43, 2);
lean_inc(x_45);
x_46 = l_Array_isEmpty___rarg(x_45);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_43);
x_47 = l_Lean_Meta_SynthInstance_resume(x_1, x_2, x_3, x_4, x_5, x_44);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
x_50 = 1;
x_51 = lean_box(x_50);
if (lean_is_scalar(x_49)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_49;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_48);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_47, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_47, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_55 = x_47;
} else {
 lean_dec_ref(x_47);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(1, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
else
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_43, 1);
lean_inc(x_57);
lean_dec(x_43);
x_58 = l_Array_isEmpty___rarg(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = l_Lean_Meta_SynthInstance_generate(x_1, x_2, x_3, x_4, x_5, x_44);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
x_62 = 1;
x_63 = lean_box(x_62);
if (lean_is_scalar(x_61)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_61;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_59, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
else
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = 0;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_44);
return x_71;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getResult(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getResult___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SynthInstance_getResult(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("remaining fuel ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthInstance is out of fuel");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_synth___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_synth___main___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_synth___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_80; lean_object* x_81; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_1, x_10);
lean_dec(x_1);
x_95 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_96 = lean_ctor_get(x_95, 2);
lean_inc(x_96);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_97 = lean_apply_6(x_96, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; uint8_t x_99; 
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get_uint8(x_98, sizeof(void*)*1);
lean_dec(x_98);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
lean_dec(x_97);
x_101 = 0;
x_80 = x_101;
x_81 = x_100;
goto block_94;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_97, 1);
lean_inc(x_102);
lean_dec(x_97);
x_103 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_104 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_103, x_2, x_3, x_4, x_5, x_6, x_102);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_107 = lean_unbox(x_105);
lean_dec(x_105);
x_80 = x_107;
x_81 = x_106;
goto block_94;
}
else
{
uint8_t x_108; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_104);
if (x_108 == 0)
{
return x_104;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_104, 0);
x_110 = lean_ctor_get(x_104, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_104);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_112 = !lean_is_exclusive(x_97);
if (x_112 == 0)
{
return x_97;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_97, 0);
x_114 = lean_ctor_get(x_97, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_97);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
block_79:
{
lean_object* x_13; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_Meta_SynthInstance_step(x_2, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = lean_apply_6(x_18, x_2, x_3, x_4, x_5, x_6, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_20, sizeof(void*)*1);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_dec(x_19);
x_29 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_30 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_29, x_2, x_3, x_4, x_5, x_6, x_28);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
uint8_t x_33; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_30);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_30, 0);
lean_dec(x_34);
x_35 = lean_box(0);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_dec(x_30);
x_40 = l_Lean_Meta_SynthInstance_synth___main___closed__3;
x_41 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_29, x_40, x_2, x_3, x_4, x_5, x_6, x_39);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
x_44 = lean_box(0);
lean_ctor_set(x_41, 0, x_44);
return x_41;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_41);
if (x_48 == 0)
{
return x_41;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 0);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = !lean_is_exclusive(x_30);
if (x_52 == 0)
{
return x_30;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_30, 0);
x_54 = lean_ctor_get(x_30, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_30);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = !lean_is_exclusive(x_19);
if (x_56 == 0)
{
return x_19;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_19, 0);
x_58 = lean_ctor_get(x_19, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_19);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_13, 1);
lean_inc(x_60);
lean_dec(x_13);
x_61 = l_Lean_Meta_SynthInstance_getResult(x_2, x_3, x_4, x_5, x_6, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_1 = x_11;
x_7 = x_63;
goto _start;
}
else
{
uint8_t x_65; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_61);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_61, 0);
lean_dec(x_66);
x_67 = !lean_is_exclusive(x_62);
if (x_67 == 0)
{
return x_61;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_62, 0);
lean_inc(x_68);
lean_dec(x_62);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_61, 0, x_69);
return x_61;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_70 = lean_ctor_get(x_61, 1);
lean_inc(x_70);
lean_dec(x_61);
x_71 = lean_ctor_get(x_62, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 x_72 = x_62;
} else {
 lean_dec_ref(x_62);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 1, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_71);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_70);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_13);
if (x_75 == 0)
{
return x_13;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_13, 0);
x_77 = lean_ctor_get(x_13, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_13);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
block_94:
{
if (x_80 == 0)
{
x_12 = x_81;
goto block_79;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_inc(x_11);
x_82 = l_Nat_repr(x_11);
x_83 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_84, 0, x_83);
x_85 = l_Lean_Meta_SynthInstance_synth___main___closed__6;
x_86 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_87 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_88 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_87, x_86, x_2, x_3, x_4, x_5, x_6, x_81);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; 
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_12 = x_89;
goto block_79;
}
else
{
uint8_t x_90; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_90 = !lean_is_exclusive(x_88);
if (x_90 == 0)
{
return x_88;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_88, 0);
x_92 = lean_ctor_get(x_88, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_88);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_1);
x_116 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_117 = lean_ctor_get(x_116, 2);
lean_inc(x_117);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_118 = lean_apply_6(x_117, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; uint8_t x_120; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get_uint8(x_119, sizeof(void*)*1);
lean_dec(x_119);
if (x_120 == 0)
{
uint8_t x_121; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_121 = !lean_is_exclusive(x_118);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_118, 0);
lean_dec(x_122);
x_123 = lean_box(0);
lean_ctor_set(x_118, 0, x_123);
return x_118;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_118, 1);
lean_inc(x_124);
lean_dec(x_118);
x_125 = lean_box(0);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_118, 1);
lean_inc(x_127);
lean_dec(x_118);
x_128 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_129 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_128, x_2, x_3, x_4, x_5, x_6, x_127);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; uint8_t x_131; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_unbox(x_130);
lean_dec(x_130);
if (x_131 == 0)
{
uint8_t x_132; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_132 = !lean_is_exclusive(x_129);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_129, 0);
lean_dec(x_133);
x_134 = lean_box(0);
lean_ctor_set(x_129, 0, x_134);
return x_129;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_129, 1);
lean_inc(x_135);
lean_dec(x_129);
x_136 = lean_box(0);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_129, 1);
lean_inc(x_138);
lean_dec(x_129);
x_139 = l_Lean_Meta_SynthInstance_synth___main___closed__9;
x_140 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_128, x_139, x_2, x_3, x_4, x_5, x_6, x_138);
if (lean_obj_tag(x_140) == 0)
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_140);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; 
x_142 = lean_ctor_get(x_140, 0);
lean_dec(x_142);
x_143 = lean_box(0);
lean_ctor_set(x_140, 0, x_143);
return x_140;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_140, 1);
lean_inc(x_144);
lean_dec(x_140);
x_145 = lean_box(0);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
else
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_140);
if (x_147 == 0)
{
return x_140;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_140, 0);
x_149 = lean_ctor_get(x_140, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_140);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_151 = !lean_is_exclusive(x_129);
if (x_151 == 0)
{
return x_129;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_129, 0);
x_153 = lean_ctor_get(x_129, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_129);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
else
{
uint8_t x_155; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_155 = !lean_is_exclusive(x_118);
if (x_155 == 0)
{
return x_118;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_118, 0);
x_157 = lean_ctor_get(x_118, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_118);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_synth(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_synth___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_main___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Array_empty___closed__1;
x_3 = l_Lean_Meta_SynthInstance_main___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("main goal ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_main___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_SynthInstance_main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_SynthInstance_main___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_406; 
x_8 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_406 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_406) == 0)
{
lean_object* x_407; uint8_t x_408; 
x_407 = lean_ctor_get(x_406, 0);
lean_inc(x_407);
x_408 = lean_ctor_get_uint8(x_407, sizeof(void*)*1);
lean_dec(x_407);
if (x_408 == 0)
{
lean_object* x_409; uint8_t x_410; 
x_409 = lean_ctor_get(x_406, 1);
lean_inc(x_409);
lean_dec(x_406);
x_410 = 0;
x_10 = x_410;
x_11 = x_409;
goto block_405;
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; uint8_t x_416; 
x_411 = lean_ctor_get(x_406, 1);
lean_inc(x_411);
lean_dec(x_406);
x_412 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_413 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_412, x_3, x_4, x_5, x_6, x_411);
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_413, 1);
lean_inc(x_415);
lean_dec(x_413);
x_416 = lean_unbox(x_414);
lean_dec(x_414);
x_10 = x_416;
x_11 = x_415;
goto block_405;
}
}
else
{
uint8_t x_417; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_417 = !lean_is_exclusive(x_406);
if (x_417 == 0)
{
return x_406;
}
else
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; 
x_418 = lean_ctor_get(x_406, 0);
x_419 = lean_ctor_get(x_406, 1);
lean_inc(x_419);
lean_inc(x_418);
lean_dec(x_406);
x_420 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_420, 0, x_418);
lean_ctor_set(x_420, 1, x_419);
return x_420;
}
}
block_405:
{
if (x_10 == 0)
{
lean_object* x_12; 
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get_uint8(x_13, sizeof(void*)*1);
lean_dec(x_13);
x_16 = lean_st_ref_take(x_6, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_17, 2);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_63; lean_object* x_123; 
x_23 = 0;
lean_ctor_set_uint8(x_18, sizeof(void*)*1, x_23);
x_24 = lean_st_ref_set(x_6, x_17, x_19);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_123 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_25);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; uint8_t x_125; 
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get_uint8(x_124, sizeof(void*)*1);
lean_dec(x_124);
if (x_125 == 0)
{
lean_object* x_126; 
x_126 = lean_ctor_get(x_123, 1);
lean_inc(x_126);
lean_dec(x_123);
x_63 = x_126;
goto block_122;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_127 = lean_ctor_get(x_123, 1);
lean_inc(x_127);
lean_dec(x_123);
x_128 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_129 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_128, x_3, x_4, x_5, x_6, x_127);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_unbox(x_130);
lean_dec(x_130);
if (x_131 == 0)
{
lean_object* x_132; 
x_132 = lean_ctor_get(x_129, 1);
lean_inc(x_132);
lean_dec(x_129);
x_63 = x_132;
goto block_122;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_133 = lean_ctor_get(x_129, 1);
lean_inc(x_133);
lean_dec(x_129);
lean_inc(x_1);
x_134 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_134, 0, x_1);
x_135 = l_Lean_Meta_SynthInstance_main___closed__5;
x_136 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_134);
x_137 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_128, x_136, x_3, x_4, x_5, x_6, x_133);
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
lean_dec(x_137);
x_63 = x_138;
goto block_122;
}
}
}
else
{
lean_object* x_139; lean_object* x_140; 
lean_dec(x_2);
lean_dec(x_1);
x_139 = lean_ctor_get(x_123, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_123, 1);
lean_inc(x_140);
lean_dec(x_123);
x_26 = x_139;
x_27 = x_140;
goto block_62;
}
block_62:
{
lean_object* x_28; 
lean_inc(x_6);
x_28 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_take(x_6, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_31, 2);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_31, 2);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_32);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_15);
x_37 = lean_st_ref_set(x_6, x_31, x_33);
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
lean_ctor_set_tag(x_37, 1);
lean_ctor_set(x_37, 0, x_26);
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_26);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_32, 0);
lean_inc(x_42);
lean_dec(x_32);
x_43 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_15);
lean_ctor_set(x_31, 2, x_43);
x_44 = lean_st_ref_set(x_6, x_31, x_33);
lean_dec(x_6);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_46;
 lean_ctor_set_tag(x_47, 1);
}
lean_ctor_set(x_47, 0, x_26);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_48 = lean_ctor_get(x_31, 0);
x_49 = lean_ctor_get(x_31, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_31);
x_50 = lean_ctor_get(x_32, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 x_51 = x_32;
} else {
 lean_dec_ref(x_32);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(0, 1, 1);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set_uint8(x_52, sizeof(void*)*1, x_15);
x_53 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_53, 0, x_48);
lean_ctor_set(x_53, 1, x_49);
lean_ctor_set(x_53, 2, x_52);
x_54 = lean_st_ref_set(x_6, x_53, x_33);
lean_dec(x_6);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
 lean_ctor_set_tag(x_57, 1);
}
lean_ctor_set(x_57, 0, x_26);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_26);
lean_dec(x_6);
x_58 = !lean_is_exclusive(x_28);
if (x_58 == 0)
{
return x_28;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_28, 0);
x_60 = lean_ctor_get(x_28, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_28);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
block_122:
{
lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_inc(x_1);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_1);
x_65 = 0;
x_66 = lean_box(0);
x_67 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_64, x_65, x_66, x_3, x_4, x_5, x_6, x_63);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_4, x_5, x_6, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
lean_inc(x_71);
x_73 = l_Lean_Meta_SynthInstance_mkTableKey(x_71, x_1);
x_74 = l_Lean_Meta_SynthInstance_main___closed__2;
x_75 = lean_st_mk_ref(x_74, x_72);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_box(1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_76);
x_79 = l_Lean_Meta_SynthInstance_newSubgoal(x_71, x_73, x_68, x_78, x_76, x_3, x_4, x_5, x_6, x_77);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_76);
x_81 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_76, x_3, x_4, x_5, x_6, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_st_ref_get(x_76, x_83);
lean_dec(x_76);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_86 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_85);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_st_ref_take(x_6, x_87);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_89, 2);
lean_inc(x_90);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_dec(x_88);
x_92 = !lean_is_exclusive(x_89);
if (x_92 == 0)
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_89, 2);
lean_dec(x_93);
x_94 = !lean_is_exclusive(x_90);
if (x_94 == 0)
{
lean_object* x_95; uint8_t x_96; 
lean_ctor_set_uint8(x_90, sizeof(void*)*1, x_15);
x_95 = lean_st_ref_set(x_6, x_89, x_91);
lean_dec(x_6);
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; 
x_97 = lean_ctor_get(x_95, 0);
lean_dec(x_97);
lean_ctor_set(x_95, 0, x_82);
return x_95;
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_dec(x_95);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_82);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_100 = lean_ctor_get(x_90, 0);
lean_inc(x_100);
lean_dec(x_90);
x_101 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set_uint8(x_101, sizeof(void*)*1, x_15);
lean_ctor_set(x_89, 2, x_101);
x_102 = lean_st_ref_set(x_6, x_89, x_91);
lean_dec(x_6);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_104 = x_102;
} else {
 lean_dec_ref(x_102);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_82);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_106 = lean_ctor_get(x_89, 0);
x_107 = lean_ctor_get(x_89, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_89);
x_108 = lean_ctor_get(x_90, 0);
lean_inc(x_108);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 x_109 = x_90;
} else {
 lean_dec_ref(x_90);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(0, 1, 1);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set_uint8(x_110, sizeof(void*)*1, x_15);
x_111 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_107);
lean_ctor_set(x_111, 2, x_110);
x_112 = lean_st_ref_set(x_6, x_111, x_91);
lean_dec(x_6);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_114 = x_112;
} else {
 lean_dec_ref(x_112);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_82);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_82);
x_116 = lean_ctor_get(x_86, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_86, 1);
lean_inc(x_117);
lean_dec(x_86);
x_26 = x_116;
x_27 = x_117;
goto block_62;
}
}
else
{
lean_object* x_118; lean_object* x_119; 
lean_dec(x_76);
x_118 = lean_ctor_get(x_81, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_81, 1);
lean_inc(x_119);
lean_dec(x_81);
x_26 = x_118;
x_27 = x_119;
goto block_62;
}
}
else
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_76);
lean_dec(x_2);
x_120 = lean_ctor_get(x_79, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_79, 1);
lean_inc(x_121);
lean_dec(x_79);
x_26 = x_120;
x_27 = x_121;
goto block_62;
}
}
}
else
{
lean_object* x_141; uint8_t x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_170; lean_object* x_217; 
x_141 = lean_ctor_get(x_18, 0);
lean_inc(x_141);
lean_dec(x_18);
x_142 = 0;
x_143 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set_uint8(x_143, sizeof(void*)*1, x_142);
lean_ctor_set(x_17, 2, x_143);
x_144 = lean_st_ref_set(x_6, x_17, x_19);
x_145 = lean_ctor_get(x_144, 1);
lean_inc(x_145);
lean_dec(x_144);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_217 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_145);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; uint8_t x_219; 
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get_uint8(x_218, sizeof(void*)*1);
lean_dec(x_218);
if (x_219 == 0)
{
lean_object* x_220; 
x_220 = lean_ctor_get(x_217, 1);
lean_inc(x_220);
lean_dec(x_217);
x_170 = x_220;
goto block_216;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_221 = lean_ctor_get(x_217, 1);
lean_inc(x_221);
lean_dec(x_217);
x_222 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_223 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_222, x_3, x_4, x_5, x_6, x_221);
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_unbox(x_224);
lean_dec(x_224);
if (x_225 == 0)
{
lean_object* x_226; 
x_226 = lean_ctor_get(x_223, 1);
lean_inc(x_226);
lean_dec(x_223);
x_170 = x_226;
goto block_216;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_227 = lean_ctor_get(x_223, 1);
lean_inc(x_227);
lean_dec(x_223);
lean_inc(x_1);
x_228 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_228, 0, x_1);
x_229 = l_Lean_Meta_SynthInstance_main___closed__5;
x_230 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_228);
x_231 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_222, x_230, x_3, x_4, x_5, x_6, x_227);
x_232 = lean_ctor_get(x_231, 1);
lean_inc(x_232);
lean_dec(x_231);
x_170 = x_232;
goto block_216;
}
}
}
else
{
lean_object* x_233; lean_object* x_234; 
lean_dec(x_2);
lean_dec(x_1);
x_233 = lean_ctor_get(x_217, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_217, 1);
lean_inc(x_234);
lean_dec(x_217);
x_146 = x_233;
x_147 = x_234;
goto block_169;
}
block_169:
{
lean_object* x_148; 
lean_inc(x_6);
x_148 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_147);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
lean_dec(x_148);
x_150 = lean_st_ref_take(x_6, x_149);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_151, 2);
lean_inc(x_152);
x_153 = lean_ctor_get(x_150, 1);
lean_inc(x_153);
lean_dec(x_150);
x_154 = lean_ctor_get(x_151, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_151, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 lean_ctor_release(x_151, 2);
 x_156 = x_151;
} else {
 lean_dec_ref(x_151);
 x_156 = lean_box(0);
}
x_157 = lean_ctor_get(x_152, 0);
lean_inc(x_157);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 x_158 = x_152;
} else {
 lean_dec_ref(x_152);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(0, 1, 1);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set_uint8(x_159, sizeof(void*)*1, x_15);
if (lean_is_scalar(x_156)) {
 x_160 = lean_alloc_ctor(0, 3, 0);
} else {
 x_160 = x_156;
}
lean_ctor_set(x_160, 0, x_154);
lean_ctor_set(x_160, 1, x_155);
lean_ctor_set(x_160, 2, x_159);
x_161 = lean_st_ref_set(x_6, x_160, x_153);
lean_dec(x_6);
x_162 = lean_ctor_get(x_161, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_163 = x_161;
} else {
 lean_dec_ref(x_161);
 x_163 = lean_box(0);
}
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 2, 0);
} else {
 x_164 = x_163;
 lean_ctor_set_tag(x_164, 1);
}
lean_ctor_set(x_164, 0, x_146);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_146);
lean_dec(x_6);
x_165 = lean_ctor_get(x_148, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_148, 1);
lean_inc(x_166);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_167 = x_148;
} else {
 lean_dec_ref(x_148);
 x_167 = lean_box(0);
}
if (lean_is_scalar(x_167)) {
 x_168 = lean_alloc_ctor(1, 2, 0);
} else {
 x_168 = x_167;
}
lean_ctor_set(x_168, 0, x_165);
lean_ctor_set(x_168, 1, x_166);
return x_168;
}
}
block_216:
{
lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_inc(x_1);
x_171 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_171, 0, x_1);
x_172 = 0;
x_173 = lean_box(0);
x_174 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_171, x_172, x_173, x_3, x_4, x_5, x_6, x_170);
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
lean_dec(x_174);
x_177 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_4, x_5, x_6, x_176);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
lean_inc(x_178);
x_180 = l_Lean_Meta_SynthInstance_mkTableKey(x_178, x_1);
x_181 = l_Lean_Meta_SynthInstance_main___closed__2;
x_182 = lean_st_mk_ref(x_181, x_179);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = lean_box(1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_183);
x_186 = l_Lean_Meta_SynthInstance_newSubgoal(x_178, x_180, x_175, x_185, x_183, x_3, x_4, x_5, x_6, x_184);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_186, 1);
lean_inc(x_187);
lean_dec(x_186);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_183);
x_188 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_183, x_3, x_4, x_5, x_6, x_187);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = lean_st_ref_get(x_183, x_190);
lean_dec(x_183);
x_192 = lean_ctor_get(x_191, 1);
lean_inc(x_192);
lean_dec(x_191);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_193 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_192);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_194 = lean_ctor_get(x_193, 1);
lean_inc(x_194);
lean_dec(x_193);
x_195 = lean_st_ref_take(x_6, x_194);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_196, 2);
lean_inc(x_197);
x_198 = lean_ctor_get(x_195, 1);
lean_inc(x_198);
lean_dec(x_195);
x_199 = lean_ctor_get(x_196, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_196, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 lean_ctor_release(x_196, 2);
 x_201 = x_196;
} else {
 lean_dec_ref(x_196);
 x_201 = lean_box(0);
}
x_202 = lean_ctor_get(x_197, 0);
lean_inc(x_202);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 x_203 = x_197;
} else {
 lean_dec_ref(x_197);
 x_203 = lean_box(0);
}
if (lean_is_scalar(x_203)) {
 x_204 = lean_alloc_ctor(0, 1, 1);
} else {
 x_204 = x_203;
}
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set_uint8(x_204, sizeof(void*)*1, x_15);
if (lean_is_scalar(x_201)) {
 x_205 = lean_alloc_ctor(0, 3, 0);
} else {
 x_205 = x_201;
}
lean_ctor_set(x_205, 0, x_199);
lean_ctor_set(x_205, 1, x_200);
lean_ctor_set(x_205, 2, x_204);
x_206 = lean_st_ref_set(x_6, x_205, x_198);
lean_dec(x_6);
x_207 = lean_ctor_get(x_206, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_208 = x_206;
} else {
 lean_dec_ref(x_206);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(0, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_189);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
else
{
lean_object* x_210; lean_object* x_211; 
lean_dec(x_189);
x_210 = lean_ctor_get(x_193, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_193, 1);
lean_inc(x_211);
lean_dec(x_193);
x_146 = x_210;
x_147 = x_211;
goto block_169;
}
}
else
{
lean_object* x_212; lean_object* x_213; 
lean_dec(x_183);
x_212 = lean_ctor_get(x_188, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_188, 1);
lean_inc(x_213);
lean_dec(x_188);
x_146 = x_212;
x_147 = x_213;
goto block_169;
}
}
else
{
lean_object* x_214; lean_object* x_215; 
lean_dec(x_183);
lean_dec(x_2);
x_214 = lean_ctor_get(x_186, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_186, 1);
lean_inc(x_215);
lean_dec(x_186);
x_146 = x_214;
x_147 = x_215;
goto block_169;
}
}
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; uint8_t x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_268; lean_object* x_315; 
x_235 = lean_ctor_get(x_17, 0);
x_236 = lean_ctor_get(x_17, 1);
lean_inc(x_236);
lean_inc(x_235);
lean_dec(x_17);
x_237 = lean_ctor_get(x_18, 0);
lean_inc(x_237);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 x_238 = x_18;
} else {
 lean_dec_ref(x_18);
 x_238 = lean_box(0);
}
x_239 = 0;
if (lean_is_scalar(x_238)) {
 x_240 = lean_alloc_ctor(0, 1, 1);
} else {
 x_240 = x_238;
}
lean_ctor_set(x_240, 0, x_237);
lean_ctor_set_uint8(x_240, sizeof(void*)*1, x_239);
x_241 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_241, 0, x_235);
lean_ctor_set(x_241, 1, x_236);
lean_ctor_set(x_241, 2, x_240);
x_242 = lean_st_ref_set(x_6, x_241, x_19);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
lean_dec(x_242);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_315 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_243);
if (lean_obj_tag(x_315) == 0)
{
lean_object* x_316; uint8_t x_317; 
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get_uint8(x_316, sizeof(void*)*1);
lean_dec(x_316);
if (x_317 == 0)
{
lean_object* x_318; 
x_318 = lean_ctor_get(x_315, 1);
lean_inc(x_318);
lean_dec(x_315);
x_268 = x_318;
goto block_314;
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; 
x_319 = lean_ctor_get(x_315, 1);
lean_inc(x_319);
lean_dec(x_315);
x_320 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_321 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_320, x_3, x_4, x_5, x_6, x_319);
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_unbox(x_322);
lean_dec(x_322);
if (x_323 == 0)
{
lean_object* x_324; 
x_324 = lean_ctor_get(x_321, 1);
lean_inc(x_324);
lean_dec(x_321);
x_268 = x_324;
goto block_314;
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_325 = lean_ctor_get(x_321, 1);
lean_inc(x_325);
lean_dec(x_321);
lean_inc(x_1);
x_326 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_326, 0, x_1);
x_327 = l_Lean_Meta_SynthInstance_main___closed__5;
x_328 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_328, 0, x_327);
lean_ctor_set(x_328, 1, x_326);
x_329 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_320, x_328, x_3, x_4, x_5, x_6, x_325);
x_330 = lean_ctor_get(x_329, 1);
lean_inc(x_330);
lean_dec(x_329);
x_268 = x_330;
goto block_314;
}
}
}
else
{
lean_object* x_331; lean_object* x_332; 
lean_dec(x_2);
lean_dec(x_1);
x_331 = lean_ctor_get(x_315, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_315, 1);
lean_inc(x_332);
lean_dec(x_315);
x_244 = x_331;
x_245 = x_332;
goto block_267;
}
block_267:
{
lean_object* x_246; 
lean_inc(x_6);
x_246 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_245);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_247 = lean_ctor_get(x_246, 1);
lean_inc(x_247);
lean_dec(x_246);
x_248 = lean_st_ref_take(x_6, x_247);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_249, 2);
lean_inc(x_250);
x_251 = lean_ctor_get(x_248, 1);
lean_inc(x_251);
lean_dec(x_248);
x_252 = lean_ctor_get(x_249, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_249, 1);
lean_inc(x_253);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 lean_ctor_release(x_249, 2);
 x_254 = x_249;
} else {
 lean_dec_ref(x_249);
 x_254 = lean_box(0);
}
x_255 = lean_ctor_get(x_250, 0);
lean_inc(x_255);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 x_256 = x_250;
} else {
 lean_dec_ref(x_250);
 x_256 = lean_box(0);
}
if (lean_is_scalar(x_256)) {
 x_257 = lean_alloc_ctor(0, 1, 1);
} else {
 x_257 = x_256;
}
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set_uint8(x_257, sizeof(void*)*1, x_15);
if (lean_is_scalar(x_254)) {
 x_258 = lean_alloc_ctor(0, 3, 0);
} else {
 x_258 = x_254;
}
lean_ctor_set(x_258, 0, x_252);
lean_ctor_set(x_258, 1, x_253);
lean_ctor_set(x_258, 2, x_257);
x_259 = lean_st_ref_set(x_6, x_258, x_251);
lean_dec(x_6);
x_260 = lean_ctor_get(x_259, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_259)) {
 lean_ctor_release(x_259, 0);
 lean_ctor_release(x_259, 1);
 x_261 = x_259;
} else {
 lean_dec_ref(x_259);
 x_261 = lean_box(0);
}
if (lean_is_scalar(x_261)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_261;
 lean_ctor_set_tag(x_262, 1);
}
lean_ctor_set(x_262, 0, x_244);
lean_ctor_set(x_262, 1, x_260);
return x_262;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_244);
lean_dec(x_6);
x_263 = lean_ctor_get(x_246, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_246, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_265 = x_246;
} else {
 lean_dec_ref(x_246);
 x_265 = lean_box(0);
}
if (lean_is_scalar(x_265)) {
 x_266 = lean_alloc_ctor(1, 2, 0);
} else {
 x_266 = x_265;
}
lean_ctor_set(x_266, 0, x_263);
lean_ctor_set(x_266, 1, x_264);
return x_266;
}
}
block_314:
{
lean_object* x_269; uint8_t x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_inc(x_1);
x_269 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_269, 0, x_1);
x_270 = 0;
x_271 = lean_box(0);
x_272 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_269, x_270, x_271, x_3, x_4, x_5, x_6, x_268);
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_272, 1);
lean_inc(x_274);
lean_dec(x_272);
x_275 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_4, x_5, x_6, x_274);
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
lean_dec(x_275);
lean_inc(x_276);
x_278 = l_Lean_Meta_SynthInstance_mkTableKey(x_276, x_1);
x_279 = l_Lean_Meta_SynthInstance_main___closed__2;
x_280 = lean_st_mk_ref(x_279, x_277);
x_281 = lean_ctor_get(x_280, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_280, 1);
lean_inc(x_282);
lean_dec(x_280);
x_283 = lean_box(1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_281);
x_284 = l_Lean_Meta_SynthInstance_newSubgoal(x_276, x_278, x_273, x_283, x_281, x_3, x_4, x_5, x_6, x_282);
if (lean_obj_tag(x_284) == 0)
{
lean_object* x_285; lean_object* x_286; 
x_285 = lean_ctor_get(x_284, 1);
lean_inc(x_285);
lean_dec(x_284);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_281);
x_286 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_281, x_3, x_4, x_5, x_6, x_285);
if (lean_obj_tag(x_286) == 0)
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_287 = lean_ctor_get(x_286, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_286, 1);
lean_inc(x_288);
lean_dec(x_286);
x_289 = lean_st_ref_get(x_281, x_288);
lean_dec(x_281);
x_290 = lean_ctor_get(x_289, 1);
lean_inc(x_290);
lean_dec(x_289);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_291 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_290);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_292 = lean_ctor_get(x_291, 1);
lean_inc(x_292);
lean_dec(x_291);
x_293 = lean_st_ref_take(x_6, x_292);
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_294, 2);
lean_inc(x_295);
x_296 = lean_ctor_get(x_293, 1);
lean_inc(x_296);
lean_dec(x_293);
x_297 = lean_ctor_get(x_294, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_294, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 lean_ctor_release(x_294, 1);
 lean_ctor_release(x_294, 2);
 x_299 = x_294;
} else {
 lean_dec_ref(x_294);
 x_299 = lean_box(0);
}
x_300 = lean_ctor_get(x_295, 0);
lean_inc(x_300);
if (lean_is_exclusive(x_295)) {
 lean_ctor_release(x_295, 0);
 x_301 = x_295;
} else {
 lean_dec_ref(x_295);
 x_301 = lean_box(0);
}
if (lean_is_scalar(x_301)) {
 x_302 = lean_alloc_ctor(0, 1, 1);
} else {
 x_302 = x_301;
}
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set_uint8(x_302, sizeof(void*)*1, x_15);
if (lean_is_scalar(x_299)) {
 x_303 = lean_alloc_ctor(0, 3, 0);
} else {
 x_303 = x_299;
}
lean_ctor_set(x_303, 0, x_297);
lean_ctor_set(x_303, 1, x_298);
lean_ctor_set(x_303, 2, x_302);
x_304 = lean_st_ref_set(x_6, x_303, x_296);
lean_dec(x_6);
x_305 = lean_ctor_get(x_304, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_304)) {
 lean_ctor_release(x_304, 0);
 lean_ctor_release(x_304, 1);
 x_306 = x_304;
} else {
 lean_dec_ref(x_304);
 x_306 = lean_box(0);
}
if (lean_is_scalar(x_306)) {
 x_307 = lean_alloc_ctor(0, 2, 0);
} else {
 x_307 = x_306;
}
lean_ctor_set(x_307, 0, x_287);
lean_ctor_set(x_307, 1, x_305);
return x_307;
}
else
{
lean_object* x_308; lean_object* x_309; 
lean_dec(x_287);
x_308 = lean_ctor_get(x_291, 0);
lean_inc(x_308);
x_309 = lean_ctor_get(x_291, 1);
lean_inc(x_309);
lean_dec(x_291);
x_244 = x_308;
x_245 = x_309;
goto block_267;
}
}
else
{
lean_object* x_310; lean_object* x_311; 
lean_dec(x_281);
x_310 = lean_ctor_get(x_286, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_286, 1);
lean_inc(x_311);
lean_dec(x_286);
x_244 = x_310;
x_245 = x_311;
goto block_267;
}
}
else
{
lean_object* x_312; lean_object* x_313; 
lean_dec(x_281);
lean_dec(x_2);
x_312 = lean_ctor_get(x_284, 0);
lean_inc(x_312);
x_313 = lean_ctor_get(x_284, 1);
lean_inc(x_313);
lean_dec(x_284);
x_244 = x_312;
x_245 = x_313;
goto block_267;
}
}
}
}
else
{
uint8_t x_333; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_333 = !lean_is_exclusive(x_12);
if (x_333 == 0)
{
return x_12;
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_334 = lean_ctor_get(x_12, 0);
x_335 = lean_ctor_get(x_12, 1);
lean_inc(x_335);
lean_inc(x_334);
lean_dec(x_12);
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_334);
lean_ctor_set(x_336, 1, x_335);
return x_336;
}
}
}
else
{
lean_object* x_337; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_337 = l___private_Lean_Util_Trace_3__getResetTraces___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__6(x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_337) == 0)
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_349; lean_object* x_383; 
x_338 = lean_ctor_get(x_337, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_337, 1);
lean_inc(x_339);
lean_dec(x_337);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_383 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_339);
if (lean_obj_tag(x_383) == 0)
{
lean_object* x_384; uint8_t x_385; 
x_384 = lean_ctor_get(x_383, 0);
lean_inc(x_384);
x_385 = lean_ctor_get_uint8(x_384, sizeof(void*)*1);
lean_dec(x_384);
if (x_385 == 0)
{
lean_object* x_386; 
x_386 = lean_ctor_get(x_383, 1);
lean_inc(x_386);
lean_dec(x_383);
x_349 = x_386;
goto block_382;
}
else
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; uint8_t x_391; 
x_387 = lean_ctor_get(x_383, 1);
lean_inc(x_387);
lean_dec(x_383);
x_388 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_389 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_388, x_3, x_4, x_5, x_6, x_387);
x_390 = lean_ctor_get(x_389, 0);
lean_inc(x_390);
x_391 = lean_unbox(x_390);
lean_dec(x_390);
if (x_391 == 0)
{
lean_object* x_392; 
x_392 = lean_ctor_get(x_389, 1);
lean_inc(x_392);
lean_dec(x_389);
x_349 = x_392;
goto block_382;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; 
x_393 = lean_ctor_get(x_389, 1);
lean_inc(x_393);
lean_dec(x_389);
lean_inc(x_1);
x_394 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_394, 0, x_1);
x_395 = l_Lean_Meta_SynthInstance_main___closed__5;
x_396 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_396, 0, x_395);
lean_ctor_set(x_396, 1, x_394);
x_397 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_388, x_396, x_3, x_4, x_5, x_6, x_393);
x_398 = lean_ctor_get(x_397, 1);
lean_inc(x_398);
lean_dec(x_397);
x_349 = x_398;
goto block_382;
}
}
}
else
{
lean_object* x_399; lean_object* x_400; 
lean_dec(x_2);
lean_dec(x_1);
x_399 = lean_ctor_get(x_383, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_383, 1);
lean_inc(x_400);
lean_dec(x_383);
x_340 = x_399;
x_341 = x_400;
goto block_348;
}
block_348:
{
lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_342 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_343 = l___private_Lean_Util_Trace_2__addNode___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__7(x_338, x_342, x_3, x_4, x_5, x_6, x_341);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_344 = !lean_is_exclusive(x_343);
if (x_344 == 0)
{
lean_object* x_345; 
x_345 = lean_ctor_get(x_343, 0);
lean_dec(x_345);
lean_ctor_set_tag(x_343, 1);
lean_ctor_set(x_343, 0, x_340);
return x_343;
}
else
{
lean_object* x_346; lean_object* x_347; 
x_346 = lean_ctor_get(x_343, 1);
lean_inc(x_346);
lean_dec(x_343);
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_340);
lean_ctor_set(x_347, 1, x_346);
return x_347;
}
}
block_382:
{
lean_object* x_350; uint8_t x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; 
lean_inc(x_1);
x_350 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_350, 0, x_1);
x_351 = 0;
x_352 = lean_box(0);
x_353 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_350, x_351, x_352, x_3, x_4, x_5, x_6, x_349);
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_353, 1);
lean_inc(x_355);
lean_dec(x_353);
x_356 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_4, x_5, x_6, x_355);
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
lean_dec(x_356);
lean_inc(x_357);
x_359 = l_Lean_Meta_SynthInstance_mkTableKey(x_357, x_1);
x_360 = l_Lean_Meta_SynthInstance_main___closed__2;
x_361 = lean_st_mk_ref(x_360, x_358);
x_362 = lean_ctor_get(x_361, 0);
lean_inc(x_362);
x_363 = lean_ctor_get(x_361, 1);
lean_inc(x_363);
lean_dec(x_361);
x_364 = lean_box(1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_362);
x_365 = l_Lean_Meta_SynthInstance_newSubgoal(x_357, x_359, x_354, x_364, x_362, x_3, x_4, x_5, x_6, x_363);
if (lean_obj_tag(x_365) == 0)
{
lean_object* x_366; lean_object* x_367; 
x_366 = lean_ctor_get(x_365, 1);
lean_inc(x_366);
lean_dec(x_365);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_362);
x_367 = l_Lean_Meta_SynthInstance_synth___main(x_2, x_362, x_3, x_4, x_5, x_6, x_366);
if (lean_obj_tag(x_367) == 0)
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; 
x_368 = lean_ctor_get(x_367, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_367, 1);
lean_inc(x_369);
lean_dec(x_367);
x_370 = lean_st_ref_get(x_362, x_369);
lean_dec(x_362);
x_371 = lean_ctor_get(x_370, 1);
lean_inc(x_371);
lean_dec(x_370);
x_372 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_373 = l___private_Lean_Util_Trace_2__addNode___at___private_Lean_Meta_LevelDefEq_10__processPostponedStep___spec__7(x_338, x_372, x_3, x_4, x_5, x_6, x_371);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_374 = !lean_is_exclusive(x_373);
if (x_374 == 0)
{
lean_object* x_375; 
x_375 = lean_ctor_get(x_373, 0);
lean_dec(x_375);
lean_ctor_set(x_373, 0, x_368);
return x_373;
}
else
{
lean_object* x_376; lean_object* x_377; 
x_376 = lean_ctor_get(x_373, 1);
lean_inc(x_376);
lean_dec(x_373);
x_377 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_377, 0, x_368);
lean_ctor_set(x_377, 1, x_376);
return x_377;
}
}
else
{
lean_object* x_378; lean_object* x_379; 
lean_dec(x_362);
x_378 = lean_ctor_get(x_367, 0);
lean_inc(x_378);
x_379 = lean_ctor_get(x_367, 1);
lean_inc(x_379);
lean_dec(x_367);
x_340 = x_378;
x_341 = x_379;
goto block_348;
}
}
else
{
lean_object* x_380; lean_object* x_381; 
lean_dec(x_362);
lean_dec(x_2);
x_380 = lean_ctor_get(x_365, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_365, 1);
lean_inc(x_381);
lean_dec(x_365);
x_340 = x_380;
x_341 = x_381;
goto block_348;
}
}
}
else
{
uint8_t x_401; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_401 = !lean_is_exclusive(x_337);
if (x_401 == 0)
{
return x_337;
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_402 = lean_ctor_get(x_337, 0);
x_403 = lean_ctor_get(x_337, 1);
lean_inc(x_403);
lean_inc(x_402);
lean_dec(x_337);
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_402);
lean_ctor_set(x_404, 1, x_403);
return x_404;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_nat_dec_lt(x_4, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_1, x_13, x_5, x_6, x_7, x_8, x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_array_fget(x_3, x_4);
x_21 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_20, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_24);
x_25 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_24, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_20);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_4 = x_29;
x_9 = x_27;
goto _start;
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_24);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_4, x_33);
lean_dec(x_4);
x_35 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_31);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_5, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_5, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_5, 2);
lean_inc(x_40);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_32);
lean_ctor_set(x_41, 1, x_20);
x_42 = lean_array_push(x_40, x_41);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_38);
lean_ctor_set(x_43, 1, x_39);
lean_ctor_set(x_43, 2, x_42);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_44 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3(x_1, x_2, x_3, x_34, x_43, x_6, x_7, x_8, x_37);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_restoreSynthInstanceCache(x_36, x_5, x_6, x_7, x_8, x_46);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set(x_47, 0, x_45);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_44, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_dec(x_44);
x_54 = l_Lean_restoreSynthInstanceCache(x_36, x_5, x_6, x_7, x_8, x_53);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
lean_ctor_set_tag(x_54, 1);
lean_ctor_set(x_54, 0, x_52);
return x_54;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
default: 
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_25, 1);
lean_inc(x_59);
lean_dec(x_25);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_60 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_24, x_5, x_6, x_7, x_8, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_20);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_add(x_4, x_63);
lean_dec(x_4);
x_4 = x_64;
x_9 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_66 = lean_ctor_get(x_60, 1);
lean_inc(x_66);
lean_dec(x_60);
x_67 = lean_ctor_get(x_61, 0);
lean_inc(x_67);
lean_dec(x_61);
x_68 = lean_unsigned_to_nat(1u);
x_69 = lean_nat_add(x_4, x_68);
lean_dec(x_4);
x_70 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_66);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_5, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_5, 1);
lean_inc(x_74);
x_75 = lean_ctor_get(x_5, 2);
lean_inc(x_75);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_67);
lean_ctor_set(x_76, 1, x_20);
x_77 = lean_array_push(x_75, x_76);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_74);
lean_ctor_set(x_78, 2, x_77);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_79 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3(x_1, x_2, x_3, x_69, x_78, x_6, x_7, x_8, x_72);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_restoreSynthInstanceCache(x_71, x_5, x_6, x_7, x_8, x_81);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
lean_ctor_set(x_82, 0, x_80);
return x_82;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_87 = lean_ctor_get(x_79, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_79, 1);
lean_inc(x_88);
lean_dec(x_79);
x_89 = l_Lean_restoreSynthInstanceCache(x_71, x_5, x_6, x_7, x_8, x_88);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_89, 0);
lean_dec(x_91);
lean_ctor_set_tag(x_89, 1);
lean_ctor_set(x_89, 0, x_87);
return x_89;
}
else
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_dec(x_89);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_87);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_60);
if (x_94 == 0)
{
return x_60;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_60, 0);
x_96 = lean_ctor_get(x_60, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_60);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_24);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_25);
if (x_98 == 0)
{
return x_25;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_25, 0);
x_100 = lean_ctor_get(x_25, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_25);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_21);
if (x_102 == 0)
{
return x_21;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_21, 0);
x_104 = lean_ctor_get(x_21, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_21);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isForall(x_7);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_1, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_2, x_15, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__2(x_3, x_4, x_5, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_22;
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_inc(x_8);
x_16 = lean_alloc_closure((void*)(l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2), 6, 1);
lean_closure_set(x_16, 0, x_8);
x_17 = lean_box(x_1);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_8);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___lambda__1___boxed), 12, 6);
lean_closure_set(x_18, 0, x_8);
lean_closure_set(x_18, 1, x_4);
lean_closure_set(x_18, 2, x_17);
lean_closure_set(x_18, 3, x_2);
lean_closure_set(x_18, 4, x_3);
lean_closure_set(x_18, 5, x_7);
x_19 = lean_array_get_size(x_9);
x_20 = lean_nat_dec_lt(x_10, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = l_ReaderT_bind___at_Lean_getLCtx___spec__2___rarg(x_16, x_18, x_11, x_12, x_13, x_14, x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_16);
x_22 = lean_array_fget(x_9, x_10);
x_23 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_22, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_LocalDecl_type(x_24);
lean_dec(x_24);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_26);
x_27 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_26, x_11, x_12, x_13, x_14, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
switch (lean_obj_tag(x_28)) {
case 0:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_26);
lean_dec(x_22);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_10, x_30);
lean_dec(x_10);
x_10 = x_31;
x_15 = x_29;
goto _start;
}
case 1:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_26);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_10, x_35);
lean_dec(x_10);
x_37 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_12, x_13, x_14, x_33);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_11, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_11, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_11, 2);
lean_inc(x_42);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_22);
x_44 = lean_array_push(x_42, x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_44);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_46 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_36, x_45, x_12, x_13, x_14, x_39);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_restoreSynthInstanceCache(x_38, x_11, x_12, x_13, x_14, x_48);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set(x_49, 0, x_47);
return x_49;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_46, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_46, 1);
lean_inc(x_55);
lean_dec(x_46);
x_56 = l_Lean_restoreSynthInstanceCache(x_38, x_11, x_12, x_13, x_14, x_55);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_56, 0);
lean_dec(x_58);
lean_ctor_set_tag(x_56, 1);
lean_ctor_set(x_56, 0, x_54);
return x_56;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_54);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
default: 
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_27, 1);
lean_inc(x_61);
lean_dec(x_27);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_62 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_26, x_11, x_12, x_13, x_14, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_22);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_add(x_10, x_65);
lean_dec(x_10);
x_10 = x_66;
x_15 = x_64;
goto _start;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
lean_dec(x_62);
x_69 = lean_ctor_get(x_63, 0);
lean_inc(x_69);
lean_dec(x_63);
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_10, x_70);
lean_dec(x_10);
x_72 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_12, x_13, x_14, x_68);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_ctor_get(x_11, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_11, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_11, 2);
lean_inc(x_77);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_69);
lean_ctor_set(x_78, 1, x_22);
x_79 = lean_array_push(x_77, x_78);
x_80 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_80, 0, x_75);
lean_ctor_set(x_80, 1, x_76);
lean_ctor_set(x_80, 2, x_79);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_81 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_71, x_80, x_12, x_13, x_14, x_74);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = l_Lean_restoreSynthInstanceCache(x_73, x_11, x_12, x_13, x_14, x_83);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_85 = !lean_is_exclusive(x_84);
if (x_85 == 0)
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_84, 0);
lean_dec(x_86);
lean_ctor_set(x_84, 0, x_82);
return x_84;
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_84, 1);
lean_inc(x_87);
lean_dec(x_84);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_82);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_89 = lean_ctor_get(x_81, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_81, 1);
lean_inc(x_90);
lean_dec(x_81);
x_91 = l_Lean_restoreSynthInstanceCache(x_73, x_11, x_12, x_13, x_14, x_90);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_ctor_get(x_91, 0);
lean_dec(x_93);
lean_ctor_set_tag(x_91, 1);
lean_ctor_set(x_91, 0, x_89);
return x_91;
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_dec(x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_89);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_96 = !lean_is_exclusive(x_62);
if (x_96 == 0)
{
return x_62;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_62, 0);
x_98 = lean_ctor_get(x_62, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_62);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_100 = !lean_is_exclusive(x_27);
if (x_100 == 0)
{
return x_27;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_27, 0);
x_102 = lean_ctor_get(x_27, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_27);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = !lean_is_exclusive(x_23);
if (x_104 == 0)
{
return x_23;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_23, 0);
x_106 = lean_ctor_get(x_23, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_23);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_nat_dec_lt(x_4, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_1, x_13, x_5, x_6, x_7, x_8, x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_array_fget(x_3, x_4);
x_21 = l_Lean_getFVarLocalDecl___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__5(x_20, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_24);
x_25 = l___private_Lean_Meta_Basic_8__isClassQuick_x3f___main(x_24, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_20);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_4 = x_29;
x_9 = x_27;
goto _start;
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_24);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_4, x_33);
lean_dec(x_4);
x_35 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_31);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_5, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_5, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_5, 2);
lean_inc(x_40);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_32);
lean_ctor_set(x_41, 1, x_20);
x_42 = lean_array_push(x_40, x_41);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_38);
lean_ctor_set(x_43, 1, x_39);
lean_ctor_set(x_43, 2, x_42);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_44 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5(x_1, x_2, x_3, x_34, x_43, x_6, x_7, x_8, x_37);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_restoreSynthInstanceCache(x_36, x_5, x_6, x_7, x_8, x_46);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set(x_47, 0, x_45);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_44, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_dec(x_44);
x_54 = l_Lean_restoreSynthInstanceCache(x_36, x_5, x_6, x_7, x_8, x_53);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
lean_ctor_set_tag(x_54, 1);
lean_ctor_set(x_54, 0, x_52);
return x_54;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
default: 
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_25, 1);
lean_inc(x_59);
lean_dec(x_25);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_60 = l___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main(x_24, x_5, x_6, x_7, x_8, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_20);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_add(x_4, x_63);
lean_dec(x_4);
x_4 = x_64;
x_9 = x_62;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_66 = lean_ctor_get(x_60, 1);
lean_inc(x_66);
lean_dec(x_60);
x_67 = lean_ctor_get(x_61, 0);
lean_inc(x_67);
lean_dec(x_61);
x_68 = lean_unsigned_to_nat(1u);
x_69 = lean_nat_add(x_4, x_68);
lean_dec(x_4);
x_70 = l_Lean_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_66);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_5, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_5, 1);
lean_inc(x_74);
x_75 = lean_ctor_get(x_5, 2);
lean_inc(x_75);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_67);
lean_ctor_set(x_76, 1, x_20);
x_77 = lean_array_push(x_75, x_76);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_74);
lean_ctor_set(x_78, 2, x_77);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_79 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5(x_1, x_2, x_3, x_69, x_78, x_6, x_7, x_8, x_72);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_restoreSynthInstanceCache(x_71, x_5, x_6, x_7, x_8, x_81);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
lean_ctor_set(x_82, 0, x_80);
return x_82;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_87 = lean_ctor_get(x_79, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_79, 1);
lean_inc(x_88);
lean_dec(x_79);
x_89 = l_Lean_restoreSynthInstanceCache(x_71, x_5, x_6, x_7, x_8, x_88);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_89, 0);
lean_dec(x_91);
lean_ctor_set_tag(x_89, 1);
lean_ctor_set(x_89, 0, x_87);
return x_89;
}
else
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_dec(x_89);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_87);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_60);
if (x_94 == 0)
{
return x_60;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_60, 0);
x_96 = lean_ctor_get(x_60, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_60);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_24);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_25);
if (x_98 == 0)
{
return x_25;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_25, 0);
x_100 = lean_ctor_get(x_25, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_25);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_21);
if (x_102 == 0)
{
return x_21;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_21, 0);
x_104 = lean_ctor_get(x_21, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_21);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
if (lean_obj_tag(x_6) == 7)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint64_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = lean_ctor_get(x_6, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_6, 2);
lean_inc(x_27);
x_28 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_29 = lean_array_get_size(x_4);
x_30 = lean_expr_instantiate_rev_range(x_26, x_5, x_29, x_4);
lean_dec(x_29);
lean_dec(x_26);
x_31 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = (uint8_t)((x_28 << 24) >> 61);
lean_inc(x_32);
x_35 = lean_local_ctx_mk_local_decl(x_3, x_32, x_25, x_30, x_34);
x_36 = l_Lean_mkFVar(x_32);
x_37 = lean_array_push(x_4, x_36);
x_3 = x_35;
x_4 = x_37;
x_6 = x_27;
x_11 = x_33;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint64_t x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_39 = lean_ctor_get(x_6, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_6, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_6, 2);
lean_inc(x_41);
x_42 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
x_43 = lean_ctor_get(x_2, 0);
lean_inc(x_43);
x_44 = lean_array_get_size(x_4);
x_45 = lean_nat_dec_lt(x_44, x_43);
lean_dec(x_43);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_2);
x_46 = lean_expr_instantiate_rev_range(x_6, x_5, x_44, x_4);
lean_dec(x_44);
lean_dec(x_6);
x_47 = !lean_is_exclusive(x_7);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_7, 1);
lean_dec(x_48);
lean_ctor_set(x_7, 1, x_3);
lean_inc(x_4);
x_49 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5(x_4, x_46, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_7, 0);
x_51 = lean_ctor_get(x_7, 2);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_7);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_3);
lean_ctor_set(x_52, 2, x_51);
lean_inc(x_4);
x_53 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5(x_4, x_46, x_4, x_5, x_52, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_6);
x_54 = lean_expr_instantiate_rev_range(x_40, x_5, x_44, x_4);
lean_dec(x_44);
lean_dec(x_40);
x_55 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = (uint8_t)((x_42 << 24) >> 61);
lean_inc(x_56);
x_59 = lean_local_ctx_mk_local_decl(x_3, x_56, x_39, x_54, x_58);
x_60 = l_Lean_mkFVar(x_56);
x_61 = lean_array_push(x_4, x_60);
x_3 = x_59;
x_4 = x_61;
x_6 = x_41;
x_11 = x_57;
goto _start;
}
}
}
else
{
lean_object* x_63; 
x_63 = lean_box(0);
x_12 = x_63;
goto block_24;
}
block_24:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_12);
x_13 = lean_array_get_size(x_4);
x_14 = lean_expr_instantiate_rev_range(x_6, x_5, x_13, x_4);
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_7, 1);
lean_dec(x_16);
lean_inc(x_3);
lean_ctor_set(x_7, 1, x_3);
if (x_1 == 0)
{
lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_4);
x_17 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3(x_4, x_14, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_17;
}
else
{
lean_object* x_18; 
lean_inc(x_5);
lean_inc(x_4);
x_18 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_14, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 2);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
lean_inc(x_3);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_3);
lean_ctor_set(x_21, 2, x_20);
if (x_1 == 0)
{
lean_object* x_22; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_4);
x_22 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3(x_4, x_14, x_4, x_5, x_21, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_22;
}
else
{
lean_object* x_23; 
lean_inc(x_5);
lean_inc(x_4);
x_23 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_14, x_4, x_5, x_21, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_23;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Expr_isForall(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_1, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Array_empty___closed__1;
x_16 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_15, x_13, x_3, x_4, x_5, x_6, x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_1);
x_21 = l_Lean_getLCtx___at___private_Lean_Meta_Basic_3__mkFreshExprMVarCore___spec__1(x_3, x_4, x_5, x_6, x_10);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = l_Array_empty___closed__1;
x_26 = lean_unsigned_to_nat(0u);
x_27 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__2(x_24, x_2, x_22, x_25, x_26, x_9, x_3, x_4, x_5, x_6, x_23);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_8);
if (x_28 == 0)
{
return x_8;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_8, 0);
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_8);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_3__preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l___private_Lean_Meta_Basic_13__forallTelescopeReducingAux___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__1(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___lambda__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; lean_object* x_17; 
x_16 = lean_unbox(x_1);
lean_dec(x_1);
x_17 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__4(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
return x_17;
}
}
lean_object* l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l___private_Lean_Meta_Basic_12__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_SynthInstance_3__preprocess___spec__2(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_SynthInstance_4__preprocessLevels___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = l_Lean_instantiateLevelMVars___at___private_Lean_Meta_InferType_12__isArrowProp___main___spec__1(x_10, x_3, x_4, x_5, x_6, x_7);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Level_hasMVar(x_13);
if (x_15 == 0)
{
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_13);
x_1 = x_2;
x_2 = x_11;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_13);
x_17 = l_Lean_mkFreshLevelMVar___at___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl___spec__1___rarg(x_4, x_5, x_6, x_14);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_18);
x_1 = x_2;
x_2 = x_11;
x_7 = x_19;
goto _start;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_23 = l_Lean_instantiateLevelMVars___at___private_Lean_Meta_InferType_12__isArrowProp___main___spec__1(x_21, x_3, x_4, x_5, x_6, x_7);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Level_hasMVar(x_24);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_1);
x_1 = x_27;
x_2 = x_22;
x_7 = x_25;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_24);
x_29 = l_Lean_mkFreshLevelMVar___at___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl___spec__1___rarg(x_4, x_5, x_6, x_25);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_1);
x_1 = x_32;
x_2 = x_22;
x_7 = x_31;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_4__preprocessLevels(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_box(0);
x_8 = l_List_foldlM___main___at___private_Lean_Meta_SynthInstance_4__preprocessLevels___spec__1(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_List_reverse___rarg(x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = l_List_reverse___rarg(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_SynthInstance_4__preprocessLevels___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_foldlM___main___at___private_Lean_Meta_SynthInstance_4__preprocessLevels___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_4__preprocessLevels___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_SynthInstance_4__preprocessLevels(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* _init_l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type class resolution failed, insufficient number of arguments");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_3);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l_Lean_whnf___at___private_Lean_Meta_Basic_14__isClassExpensive_x3f___main___spec__2(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 7)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 2);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_array_fget(x_3, x_2);
lean_inc(x_15);
x_18 = lean_is_out_param(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_15);
lean_inc(x_17);
x_19 = lean_array_fset(x_3, x_2, x_17);
x_20 = lean_expr_instantiate1(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_2, x_21);
lean_dec(x_2);
x_1 = x_20;
x_2 = x_22;
x_3 = x_19;
x_8 = x_14;
goto _start;
}
else
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_15);
x_25 = 0;
x_26 = lean_box(0);
x_27 = l___private_Lean_Meta_Basic_4__mkFreshExprMVarImpl(x_24, x_25, x_26, x_4, x_5, x_6, x_7, x_14);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_28);
x_30 = lean_array_fset(x_3, x_2, x_28);
x_31 = lean_expr_instantiate1(x_16, x_28);
lean_dec(x_28);
lean_dec(x_16);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_2, x_32);
lean_dec(x_2);
x_1 = x_31;
x_2 = x_33;
x_3 = x_30;
x_8 = x_29;
goto _start;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_dec(x_12);
x_36 = l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__3;
x_37 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_36, x_4, x_5, x_6, x_7, x_35);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_12);
if (x_38 == 0)
{
return x_12;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_12, 0);
x_40 = lean_ctor_get(x_12, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_12);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_5__preprocessArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_6__preprocessOutParam___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn___main(x_3);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_7, x_8);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
x_17 = lean_has_out_params(x_16, x_10);
if (x_17 == 0)
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_free_object(x_12);
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Expr_getAppNumArgsAux___main(x_3, x_18);
x_20 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_19);
x_21 = lean_mk_array(x_19, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_19, x_22);
lean_dec(x_19);
x_24 = l___private_Lean_Expr_3__getAppArgsAux___main(x_3, x_21, x_23);
x_25 = l___private_Lean_Meta_SynthInstance_4__preprocessLevels(x_11, x_4, x_5, x_6, x_7, x_15);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_mkConst(x_10, x_26);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_28);
x_29 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_28, x_4, x_5, x_6, x_7, x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_32 = l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main(x_30, x_18, x_24, x_4, x_5, x_6, x_7, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_33, x_33, x_18, x_28);
lean_dec(x_33);
x_36 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_2, x_35, x_4, x_5, x_6, x_7, x_34);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_28);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_29);
if (x_41 == 0)
{
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_29, 0);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_29);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_12, 0);
x_46 = lean_ctor_get(x_12, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_12);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
lean_dec(x_45);
lean_inc(x_10);
x_48 = lean_has_out_params(x_47, x_10);
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_1);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_1);
x_50 = lean_unsigned_to_nat(0u);
x_51 = l_Lean_Expr_getAppNumArgsAux___main(x_3, x_50);
x_52 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_51);
x_53 = lean_mk_array(x_51, x_52);
x_54 = lean_unsigned_to_nat(1u);
x_55 = lean_nat_sub(x_51, x_54);
lean_dec(x_51);
x_56 = l___private_Lean_Expr_3__getAppArgsAux___main(x_3, x_53, x_55);
x_57 = l___private_Lean_Meta_SynthInstance_4__preprocessLevels(x_11, x_4, x_5, x_6, x_7, x_46);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_mkConst(x_10, x_58);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_60);
x_61 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_60, x_4, x_5, x_6, x_7, x_59);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_64 = l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main(x_62, x_50, x_56, x_4, x_5, x_6, x_7, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_65, x_65, x_50, x_60);
lean_dec(x_65);
x_68 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_2, x_67, x_4, x_5, x_6, x_7, x_66);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_60);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_69 = lean_ctor_get(x_64, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_64, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_71 = x_64;
} else {
 lean_dec_ref(x_64);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_60);
lean_dec(x_56);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_73 = lean_ctor_get(x_61, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_61, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_75 = x_61;
} else {
 lean_dec_ref(x_61);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
else
{
lean_object* x_77; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_1);
lean_ctor_set(x_77, 1, x_8);
return x_77;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_6__preprocessOutParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_6__preprocessOutParam___lambda__1), 8, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l___private_Lean_Meta_Basic_16__forallTelescopeImpl___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* _init_l_Lean_Meta_maxStepsOption___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_maxStepsOption___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("maxSteps");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_maxStepsOption___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_maxStepsOption___closed__1;
x_2 = l_Lean_Meta_maxStepsOption___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_maxStepsOption___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(10000u);
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_maxStepsOption___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("maximum steps for the type class instance synthesis procedure");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_maxStepsOption___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_maxStepsOption___closed__4;
x_2 = l_String_splitAux___main___closed__1;
x_3 = l_Lean_Meta_maxStepsOption___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_maxStepsOption(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Meta_maxStepsOption___closed__3;
x_3 = l_Lean_Meta_maxStepsOption___closed__6;
x_4 = lean_register_option(x_2, x_3, x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_7__getMaxSteps(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Meta_maxStepsOption___closed__3;
x_3 = lean_unsigned_to_nat(10000u);
x_4 = l_Lean_KVMap_getNat(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_7__getMaxSteps___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Meta_SynthInstance_7__getMaxSteps(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_getConfig___at_Lean_Meta_synthInstanceImp_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_expr_eqv(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__5(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Expr_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_expr_eqv(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_expr_eqv(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_expr_eqv(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__4(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__5(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstanceImp_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Expr_hash(x_2);
x_8 = 1;
x_9 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Expr_hash(x_2);
x_15 = 1;
x_16 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_expr_eqv(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__7(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_expr_eqv(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Std_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__8(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Expr_hash(x_2);
x_5 = l_Std_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__7(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_3, x_4, x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Lean_MetavarContext_hasAssignableMVar___main(x_9, x_1);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = l_Lean_MetavarContext_hasAssignableMVar___main(x_13, x_1);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("result ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp_x3f___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp_x3f___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("FOUND result ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp_x3f___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp_x3f___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" ==> ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp_x3f___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp_x3f___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp_x3f___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_synthInstanceImp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l___private_Lean_Meta_SynthInstance_7__getMaxSteps(x_7);
lean_dec(x_7);
x_9 = l_Lean_getConfig___at_Lean_Meta_synthInstanceImp_x3f___spec__1(x_2, x_3, x_4, x_5, x_6);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = !lean_is_exclusive(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
x_16 = lean_ctor_get(x_2, 0);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = 1;
x_19 = 2;
lean_ctor_set_uint8(x_10, 0, x_18);
lean_ctor_set_uint8(x_10, 1, x_18);
lean_ctor_set_uint8(x_10, 5, x_19);
lean_inc(x_15);
lean_inc(x_14);
x_20 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_12);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_23 = l___private_Lean_Meta_SynthInstance_3__preprocess(x_21, x_2, x_3, x_4, x_5, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_128; uint8_t x_129; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_128 = lean_st_ref_get(x_3, x_25);
x_129 = !lean_is_exclusive(x_128);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_130 = lean_ctor_get(x_128, 0);
x_131 = lean_ctor_get(x_128, 1);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_ctor_get(x_132, 2);
lean_inc(x_133);
lean_dec(x_132);
x_134 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6(x_133, x_24);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_178; lean_object* x_179; lean_object* x_180; uint8_t x_181; 
lean_free_object(x_128);
x_135 = lean_st_ref_get(x_3, x_131);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = lean_ctor_get(x_136, 0);
lean_inc(x_138);
lean_dec(x_136);
x_178 = lean_st_ref_take(x_3, x_137);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
x_181 = !lean_is_exclusive(x_179);
if (x_181 == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_182 = lean_ctor_get(x_179, 0);
x_183 = l_Lean_MetavarContext_incDepth(x_182);
lean_ctor_set(x_179, 0, x_183);
x_184 = lean_st_ref_set(x_3, x_179, x_180);
x_185 = lean_ctor_get(x_184, 1);
lean_inc(x_185);
lean_dec(x_184);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_24);
x_186 = l___private_Lean_Meta_SynthInstance_6__preprocessOutParam(x_24, x_2, x_3, x_4, x_5, x_185);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_235; lean_object* x_236; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_246 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_247 = lean_ctor_get(x_246, 2);
lean_inc(x_247);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_248 = lean_apply_5(x_247, x_2, x_3, x_4, x_5, x_188);
if (lean_obj_tag(x_248) == 0)
{
lean_object* x_249; uint8_t x_250; 
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get_uint8(x_249, sizeof(void*)*1);
lean_dec(x_249);
if (x_250 == 0)
{
lean_object* x_251; uint8_t x_252; 
x_251 = lean_ctor_get(x_248, 1);
lean_inc(x_251);
lean_dec(x_248);
x_252 = 0;
x_235 = x_252;
x_236 = x_251;
goto block_245;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; uint8_t x_258; 
x_253 = lean_ctor_get(x_248, 1);
lean_inc(x_253);
lean_dec(x_248);
x_254 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_255 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_254, x_2, x_3, x_4, x_5, x_253);
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = lean_unbox(x_256);
lean_dec(x_256);
x_235 = x_258;
x_236 = x_257;
goto block_245;
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_187);
lean_dec(x_8);
x_259 = lean_ctor_get(x_248, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_248, 1);
lean_inc(x_260);
lean_dec(x_248);
x_261 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_261, 0, x_259);
x_139 = x_261;
x_140 = x_260;
goto block_177;
}
block_234:
{
lean_object* x_190; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_190 = l_Lean_Meta_SynthInstance_main(x_187, x_8, x_2, x_3, x_4, x_5, x_189);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; 
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
lean_dec(x_190);
x_193 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_193, 0, x_191);
x_139 = x_193;
x_140 = x_192;
goto block_177;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_194 = lean_ctor_get(x_190, 1);
lean_inc(x_194);
lean_dec(x_190);
x_195 = lean_ctor_get(x_191, 0);
lean_inc(x_195);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 x_196 = x_191;
} else {
 lean_dec_ref(x_191);
 x_196 = lean_box(0);
}
x_210 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_211 = lean_ctor_get(x_210, 2);
lean_inc(x_211);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_212 = lean_apply_5(x_211, x_2, x_3, x_4, x_5, x_194);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; uint8_t x_214; 
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
x_214 = lean_ctor_get_uint8(x_213, sizeof(void*)*1);
lean_dec(x_213);
if (x_214 == 0)
{
lean_object* x_215; 
x_215 = lean_ctor_get(x_212, 1);
lean_inc(x_215);
lean_dec(x_212);
x_197 = x_215;
goto block_209;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_216 = lean_ctor_get(x_212, 1);
lean_inc(x_216);
lean_dec(x_212);
x_217 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_218 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_217, x_2, x_3, x_4, x_5, x_216);
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_unbox(x_219);
lean_dec(x_219);
if (x_220 == 0)
{
lean_object* x_221; 
x_221 = lean_ctor_get(x_218, 1);
lean_inc(x_221);
lean_dec(x_218);
x_197 = x_221;
goto block_209;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_222 = lean_ctor_get(x_218, 1);
lean_inc(x_222);
lean_dec(x_218);
lean_inc(x_195);
x_223 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_223, 0, x_195);
x_224 = l_Lean_Meta_synthInstanceImp_x3f___closed__6;
x_225 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_223);
x_226 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_217, x_225, x_2, x_3, x_4, x_5, x_222);
x_227 = lean_ctor_get(x_226, 1);
lean_inc(x_227);
lean_dec(x_226);
x_197 = x_227;
goto block_209;
}
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec(x_196);
lean_dec(x_195);
x_228 = lean_ctor_get(x_212, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_212, 1);
lean_inc(x_229);
lean_dec(x_212);
x_230 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_230, 0, x_228);
x_139 = x_230;
x_140 = x_229;
goto block_177;
}
block_209:
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; uint8_t x_203; 
x_198 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_195, x_2, x_3, x_4, x_5, x_197);
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(x_199, x_2, x_3, x_4, x_5, x_200);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_unbox(x_202);
lean_dec(x_202);
if (x_203 == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_204 = lean_ctor_get(x_201, 1);
lean_inc(x_204);
lean_dec(x_201);
if (lean_is_scalar(x_196)) {
 x_205 = lean_alloc_ctor(1, 1, 0);
} else {
 x_205 = x_196;
}
lean_ctor_set(x_205, 0, x_199);
x_206 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_206, 0, x_205);
x_139 = x_206;
x_140 = x_204;
goto block_177;
}
else
{
lean_object* x_207; lean_object* x_208; 
lean_dec(x_199);
lean_dec(x_196);
x_207 = lean_ctor_get(x_201, 1);
lean_inc(x_207);
lean_dec(x_201);
x_208 = l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
x_139 = x_208;
x_140 = x_207;
goto block_177;
}
}
}
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_190, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_190, 1);
lean_inc(x_232);
lean_dec(x_190);
x_233 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_233, 0, x_231);
x_139 = x_233;
x_140 = x_232;
goto block_177;
}
}
block_245:
{
if (x_235 == 0)
{
x_189 = x_236;
goto block_234;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_inc(x_24);
x_237 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_237, 0, x_24);
x_238 = l_Lean_Meta_synthInstanceImp_x3f___closed__9;
x_239 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
lean_inc(x_187);
x_240 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_240, 0, x_187);
x_241 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_241, 0, x_239);
lean_ctor_set(x_241, 1, x_240);
x_242 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_243 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_242, x_241, x_2, x_3, x_4, x_5, x_236);
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
lean_dec(x_243);
x_189 = x_244;
goto block_234;
}
}
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
lean_dec(x_8);
x_262 = lean_ctor_get(x_186, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_186, 1);
lean_inc(x_263);
lean_dec(x_186);
x_264 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_264, 0, x_262);
x_139 = x_264;
x_140 = x_263;
goto block_177;
}
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_265 = lean_ctor_get(x_179, 0);
x_266 = lean_ctor_get(x_179, 1);
x_267 = lean_ctor_get(x_179, 2);
lean_inc(x_267);
lean_inc(x_266);
lean_inc(x_265);
lean_dec(x_179);
x_268 = l_Lean_MetavarContext_incDepth(x_265);
x_269 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_266);
lean_ctor_set(x_269, 2, x_267);
x_270 = lean_st_ref_set(x_3, x_269, x_180);
x_271 = lean_ctor_get(x_270, 1);
lean_inc(x_271);
lean_dec(x_270);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_24);
x_272 = l___private_Lean_Meta_SynthInstance_6__preprocessOutParam(x_24, x_2, x_3, x_4, x_5, x_271);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_321; lean_object* x_322; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_272, 1);
lean_inc(x_274);
lean_dec(x_272);
x_332 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_333 = lean_ctor_get(x_332, 2);
lean_inc(x_333);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_334 = lean_apply_5(x_333, x_2, x_3, x_4, x_5, x_274);
if (lean_obj_tag(x_334) == 0)
{
lean_object* x_335; uint8_t x_336; 
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get_uint8(x_335, sizeof(void*)*1);
lean_dec(x_335);
if (x_336 == 0)
{
lean_object* x_337; uint8_t x_338; 
x_337 = lean_ctor_get(x_334, 1);
lean_inc(x_337);
lean_dec(x_334);
x_338 = 0;
x_321 = x_338;
x_322 = x_337;
goto block_331;
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_339 = lean_ctor_get(x_334, 1);
lean_inc(x_339);
lean_dec(x_334);
x_340 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_341 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_340, x_2, x_3, x_4, x_5, x_339);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_unbox(x_342);
lean_dec(x_342);
x_321 = x_344;
x_322 = x_343;
goto block_331;
}
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; 
lean_dec(x_273);
lean_dec(x_8);
x_345 = lean_ctor_get(x_334, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_334, 1);
lean_inc(x_346);
lean_dec(x_334);
x_347 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_347, 0, x_345);
x_139 = x_347;
x_140 = x_346;
goto block_177;
}
block_320:
{
lean_object* x_276; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_276 = l_Lean_Meta_SynthInstance_main(x_273, x_8, x_2, x_3, x_4, x_5, x_275);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; 
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
lean_dec(x_276);
x_279 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_279, 0, x_277);
x_139 = x_279;
x_140 = x_278;
goto block_177;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_280 = lean_ctor_get(x_276, 1);
lean_inc(x_280);
lean_dec(x_276);
x_281 = lean_ctor_get(x_277, 0);
lean_inc(x_281);
if (lean_is_exclusive(x_277)) {
 lean_ctor_release(x_277, 0);
 x_282 = x_277;
} else {
 lean_dec_ref(x_277);
 x_282 = lean_box(0);
}
x_296 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_297 = lean_ctor_get(x_296, 2);
lean_inc(x_297);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_298 = lean_apply_5(x_297, x_2, x_3, x_4, x_5, x_280);
if (lean_obj_tag(x_298) == 0)
{
lean_object* x_299; uint8_t x_300; 
x_299 = lean_ctor_get(x_298, 0);
lean_inc(x_299);
x_300 = lean_ctor_get_uint8(x_299, sizeof(void*)*1);
lean_dec(x_299);
if (x_300 == 0)
{
lean_object* x_301; 
x_301 = lean_ctor_get(x_298, 1);
lean_inc(x_301);
lean_dec(x_298);
x_283 = x_301;
goto block_295;
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; uint8_t x_306; 
x_302 = lean_ctor_get(x_298, 1);
lean_inc(x_302);
lean_dec(x_298);
x_303 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_304 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_303, x_2, x_3, x_4, x_5, x_302);
x_305 = lean_ctor_get(x_304, 0);
lean_inc(x_305);
x_306 = lean_unbox(x_305);
lean_dec(x_305);
if (x_306 == 0)
{
lean_object* x_307; 
x_307 = lean_ctor_get(x_304, 1);
lean_inc(x_307);
lean_dec(x_304);
x_283 = x_307;
goto block_295;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_308 = lean_ctor_get(x_304, 1);
lean_inc(x_308);
lean_dec(x_304);
lean_inc(x_281);
x_309 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_309, 0, x_281);
x_310 = l_Lean_Meta_synthInstanceImp_x3f___closed__6;
x_311 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_311, 1, x_309);
x_312 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_303, x_311, x_2, x_3, x_4, x_5, x_308);
x_313 = lean_ctor_get(x_312, 1);
lean_inc(x_313);
lean_dec(x_312);
x_283 = x_313;
goto block_295;
}
}
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_282);
lean_dec(x_281);
x_314 = lean_ctor_get(x_298, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_298, 1);
lean_inc(x_315);
lean_dec(x_298);
x_316 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_316, 0, x_314);
x_139 = x_316;
x_140 = x_315;
goto block_177;
}
block_295:
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; uint8_t x_289; 
x_284 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_281, x_2, x_3, x_4, x_5, x_283);
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
x_287 = l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(x_285, x_2, x_3, x_4, x_5, x_286);
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_unbox(x_288);
lean_dec(x_288);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; 
x_290 = lean_ctor_get(x_287, 1);
lean_inc(x_290);
lean_dec(x_287);
if (lean_is_scalar(x_282)) {
 x_291 = lean_alloc_ctor(1, 1, 0);
} else {
 x_291 = x_282;
}
lean_ctor_set(x_291, 0, x_285);
x_292 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_292, 0, x_291);
x_139 = x_292;
x_140 = x_290;
goto block_177;
}
else
{
lean_object* x_293; lean_object* x_294; 
lean_dec(x_285);
lean_dec(x_282);
x_293 = lean_ctor_get(x_287, 1);
lean_inc(x_293);
lean_dec(x_287);
x_294 = l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
x_139 = x_294;
x_140 = x_293;
goto block_177;
}
}
}
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_317 = lean_ctor_get(x_276, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_276, 1);
lean_inc(x_318);
lean_dec(x_276);
x_319 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_319, 0, x_317);
x_139 = x_319;
x_140 = x_318;
goto block_177;
}
}
block_331:
{
if (x_321 == 0)
{
x_275 = x_322;
goto block_320;
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_inc(x_24);
x_323 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_323, 0, x_24);
x_324 = l_Lean_Meta_synthInstanceImp_x3f___closed__9;
x_325 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_325, 0, x_323);
lean_ctor_set(x_325, 1, x_324);
lean_inc(x_273);
x_326 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_326, 0, x_273);
x_327 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
x_328 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_329 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_328, x_327, x_2, x_3, x_4, x_5, x_322);
x_330 = lean_ctor_get(x_329, 1);
lean_inc(x_330);
lean_dec(x_329);
x_275 = x_330;
goto block_320;
}
}
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_8);
x_348 = lean_ctor_get(x_272, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_272, 1);
lean_inc(x_349);
lean_dec(x_272);
x_350 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_350, 0, x_348);
x_139 = x_350;
x_140 = x_349;
goto block_177;
}
}
block_177:
{
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_141 = lean_ctor_get(x_139, 0);
lean_inc(x_141);
lean_dec(x_139);
x_142 = lean_st_ref_take(x_3, x_140);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_145 = !lean_is_exclusive(x_143);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_146 = lean_ctor_get(x_143, 0);
lean_dec(x_146);
lean_ctor_set(x_143, 0, x_138);
x_147 = lean_st_ref_set(x_3, x_143, x_144);
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_147, 0);
lean_dec(x_149);
lean_ctor_set_tag(x_147, 1);
lean_ctor_set(x_147, 0, x_141);
x_26 = x_147;
goto block_127;
}
else
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
lean_dec(x_147);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_141);
lean_ctor_set(x_151, 1, x_150);
x_26 = x_151;
goto block_127;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_152 = lean_ctor_get(x_143, 1);
x_153 = lean_ctor_get(x_143, 2);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_143);
x_154 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_154, 0, x_138);
lean_ctor_set(x_154, 1, x_152);
lean_ctor_set(x_154, 2, x_153);
x_155 = lean_st_ref_set(x_3, x_154, x_144);
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_157 = x_155;
} else {
 lean_dec_ref(x_155);
 x_157 = lean_box(0);
}
if (lean_is_scalar(x_157)) {
 x_158 = lean_alloc_ctor(1, 2, 0);
} else {
 x_158 = x_157;
 lean_ctor_set_tag(x_158, 1);
}
lean_ctor_set(x_158, 0, x_141);
lean_ctor_set(x_158, 1, x_156);
x_26 = x_158;
goto block_127;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_159 = lean_ctor_get(x_139, 0);
lean_inc(x_159);
lean_dec(x_139);
x_160 = lean_st_ref_take(x_3, x_140);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_163 = !lean_is_exclusive(x_161);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_164 = lean_ctor_get(x_161, 0);
lean_dec(x_164);
lean_ctor_set(x_161, 0, x_138);
x_165 = lean_st_ref_set(x_3, x_161, x_162);
x_166 = !lean_is_exclusive(x_165);
if (x_166 == 0)
{
lean_object* x_167; 
x_167 = lean_ctor_get(x_165, 0);
lean_dec(x_167);
lean_ctor_set(x_165, 0, x_159);
x_26 = x_165;
goto block_127;
}
else
{
lean_object* x_168; lean_object* x_169; 
x_168 = lean_ctor_get(x_165, 1);
lean_inc(x_168);
lean_dec(x_165);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_159);
lean_ctor_set(x_169, 1, x_168);
x_26 = x_169;
goto block_127;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_170 = lean_ctor_get(x_161, 1);
x_171 = lean_ctor_get(x_161, 2);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_161);
x_172 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_172, 0, x_138);
lean_ctor_set(x_172, 1, x_170);
lean_ctor_set(x_172, 2, x_171);
x_173 = lean_st_ref_set(x_3, x_172, x_162);
x_174 = lean_ctor_get(x_173, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 x_175 = x_173;
} else {
 lean_dec_ref(x_173);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_159);
lean_ctor_set(x_176, 1, x_174);
x_26 = x_176;
goto block_127;
}
}
}
}
else
{
lean_object* x_351; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_351 = lean_ctor_get(x_134, 0);
lean_inc(x_351);
lean_dec(x_134);
lean_ctor_set(x_128, 0, x_351);
return x_128;
}
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_352 = lean_ctor_get(x_128, 0);
x_353 = lean_ctor_get(x_128, 1);
lean_inc(x_353);
lean_inc(x_352);
lean_dec(x_128);
x_354 = lean_ctor_get(x_352, 1);
lean_inc(x_354);
lean_dec(x_352);
x_355 = lean_ctor_get(x_354, 2);
lean_inc(x_355);
lean_dec(x_354);
x_356 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6(x_355, x_24);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_357 = lean_st_ref_get(x_3, x_353);
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_357, 1);
lean_inc(x_359);
lean_dec(x_357);
x_360 = lean_ctor_get(x_358, 0);
lean_inc(x_360);
lean_dec(x_358);
x_388 = lean_st_ref_take(x_3, x_359);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
lean_dec(x_388);
x_391 = lean_ctor_get(x_389, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_389, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_389, 2);
lean_inc(x_393);
if (lean_is_exclusive(x_389)) {
 lean_ctor_release(x_389, 0);
 lean_ctor_release(x_389, 1);
 lean_ctor_release(x_389, 2);
 x_394 = x_389;
} else {
 lean_dec_ref(x_389);
 x_394 = lean_box(0);
}
x_395 = l_Lean_MetavarContext_incDepth(x_391);
if (lean_is_scalar(x_394)) {
 x_396 = lean_alloc_ctor(0, 3, 0);
} else {
 x_396 = x_394;
}
lean_ctor_set(x_396, 0, x_395);
lean_ctor_set(x_396, 1, x_392);
lean_ctor_set(x_396, 2, x_393);
x_397 = lean_st_ref_set(x_3, x_396, x_390);
x_398 = lean_ctor_get(x_397, 1);
lean_inc(x_398);
lean_dec(x_397);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_24);
x_399 = l___private_Lean_Meta_SynthInstance_6__preprocessOutParam(x_24, x_2, x_3, x_4, x_5, x_398);
if (lean_obj_tag(x_399) == 0)
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; uint8_t x_448; lean_object* x_449; lean_object* x_459; lean_object* x_460; lean_object* x_461; 
x_400 = lean_ctor_get(x_399, 0);
lean_inc(x_400);
x_401 = lean_ctor_get(x_399, 1);
lean_inc(x_401);
lean_dec(x_399);
x_459 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_460 = lean_ctor_get(x_459, 2);
lean_inc(x_460);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_461 = lean_apply_5(x_460, x_2, x_3, x_4, x_5, x_401);
if (lean_obj_tag(x_461) == 0)
{
lean_object* x_462; uint8_t x_463; 
x_462 = lean_ctor_get(x_461, 0);
lean_inc(x_462);
x_463 = lean_ctor_get_uint8(x_462, sizeof(void*)*1);
lean_dec(x_462);
if (x_463 == 0)
{
lean_object* x_464; uint8_t x_465; 
x_464 = lean_ctor_get(x_461, 1);
lean_inc(x_464);
lean_dec(x_461);
x_465 = 0;
x_448 = x_465;
x_449 = x_464;
goto block_458;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; uint8_t x_471; 
x_466 = lean_ctor_get(x_461, 1);
lean_inc(x_466);
lean_dec(x_461);
x_467 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_468 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_467, x_2, x_3, x_4, x_5, x_466);
x_469 = lean_ctor_get(x_468, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_468, 1);
lean_inc(x_470);
lean_dec(x_468);
x_471 = lean_unbox(x_469);
lean_dec(x_469);
x_448 = x_471;
x_449 = x_470;
goto block_458;
}
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; 
lean_dec(x_400);
lean_dec(x_8);
x_472 = lean_ctor_get(x_461, 0);
lean_inc(x_472);
x_473 = lean_ctor_get(x_461, 1);
lean_inc(x_473);
lean_dec(x_461);
x_474 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_474, 0, x_472);
x_361 = x_474;
x_362 = x_473;
goto block_387;
}
block_447:
{
lean_object* x_403; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_403 = l_Lean_Meta_SynthInstance_main(x_400, x_8, x_2, x_3, x_4, x_5, x_402);
if (lean_obj_tag(x_403) == 0)
{
lean_object* x_404; 
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; lean_object* x_406; 
x_405 = lean_ctor_get(x_403, 1);
lean_inc(x_405);
lean_dec(x_403);
x_406 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_406, 0, x_404);
x_361 = x_406;
x_362 = x_405;
goto block_387;
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_407 = lean_ctor_get(x_403, 1);
lean_inc(x_407);
lean_dec(x_403);
x_408 = lean_ctor_get(x_404, 0);
lean_inc(x_408);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 x_409 = x_404;
} else {
 lean_dec_ref(x_404);
 x_409 = lean_box(0);
}
x_423 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_424 = lean_ctor_get(x_423, 2);
lean_inc(x_424);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_425 = lean_apply_5(x_424, x_2, x_3, x_4, x_5, x_407);
if (lean_obj_tag(x_425) == 0)
{
lean_object* x_426; uint8_t x_427; 
x_426 = lean_ctor_get(x_425, 0);
lean_inc(x_426);
x_427 = lean_ctor_get_uint8(x_426, sizeof(void*)*1);
lean_dec(x_426);
if (x_427 == 0)
{
lean_object* x_428; 
x_428 = lean_ctor_get(x_425, 1);
lean_inc(x_428);
lean_dec(x_425);
x_410 = x_428;
goto block_422;
}
else
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; uint8_t x_433; 
x_429 = lean_ctor_get(x_425, 1);
lean_inc(x_429);
lean_dec(x_425);
x_430 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_431 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_430, x_2, x_3, x_4, x_5, x_429);
x_432 = lean_ctor_get(x_431, 0);
lean_inc(x_432);
x_433 = lean_unbox(x_432);
lean_dec(x_432);
if (x_433 == 0)
{
lean_object* x_434; 
x_434 = lean_ctor_get(x_431, 1);
lean_inc(x_434);
lean_dec(x_431);
x_410 = x_434;
goto block_422;
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_435 = lean_ctor_get(x_431, 1);
lean_inc(x_435);
lean_dec(x_431);
lean_inc(x_408);
x_436 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_436, 0, x_408);
x_437 = l_Lean_Meta_synthInstanceImp_x3f___closed__6;
x_438 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_438, 0, x_437);
lean_ctor_set(x_438, 1, x_436);
x_439 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_430, x_438, x_2, x_3, x_4, x_5, x_435);
x_440 = lean_ctor_get(x_439, 1);
lean_inc(x_440);
lean_dec(x_439);
x_410 = x_440;
goto block_422;
}
}
}
else
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; 
lean_dec(x_409);
lean_dec(x_408);
x_441 = lean_ctor_get(x_425, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_425, 1);
lean_inc(x_442);
lean_dec(x_425);
x_443 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_443, 0, x_441);
x_361 = x_443;
x_362 = x_442;
goto block_387;
}
block_422:
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; uint8_t x_416; 
x_411 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_408, x_2, x_3, x_4, x_5, x_410);
x_412 = lean_ctor_get(x_411, 0);
lean_inc(x_412);
x_413 = lean_ctor_get(x_411, 1);
lean_inc(x_413);
lean_dec(x_411);
x_414 = l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(x_412, x_2, x_3, x_4, x_5, x_413);
x_415 = lean_ctor_get(x_414, 0);
lean_inc(x_415);
x_416 = lean_unbox(x_415);
lean_dec(x_415);
if (x_416 == 0)
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_417 = lean_ctor_get(x_414, 1);
lean_inc(x_417);
lean_dec(x_414);
if (lean_is_scalar(x_409)) {
 x_418 = lean_alloc_ctor(1, 1, 0);
} else {
 x_418 = x_409;
}
lean_ctor_set(x_418, 0, x_412);
x_419 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_419, 0, x_418);
x_361 = x_419;
x_362 = x_417;
goto block_387;
}
else
{
lean_object* x_420; lean_object* x_421; 
lean_dec(x_412);
lean_dec(x_409);
x_420 = lean_ctor_get(x_414, 1);
lean_inc(x_420);
lean_dec(x_414);
x_421 = l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
x_361 = x_421;
x_362 = x_420;
goto block_387;
}
}
}
}
else
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; 
x_444 = lean_ctor_get(x_403, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_403, 1);
lean_inc(x_445);
lean_dec(x_403);
x_446 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_446, 0, x_444);
x_361 = x_446;
x_362 = x_445;
goto block_387;
}
}
block_458:
{
if (x_448 == 0)
{
x_402 = x_449;
goto block_447;
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; 
lean_inc(x_24);
x_450 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_450, 0, x_24);
x_451 = l_Lean_Meta_synthInstanceImp_x3f___closed__9;
x_452 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_452, 0, x_450);
lean_ctor_set(x_452, 1, x_451);
lean_inc(x_400);
x_453 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_453, 0, x_400);
x_454 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_454, 0, x_452);
lean_ctor_set(x_454, 1, x_453);
x_455 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_456 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_455, x_454, x_2, x_3, x_4, x_5, x_449);
x_457 = lean_ctor_get(x_456, 1);
lean_inc(x_457);
lean_dec(x_456);
x_402 = x_457;
goto block_447;
}
}
}
else
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; 
lean_dec(x_8);
x_475 = lean_ctor_get(x_399, 0);
lean_inc(x_475);
x_476 = lean_ctor_get(x_399, 1);
lean_inc(x_476);
lean_dec(x_399);
x_477 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_477, 0, x_475);
x_361 = x_477;
x_362 = x_476;
goto block_387;
}
block_387:
{
if (lean_obj_tag(x_361) == 0)
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_363 = lean_ctor_get(x_361, 0);
lean_inc(x_363);
lean_dec(x_361);
x_364 = lean_st_ref_take(x_3, x_362);
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = lean_ctor_get(x_365, 1);
lean_inc(x_367);
x_368 = lean_ctor_get(x_365, 2);
lean_inc(x_368);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 lean_ctor_release(x_365, 1);
 lean_ctor_release(x_365, 2);
 x_369 = x_365;
} else {
 lean_dec_ref(x_365);
 x_369 = lean_box(0);
}
if (lean_is_scalar(x_369)) {
 x_370 = lean_alloc_ctor(0, 3, 0);
} else {
 x_370 = x_369;
}
lean_ctor_set(x_370, 0, x_360);
lean_ctor_set(x_370, 1, x_367);
lean_ctor_set(x_370, 2, x_368);
x_371 = lean_st_ref_set(x_3, x_370, x_366);
x_372 = lean_ctor_get(x_371, 1);
lean_inc(x_372);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_373 = x_371;
} else {
 lean_dec_ref(x_371);
 x_373 = lean_box(0);
}
if (lean_is_scalar(x_373)) {
 x_374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_374 = x_373;
 lean_ctor_set_tag(x_374, 1);
}
lean_ctor_set(x_374, 0, x_363);
lean_ctor_set(x_374, 1, x_372);
x_26 = x_374;
goto block_127;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_375 = lean_ctor_get(x_361, 0);
lean_inc(x_375);
lean_dec(x_361);
x_376 = lean_st_ref_take(x_3, x_362);
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
lean_dec(x_376);
x_379 = lean_ctor_get(x_377, 1);
lean_inc(x_379);
x_380 = lean_ctor_get(x_377, 2);
lean_inc(x_380);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 x_381 = x_377;
} else {
 lean_dec_ref(x_377);
 x_381 = lean_box(0);
}
if (lean_is_scalar(x_381)) {
 x_382 = lean_alloc_ctor(0, 3, 0);
} else {
 x_382 = x_381;
}
lean_ctor_set(x_382, 0, x_360);
lean_ctor_set(x_382, 1, x_379);
lean_ctor_set(x_382, 2, x_380);
x_383 = lean_st_ref_set(x_3, x_382, x_378);
x_384 = lean_ctor_get(x_383, 1);
lean_inc(x_384);
if (lean_is_exclusive(x_383)) {
 lean_ctor_release(x_383, 0);
 lean_ctor_release(x_383, 1);
 x_385 = x_383;
} else {
 lean_dec_ref(x_383);
 x_385 = lean_box(0);
}
if (lean_is_scalar(x_385)) {
 x_386 = lean_alloc_ctor(0, 2, 0);
} else {
 x_386 = x_385;
}
lean_ctor_set(x_386, 0, x_375);
lean_ctor_set(x_386, 1, x_384);
x_26 = x_386;
goto block_127;
}
}
}
else
{
lean_object* x_478; lean_object* x_479; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_478 = lean_ctor_get(x_356, 0);
lean_inc(x_478);
lean_dec(x_356);
x_479 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_479, 0, x_478);
lean_ctor_set(x_479, 1, x_353);
return x_479;
}
}
block_127:
{
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_29 = x_26;
} else {
 lean_dec_ref(x_26);
 x_29 = lean_box(0);
}
if (lean_obj_tag(x_27) == 0)
{
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
x_30 = x_27;
x_31 = x_28;
goto block_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_75 = lean_ctor_get(x_27, 0);
lean_inc(x_75);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 x_76 = x_27;
} else {
 lean_dec_ref(x_27);
 x_76 = lean_box(0);
}
x_101 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_102 = lean_ctor_get(x_101, 2);
lean_inc(x_102);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_103 = lean_apply_5(x_102, x_2, x_3, x_4, x_5, x_28);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; uint8_t x_105; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get_uint8(x_104, sizeof(void*)*1);
lean_dec(x_104);
if (x_105 == 0)
{
lean_object* x_106; 
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_106);
lean_dec(x_103);
x_77 = x_106;
goto block_100;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_107 = lean_ctor_get(x_103, 1);
lean_inc(x_107);
lean_dec(x_103);
x_108 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_109 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_108, x_2, x_3, x_4, x_5, x_107);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_unbox(x_110);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; 
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_dec(x_109);
x_77 = x_112;
goto block_100;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_ctor_get(x_109, 1);
lean_inc(x_113);
lean_dec(x_109);
lean_inc(x_75);
x_114 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_114, 0, x_75);
x_115 = l_Lean_Meta_synthInstanceImp_x3f___closed__3;
x_116 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
x_117 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_108, x_116, x_2, x_3, x_4, x_5, x_113);
x_118 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
lean_dec(x_117);
x_77 = x_118;
goto block_100;
}
}
}
else
{
uint8_t x_119; 
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_119 = !lean_is_exclusive(x_103);
if (x_119 == 0)
{
return x_103;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_103, 0);
x_121 = lean_ctor_get(x_103, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_103);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
block_100:
{
lean_object* x_78; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_75);
x_78 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_75, x_2, x_3, x_4, x_5, x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_11);
lean_ctor_set(x_81, 1, x_14);
lean_ctor_set(x_81, 2, x_15);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_24);
x_82 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_24, x_79, x_81, x_3, x_4, x_5, x_80);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; uint8_t x_84; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
lean_dec(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; 
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_box(0);
x_30 = x_86;
x_31 = x_85;
goto block_74;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = lean_ctor_get(x_82, 1);
lean_inc(x_87);
lean_dec(x_82);
x_88 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_75, x_2, x_3, x_4, x_5, x_87);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
if (lean_is_scalar(x_76)) {
 x_91 = lean_alloc_ctor(1, 1, 0);
} else {
 x_91 = x_76;
}
lean_ctor_set(x_91, 0, x_89);
x_30 = x_91;
x_31 = x_90;
goto block_74;
}
}
else
{
uint8_t x_92; 
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_92 = !lean_is_exclusive(x_82);
if (x_92 == 0)
{
return x_82;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_82, 0);
x_94 = lean_ctor_get(x_82, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_82);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_96 = !lean_is_exclusive(x_78);
if (x_96 == 0)
{
return x_78;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_78, 0);
x_98 = lean_ctor_get(x_78, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_78);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
block_74:
{
uint8_t x_32; 
x_32 = l_Lean_Expr_hasMVar(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_29);
x_33 = lean_st_ref_take(x_3, x_31);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_34, 1);
lean_dec(x_38);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_35, 2);
lean_inc(x_30);
x_41 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstanceImp_x3f___spec__2(x_40, x_24, x_30);
lean_ctor_set(x_35, 2, x_41);
x_42 = lean_st_ref_set(x_3, x_34, x_36);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_30);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_30);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_47 = lean_ctor_get(x_35, 0);
x_48 = lean_ctor_get(x_35, 1);
x_49 = lean_ctor_get(x_35, 2);
x_50 = lean_ctor_get(x_35, 3);
x_51 = lean_ctor_get(x_35, 4);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_35);
lean_inc(x_30);
x_52 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstanceImp_x3f___spec__2(x_49, x_24, x_30);
x_53 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_48);
lean_ctor_set(x_53, 2, x_52);
lean_ctor_set(x_53, 3, x_50);
lean_ctor_set(x_53, 4, x_51);
lean_ctor_set(x_34, 1, x_53);
x_54 = lean_st_ref_set(x_3, x_34, x_36);
lean_dec(x_3);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_30);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_58 = lean_ctor_get(x_34, 0);
x_59 = lean_ctor_get(x_34, 2);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_34);
x_60 = lean_ctor_get(x_35, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_35, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_35, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_35, 3);
lean_inc(x_63);
x_64 = lean_ctor_get(x_35, 4);
lean_inc(x_64);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 lean_ctor_release(x_35, 2);
 lean_ctor_release(x_35, 3);
 lean_ctor_release(x_35, 4);
 x_65 = x_35;
} else {
 lean_dec_ref(x_35);
 x_65 = lean_box(0);
}
lean_inc(x_30);
x_66 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstanceImp_x3f___spec__2(x_62, x_24, x_30);
if (lean_is_scalar(x_65)) {
 x_67 = lean_alloc_ctor(0, 5, 0);
} else {
 x_67 = x_65;
}
lean_ctor_set(x_67, 0, x_60);
lean_ctor_set(x_67, 1, x_61);
lean_ctor_set(x_67, 2, x_66);
lean_ctor_set(x_67, 3, x_63);
lean_ctor_set(x_67, 4, x_64);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_58);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_59);
x_69 = lean_st_ref_set(x_3, x_68, x_36);
lean_dec(x_3);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_71 = x_69;
} else {
 lean_dec_ref(x_69);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_30);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; 
lean_dec(x_24);
lean_dec(x_3);
if (lean_is_scalar(x_29)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_29;
}
lean_ctor_set(x_73, 0, x_30);
lean_ctor_set(x_73, 1, x_31);
return x_73;
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_123 = !lean_is_exclusive(x_26);
if (x_123 == 0)
{
return x_26;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_26, 0);
x_125 = lean_ctor_get(x_26, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_26);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
else
{
uint8_t x_480; 
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_480 = !lean_is_exclusive(x_23);
if (x_480 == 0)
{
return x_23;
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; 
x_481 = lean_ctor_get(x_23, 0);
x_482 = lean_ctor_get(x_23, 1);
lean_inc(x_482);
lean_inc(x_481);
lean_dec(x_23);
x_483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_483, 0, x_481);
lean_ctor_set(x_483, 1, x_482);
return x_483;
}
}
}
else
{
uint8_t x_484; uint8_t x_485; uint8_t x_486; uint8_t x_487; uint8_t x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; 
x_484 = lean_ctor_get_uint8(x_10, 2);
x_485 = lean_ctor_get_uint8(x_10, 3);
x_486 = lean_ctor_get_uint8(x_10, 4);
lean_dec(x_10);
x_487 = 1;
x_488 = 2;
x_489 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_489, 0, x_487);
lean_ctor_set_uint8(x_489, 1, x_487);
lean_ctor_set_uint8(x_489, 2, x_484);
lean_ctor_set_uint8(x_489, 3, x_485);
lean_ctor_set_uint8(x_489, 4, x_486);
lean_ctor_set_uint8(x_489, 5, x_488);
lean_inc(x_15);
lean_inc(x_14);
lean_ctor_set(x_2, 0, x_489);
x_490 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_12);
x_491 = lean_ctor_get(x_490, 0);
lean_inc(x_491);
x_492 = lean_ctor_get(x_490, 1);
lean_inc(x_492);
lean_dec(x_490);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_493 = l___private_Lean_Meta_SynthInstance_3__preprocess(x_491, x_2, x_3, x_4, x_5, x_492);
if (lean_obj_tag(x_493) == 0)
{
lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; 
x_494 = lean_ctor_get(x_493, 0);
lean_inc(x_494);
x_495 = lean_ctor_get(x_493, 1);
lean_inc(x_495);
lean_dec(x_493);
x_578 = lean_st_ref_get(x_3, x_495);
x_579 = lean_ctor_get(x_578, 0);
lean_inc(x_579);
x_580 = lean_ctor_get(x_578, 1);
lean_inc(x_580);
if (lean_is_exclusive(x_578)) {
 lean_ctor_release(x_578, 0);
 lean_ctor_release(x_578, 1);
 x_581 = x_578;
} else {
 lean_dec_ref(x_578);
 x_581 = lean_box(0);
}
x_582 = lean_ctor_get(x_579, 1);
lean_inc(x_582);
lean_dec(x_579);
x_583 = lean_ctor_get(x_582, 2);
lean_inc(x_583);
lean_dec(x_582);
x_584 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6(x_583, x_494);
if (lean_obj_tag(x_584) == 0)
{
lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; 
lean_dec(x_581);
x_585 = lean_st_ref_get(x_3, x_580);
x_586 = lean_ctor_get(x_585, 0);
lean_inc(x_586);
x_587 = lean_ctor_get(x_585, 1);
lean_inc(x_587);
lean_dec(x_585);
x_588 = lean_ctor_get(x_586, 0);
lean_inc(x_588);
lean_dec(x_586);
x_616 = lean_st_ref_take(x_3, x_587);
x_617 = lean_ctor_get(x_616, 0);
lean_inc(x_617);
x_618 = lean_ctor_get(x_616, 1);
lean_inc(x_618);
lean_dec(x_616);
x_619 = lean_ctor_get(x_617, 0);
lean_inc(x_619);
x_620 = lean_ctor_get(x_617, 1);
lean_inc(x_620);
x_621 = lean_ctor_get(x_617, 2);
lean_inc(x_621);
if (lean_is_exclusive(x_617)) {
 lean_ctor_release(x_617, 0);
 lean_ctor_release(x_617, 1);
 lean_ctor_release(x_617, 2);
 x_622 = x_617;
} else {
 lean_dec_ref(x_617);
 x_622 = lean_box(0);
}
x_623 = l_Lean_MetavarContext_incDepth(x_619);
if (lean_is_scalar(x_622)) {
 x_624 = lean_alloc_ctor(0, 3, 0);
} else {
 x_624 = x_622;
}
lean_ctor_set(x_624, 0, x_623);
lean_ctor_set(x_624, 1, x_620);
lean_ctor_set(x_624, 2, x_621);
x_625 = lean_st_ref_set(x_3, x_624, x_618);
x_626 = lean_ctor_get(x_625, 1);
lean_inc(x_626);
lean_dec(x_625);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_494);
x_627 = l___private_Lean_Meta_SynthInstance_6__preprocessOutParam(x_494, x_2, x_3, x_4, x_5, x_626);
if (lean_obj_tag(x_627) == 0)
{
lean_object* x_628; lean_object* x_629; lean_object* x_630; uint8_t x_676; lean_object* x_677; lean_object* x_687; lean_object* x_688; lean_object* x_689; 
x_628 = lean_ctor_get(x_627, 0);
lean_inc(x_628);
x_629 = lean_ctor_get(x_627, 1);
lean_inc(x_629);
lean_dec(x_627);
x_687 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_688 = lean_ctor_get(x_687, 2);
lean_inc(x_688);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_689 = lean_apply_5(x_688, x_2, x_3, x_4, x_5, x_629);
if (lean_obj_tag(x_689) == 0)
{
lean_object* x_690; uint8_t x_691; 
x_690 = lean_ctor_get(x_689, 0);
lean_inc(x_690);
x_691 = lean_ctor_get_uint8(x_690, sizeof(void*)*1);
lean_dec(x_690);
if (x_691 == 0)
{
lean_object* x_692; uint8_t x_693; 
x_692 = lean_ctor_get(x_689, 1);
lean_inc(x_692);
lean_dec(x_689);
x_693 = 0;
x_676 = x_693;
x_677 = x_692;
goto block_686;
}
else
{
lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; uint8_t x_699; 
x_694 = lean_ctor_get(x_689, 1);
lean_inc(x_694);
lean_dec(x_689);
x_695 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_696 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_695, x_2, x_3, x_4, x_5, x_694);
x_697 = lean_ctor_get(x_696, 0);
lean_inc(x_697);
x_698 = lean_ctor_get(x_696, 1);
lean_inc(x_698);
lean_dec(x_696);
x_699 = lean_unbox(x_697);
lean_dec(x_697);
x_676 = x_699;
x_677 = x_698;
goto block_686;
}
}
else
{
lean_object* x_700; lean_object* x_701; lean_object* x_702; 
lean_dec(x_628);
lean_dec(x_8);
x_700 = lean_ctor_get(x_689, 0);
lean_inc(x_700);
x_701 = lean_ctor_get(x_689, 1);
lean_inc(x_701);
lean_dec(x_689);
x_702 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_702, 0, x_700);
x_589 = x_702;
x_590 = x_701;
goto block_615;
}
block_675:
{
lean_object* x_631; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_631 = l_Lean_Meta_SynthInstance_main(x_628, x_8, x_2, x_3, x_4, x_5, x_630);
if (lean_obj_tag(x_631) == 0)
{
lean_object* x_632; 
x_632 = lean_ctor_get(x_631, 0);
lean_inc(x_632);
if (lean_obj_tag(x_632) == 0)
{
lean_object* x_633; lean_object* x_634; 
x_633 = lean_ctor_get(x_631, 1);
lean_inc(x_633);
lean_dec(x_631);
x_634 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_634, 0, x_632);
x_589 = x_634;
x_590 = x_633;
goto block_615;
}
else
{
lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_651; lean_object* x_652; lean_object* x_653; 
x_635 = lean_ctor_get(x_631, 1);
lean_inc(x_635);
lean_dec(x_631);
x_636 = lean_ctor_get(x_632, 0);
lean_inc(x_636);
if (lean_is_exclusive(x_632)) {
 lean_ctor_release(x_632, 0);
 x_637 = x_632;
} else {
 lean_dec_ref(x_632);
 x_637 = lean_box(0);
}
x_651 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_652 = lean_ctor_get(x_651, 2);
lean_inc(x_652);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_653 = lean_apply_5(x_652, x_2, x_3, x_4, x_5, x_635);
if (lean_obj_tag(x_653) == 0)
{
lean_object* x_654; uint8_t x_655; 
x_654 = lean_ctor_get(x_653, 0);
lean_inc(x_654);
x_655 = lean_ctor_get_uint8(x_654, sizeof(void*)*1);
lean_dec(x_654);
if (x_655 == 0)
{
lean_object* x_656; 
x_656 = lean_ctor_get(x_653, 1);
lean_inc(x_656);
lean_dec(x_653);
x_638 = x_656;
goto block_650;
}
else
{
lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; uint8_t x_661; 
x_657 = lean_ctor_get(x_653, 1);
lean_inc(x_657);
lean_dec(x_653);
x_658 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_659 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_658, x_2, x_3, x_4, x_5, x_657);
x_660 = lean_ctor_get(x_659, 0);
lean_inc(x_660);
x_661 = lean_unbox(x_660);
lean_dec(x_660);
if (x_661 == 0)
{
lean_object* x_662; 
x_662 = lean_ctor_get(x_659, 1);
lean_inc(x_662);
lean_dec(x_659);
x_638 = x_662;
goto block_650;
}
else
{
lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; 
x_663 = lean_ctor_get(x_659, 1);
lean_inc(x_663);
lean_dec(x_659);
lean_inc(x_636);
x_664 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_664, 0, x_636);
x_665 = l_Lean_Meta_synthInstanceImp_x3f___closed__6;
x_666 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_666, 0, x_665);
lean_ctor_set(x_666, 1, x_664);
x_667 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_658, x_666, x_2, x_3, x_4, x_5, x_663);
x_668 = lean_ctor_get(x_667, 1);
lean_inc(x_668);
lean_dec(x_667);
x_638 = x_668;
goto block_650;
}
}
}
else
{
lean_object* x_669; lean_object* x_670; lean_object* x_671; 
lean_dec(x_637);
lean_dec(x_636);
x_669 = lean_ctor_get(x_653, 0);
lean_inc(x_669);
x_670 = lean_ctor_get(x_653, 1);
lean_inc(x_670);
lean_dec(x_653);
x_671 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_671, 0, x_669);
x_589 = x_671;
x_590 = x_670;
goto block_615;
}
block_650:
{
lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; uint8_t x_644; 
x_639 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_636, x_2, x_3, x_4, x_5, x_638);
x_640 = lean_ctor_get(x_639, 0);
lean_inc(x_640);
x_641 = lean_ctor_get(x_639, 1);
lean_inc(x_641);
lean_dec(x_639);
x_642 = l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(x_640, x_2, x_3, x_4, x_5, x_641);
x_643 = lean_ctor_get(x_642, 0);
lean_inc(x_643);
x_644 = lean_unbox(x_643);
lean_dec(x_643);
if (x_644 == 0)
{
lean_object* x_645; lean_object* x_646; lean_object* x_647; 
x_645 = lean_ctor_get(x_642, 1);
lean_inc(x_645);
lean_dec(x_642);
if (lean_is_scalar(x_637)) {
 x_646 = lean_alloc_ctor(1, 1, 0);
} else {
 x_646 = x_637;
}
lean_ctor_set(x_646, 0, x_640);
x_647 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_647, 0, x_646);
x_589 = x_647;
x_590 = x_645;
goto block_615;
}
else
{
lean_object* x_648; lean_object* x_649; 
lean_dec(x_640);
lean_dec(x_637);
x_648 = lean_ctor_get(x_642, 1);
lean_inc(x_648);
lean_dec(x_642);
x_649 = l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
x_589 = x_649;
x_590 = x_648;
goto block_615;
}
}
}
}
else
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; 
x_672 = lean_ctor_get(x_631, 0);
lean_inc(x_672);
x_673 = lean_ctor_get(x_631, 1);
lean_inc(x_673);
lean_dec(x_631);
x_674 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_674, 0, x_672);
x_589 = x_674;
x_590 = x_673;
goto block_615;
}
}
block_686:
{
if (x_676 == 0)
{
x_630 = x_677;
goto block_675;
}
else
{
lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; 
lean_inc(x_494);
x_678 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_678, 0, x_494);
x_679 = l_Lean_Meta_synthInstanceImp_x3f___closed__9;
x_680 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_680, 0, x_678);
lean_ctor_set(x_680, 1, x_679);
lean_inc(x_628);
x_681 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_681, 0, x_628);
x_682 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_682, 0, x_680);
lean_ctor_set(x_682, 1, x_681);
x_683 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_684 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_683, x_682, x_2, x_3, x_4, x_5, x_677);
x_685 = lean_ctor_get(x_684, 1);
lean_inc(x_685);
lean_dec(x_684);
x_630 = x_685;
goto block_675;
}
}
}
else
{
lean_object* x_703; lean_object* x_704; lean_object* x_705; 
lean_dec(x_8);
x_703 = lean_ctor_get(x_627, 0);
lean_inc(x_703);
x_704 = lean_ctor_get(x_627, 1);
lean_inc(x_704);
lean_dec(x_627);
x_705 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_705, 0, x_703);
x_589 = x_705;
x_590 = x_704;
goto block_615;
}
block_615:
{
if (lean_obj_tag(x_589) == 0)
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; 
x_591 = lean_ctor_get(x_589, 0);
lean_inc(x_591);
lean_dec(x_589);
x_592 = lean_st_ref_take(x_3, x_590);
x_593 = lean_ctor_get(x_592, 0);
lean_inc(x_593);
x_594 = lean_ctor_get(x_592, 1);
lean_inc(x_594);
lean_dec(x_592);
x_595 = lean_ctor_get(x_593, 1);
lean_inc(x_595);
x_596 = lean_ctor_get(x_593, 2);
lean_inc(x_596);
if (lean_is_exclusive(x_593)) {
 lean_ctor_release(x_593, 0);
 lean_ctor_release(x_593, 1);
 lean_ctor_release(x_593, 2);
 x_597 = x_593;
} else {
 lean_dec_ref(x_593);
 x_597 = lean_box(0);
}
if (lean_is_scalar(x_597)) {
 x_598 = lean_alloc_ctor(0, 3, 0);
} else {
 x_598 = x_597;
}
lean_ctor_set(x_598, 0, x_588);
lean_ctor_set(x_598, 1, x_595);
lean_ctor_set(x_598, 2, x_596);
x_599 = lean_st_ref_set(x_3, x_598, x_594);
x_600 = lean_ctor_get(x_599, 1);
lean_inc(x_600);
if (lean_is_exclusive(x_599)) {
 lean_ctor_release(x_599, 0);
 lean_ctor_release(x_599, 1);
 x_601 = x_599;
} else {
 lean_dec_ref(x_599);
 x_601 = lean_box(0);
}
if (lean_is_scalar(x_601)) {
 x_602 = lean_alloc_ctor(1, 2, 0);
} else {
 x_602 = x_601;
 lean_ctor_set_tag(x_602, 1);
}
lean_ctor_set(x_602, 0, x_591);
lean_ctor_set(x_602, 1, x_600);
x_496 = x_602;
goto block_577;
}
else
{
lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; 
x_603 = lean_ctor_get(x_589, 0);
lean_inc(x_603);
lean_dec(x_589);
x_604 = lean_st_ref_take(x_3, x_590);
x_605 = lean_ctor_get(x_604, 0);
lean_inc(x_605);
x_606 = lean_ctor_get(x_604, 1);
lean_inc(x_606);
lean_dec(x_604);
x_607 = lean_ctor_get(x_605, 1);
lean_inc(x_607);
x_608 = lean_ctor_get(x_605, 2);
lean_inc(x_608);
if (lean_is_exclusive(x_605)) {
 lean_ctor_release(x_605, 0);
 lean_ctor_release(x_605, 1);
 lean_ctor_release(x_605, 2);
 x_609 = x_605;
} else {
 lean_dec_ref(x_605);
 x_609 = lean_box(0);
}
if (lean_is_scalar(x_609)) {
 x_610 = lean_alloc_ctor(0, 3, 0);
} else {
 x_610 = x_609;
}
lean_ctor_set(x_610, 0, x_588);
lean_ctor_set(x_610, 1, x_607);
lean_ctor_set(x_610, 2, x_608);
x_611 = lean_st_ref_set(x_3, x_610, x_606);
x_612 = lean_ctor_get(x_611, 1);
lean_inc(x_612);
if (lean_is_exclusive(x_611)) {
 lean_ctor_release(x_611, 0);
 lean_ctor_release(x_611, 1);
 x_613 = x_611;
} else {
 lean_dec_ref(x_611);
 x_613 = lean_box(0);
}
if (lean_is_scalar(x_613)) {
 x_614 = lean_alloc_ctor(0, 2, 0);
} else {
 x_614 = x_613;
}
lean_ctor_set(x_614, 0, x_603);
lean_ctor_set(x_614, 1, x_612);
x_496 = x_614;
goto block_577;
}
}
}
else
{
lean_object* x_706; lean_object* x_707; 
lean_dec(x_494);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_706 = lean_ctor_get(x_584, 0);
lean_inc(x_706);
lean_dec(x_584);
if (lean_is_scalar(x_581)) {
 x_707 = lean_alloc_ctor(0, 2, 0);
} else {
 x_707 = x_581;
}
lean_ctor_set(x_707, 0, x_706);
lean_ctor_set(x_707, 1, x_580);
return x_707;
}
block_577:
{
if (lean_obj_tag(x_496) == 0)
{
lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; 
x_497 = lean_ctor_get(x_496, 0);
lean_inc(x_497);
x_498 = lean_ctor_get(x_496, 1);
lean_inc(x_498);
if (lean_is_exclusive(x_496)) {
 lean_ctor_release(x_496, 0);
 lean_ctor_release(x_496, 1);
 x_499 = x_496;
} else {
 lean_dec_ref(x_496);
 x_499 = lean_box(0);
}
if (lean_obj_tag(x_497) == 0)
{
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
x_500 = x_497;
x_501 = x_498;
goto block_524;
}
else
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_551; lean_object* x_552; lean_object* x_553; 
x_525 = lean_ctor_get(x_497, 0);
lean_inc(x_525);
if (lean_is_exclusive(x_497)) {
 lean_ctor_release(x_497, 0);
 x_526 = x_497;
} else {
 lean_dec_ref(x_497);
 x_526 = lean_box(0);
}
x_551 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_552 = lean_ctor_get(x_551, 2);
lean_inc(x_552);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_553 = lean_apply_5(x_552, x_2, x_3, x_4, x_5, x_498);
if (lean_obj_tag(x_553) == 0)
{
lean_object* x_554; uint8_t x_555; 
x_554 = lean_ctor_get(x_553, 0);
lean_inc(x_554);
x_555 = lean_ctor_get_uint8(x_554, sizeof(void*)*1);
lean_dec(x_554);
if (x_555 == 0)
{
lean_object* x_556; 
x_556 = lean_ctor_get(x_553, 1);
lean_inc(x_556);
lean_dec(x_553);
x_527 = x_556;
goto block_550;
}
else
{
lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; uint8_t x_561; 
x_557 = lean_ctor_get(x_553, 1);
lean_inc(x_557);
lean_dec(x_553);
x_558 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_559 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_558, x_2, x_3, x_4, x_5, x_557);
x_560 = lean_ctor_get(x_559, 0);
lean_inc(x_560);
x_561 = lean_unbox(x_560);
lean_dec(x_560);
if (x_561 == 0)
{
lean_object* x_562; 
x_562 = lean_ctor_get(x_559, 1);
lean_inc(x_562);
lean_dec(x_559);
x_527 = x_562;
goto block_550;
}
else
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; 
x_563 = lean_ctor_get(x_559, 1);
lean_inc(x_563);
lean_dec(x_559);
lean_inc(x_525);
x_564 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_564, 0, x_525);
x_565 = l_Lean_Meta_synthInstanceImp_x3f___closed__3;
x_566 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_566, 0, x_565);
lean_ctor_set(x_566, 1, x_564);
x_567 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_558, x_566, x_2, x_3, x_4, x_5, x_563);
x_568 = lean_ctor_get(x_567, 1);
lean_inc(x_568);
lean_dec(x_567);
x_527 = x_568;
goto block_550;
}
}
}
else
{
lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; 
lean_dec(x_526);
lean_dec(x_525);
lean_dec(x_499);
lean_dec(x_494);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_569 = lean_ctor_get(x_553, 0);
lean_inc(x_569);
x_570 = lean_ctor_get(x_553, 1);
lean_inc(x_570);
if (lean_is_exclusive(x_553)) {
 lean_ctor_release(x_553, 0);
 lean_ctor_release(x_553, 1);
 x_571 = x_553;
} else {
 lean_dec_ref(x_553);
 x_571 = lean_box(0);
}
if (lean_is_scalar(x_571)) {
 x_572 = lean_alloc_ctor(1, 2, 0);
} else {
 x_572 = x_571;
}
lean_ctor_set(x_572, 0, x_569);
lean_ctor_set(x_572, 1, x_570);
return x_572;
}
block_550:
{
lean_object* x_528; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_525);
x_528 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_525, x_2, x_3, x_4, x_5, x_527);
if (lean_obj_tag(x_528) == 0)
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; 
x_529 = lean_ctor_get(x_528, 0);
lean_inc(x_529);
x_530 = lean_ctor_get(x_528, 1);
lean_inc(x_530);
lean_dec(x_528);
x_531 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_531, 0, x_11);
lean_ctor_set(x_531, 1, x_14);
lean_ctor_set(x_531, 2, x_15);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_494);
x_532 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_494, x_529, x_531, x_3, x_4, x_5, x_530);
if (lean_obj_tag(x_532) == 0)
{
lean_object* x_533; uint8_t x_534; 
x_533 = lean_ctor_get(x_532, 0);
lean_inc(x_533);
x_534 = lean_unbox(x_533);
lean_dec(x_533);
if (x_534 == 0)
{
lean_object* x_535; lean_object* x_536; 
lean_dec(x_526);
lean_dec(x_525);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
x_535 = lean_ctor_get(x_532, 1);
lean_inc(x_535);
lean_dec(x_532);
x_536 = lean_box(0);
x_500 = x_536;
x_501 = x_535;
goto block_524;
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; 
x_537 = lean_ctor_get(x_532, 1);
lean_inc(x_537);
lean_dec(x_532);
x_538 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_525, x_2, x_3, x_4, x_5, x_537);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_539 = lean_ctor_get(x_538, 0);
lean_inc(x_539);
x_540 = lean_ctor_get(x_538, 1);
lean_inc(x_540);
lean_dec(x_538);
if (lean_is_scalar(x_526)) {
 x_541 = lean_alloc_ctor(1, 1, 0);
} else {
 x_541 = x_526;
}
lean_ctor_set(x_541, 0, x_539);
x_500 = x_541;
x_501 = x_540;
goto block_524;
}
}
else
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; 
lean_dec(x_526);
lean_dec(x_525);
lean_dec(x_499);
lean_dec(x_494);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_542 = lean_ctor_get(x_532, 0);
lean_inc(x_542);
x_543 = lean_ctor_get(x_532, 1);
lean_inc(x_543);
if (lean_is_exclusive(x_532)) {
 lean_ctor_release(x_532, 0);
 lean_ctor_release(x_532, 1);
 x_544 = x_532;
} else {
 lean_dec_ref(x_532);
 x_544 = lean_box(0);
}
if (lean_is_scalar(x_544)) {
 x_545 = lean_alloc_ctor(1, 2, 0);
} else {
 x_545 = x_544;
}
lean_ctor_set(x_545, 0, x_542);
lean_ctor_set(x_545, 1, x_543);
return x_545;
}
}
else
{
lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; 
lean_dec(x_526);
lean_dec(x_525);
lean_dec(x_499);
lean_dec(x_494);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_546 = lean_ctor_get(x_528, 0);
lean_inc(x_546);
x_547 = lean_ctor_get(x_528, 1);
lean_inc(x_547);
if (lean_is_exclusive(x_528)) {
 lean_ctor_release(x_528, 0);
 lean_ctor_release(x_528, 1);
 x_548 = x_528;
} else {
 lean_dec_ref(x_528);
 x_548 = lean_box(0);
}
if (lean_is_scalar(x_548)) {
 x_549 = lean_alloc_ctor(1, 2, 0);
} else {
 x_549 = x_548;
}
lean_ctor_set(x_549, 0, x_546);
lean_ctor_set(x_549, 1, x_547);
return x_549;
}
}
}
block_524:
{
uint8_t x_502; 
x_502 = l_Lean_Expr_hasMVar(x_494);
if (x_502 == 0)
{
lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; 
lean_dec(x_499);
x_503 = lean_st_ref_take(x_3, x_501);
x_504 = lean_ctor_get(x_503, 0);
lean_inc(x_504);
x_505 = lean_ctor_get(x_504, 1);
lean_inc(x_505);
x_506 = lean_ctor_get(x_503, 1);
lean_inc(x_506);
lean_dec(x_503);
x_507 = lean_ctor_get(x_504, 0);
lean_inc(x_507);
x_508 = lean_ctor_get(x_504, 2);
lean_inc(x_508);
if (lean_is_exclusive(x_504)) {
 lean_ctor_release(x_504, 0);
 lean_ctor_release(x_504, 1);
 lean_ctor_release(x_504, 2);
 x_509 = x_504;
} else {
 lean_dec_ref(x_504);
 x_509 = lean_box(0);
}
x_510 = lean_ctor_get(x_505, 0);
lean_inc(x_510);
x_511 = lean_ctor_get(x_505, 1);
lean_inc(x_511);
x_512 = lean_ctor_get(x_505, 2);
lean_inc(x_512);
x_513 = lean_ctor_get(x_505, 3);
lean_inc(x_513);
x_514 = lean_ctor_get(x_505, 4);
lean_inc(x_514);
if (lean_is_exclusive(x_505)) {
 lean_ctor_release(x_505, 0);
 lean_ctor_release(x_505, 1);
 lean_ctor_release(x_505, 2);
 lean_ctor_release(x_505, 3);
 lean_ctor_release(x_505, 4);
 x_515 = x_505;
} else {
 lean_dec_ref(x_505);
 x_515 = lean_box(0);
}
lean_inc(x_500);
x_516 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstanceImp_x3f___spec__2(x_512, x_494, x_500);
if (lean_is_scalar(x_515)) {
 x_517 = lean_alloc_ctor(0, 5, 0);
} else {
 x_517 = x_515;
}
lean_ctor_set(x_517, 0, x_510);
lean_ctor_set(x_517, 1, x_511);
lean_ctor_set(x_517, 2, x_516);
lean_ctor_set(x_517, 3, x_513);
lean_ctor_set(x_517, 4, x_514);
if (lean_is_scalar(x_509)) {
 x_518 = lean_alloc_ctor(0, 3, 0);
} else {
 x_518 = x_509;
}
lean_ctor_set(x_518, 0, x_507);
lean_ctor_set(x_518, 1, x_517);
lean_ctor_set(x_518, 2, x_508);
x_519 = lean_st_ref_set(x_3, x_518, x_506);
lean_dec(x_3);
x_520 = lean_ctor_get(x_519, 1);
lean_inc(x_520);
if (lean_is_exclusive(x_519)) {
 lean_ctor_release(x_519, 0);
 lean_ctor_release(x_519, 1);
 x_521 = x_519;
} else {
 lean_dec_ref(x_519);
 x_521 = lean_box(0);
}
if (lean_is_scalar(x_521)) {
 x_522 = lean_alloc_ctor(0, 2, 0);
} else {
 x_522 = x_521;
}
lean_ctor_set(x_522, 0, x_500);
lean_ctor_set(x_522, 1, x_520);
return x_522;
}
else
{
lean_object* x_523; 
lean_dec(x_494);
lean_dec(x_3);
if (lean_is_scalar(x_499)) {
 x_523 = lean_alloc_ctor(0, 2, 0);
} else {
 x_523 = x_499;
}
lean_ctor_set(x_523, 0, x_500);
lean_ctor_set(x_523, 1, x_501);
return x_523;
}
}
}
else
{
lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; 
lean_dec(x_494);
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_573 = lean_ctor_get(x_496, 0);
lean_inc(x_573);
x_574 = lean_ctor_get(x_496, 1);
lean_inc(x_574);
if (lean_is_exclusive(x_496)) {
 lean_ctor_release(x_496, 0);
 lean_ctor_release(x_496, 1);
 x_575 = x_496;
} else {
 lean_dec_ref(x_496);
 x_575 = lean_box(0);
}
if (lean_is_scalar(x_575)) {
 x_576 = lean_alloc_ctor(1, 2, 0);
} else {
 x_576 = x_575;
}
lean_ctor_set(x_576, 0, x_573);
lean_ctor_set(x_576, 1, x_574);
return x_576;
}
}
}
else
{
lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
lean_dec(x_2);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_708 = lean_ctor_get(x_493, 0);
lean_inc(x_708);
x_709 = lean_ctor_get(x_493, 1);
lean_inc(x_709);
if (lean_is_exclusive(x_493)) {
 lean_ctor_release(x_493, 0);
 lean_ctor_release(x_493, 1);
 x_710 = x_493;
} else {
 lean_dec_ref(x_493);
 x_710 = lean_box(0);
}
if (lean_is_scalar(x_710)) {
 x_711 = lean_alloc_ctor(1, 2, 0);
} else {
 x_711 = x_710;
}
lean_ctor_set(x_711, 0, x_708);
lean_ctor_set(x_711, 1, x_709);
return x_711;
}
}
}
else
{
lean_object* x_712; lean_object* x_713; uint8_t x_714; uint8_t x_715; uint8_t x_716; lean_object* x_717; uint8_t x_718; uint8_t x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; 
x_712 = lean_ctor_get(x_2, 1);
x_713 = lean_ctor_get(x_2, 2);
lean_inc(x_713);
lean_inc(x_712);
lean_dec(x_2);
x_714 = lean_ctor_get_uint8(x_10, 2);
x_715 = lean_ctor_get_uint8(x_10, 3);
x_716 = lean_ctor_get_uint8(x_10, 4);
if (lean_is_exclusive(x_10)) {
 x_717 = x_10;
} else {
 lean_dec_ref(x_10);
 x_717 = lean_box(0);
}
x_718 = 1;
x_719 = 2;
if (lean_is_scalar(x_717)) {
 x_720 = lean_alloc_ctor(0, 0, 6);
} else {
 x_720 = x_717;
}
lean_ctor_set_uint8(x_720, 0, x_718);
lean_ctor_set_uint8(x_720, 1, x_718);
lean_ctor_set_uint8(x_720, 2, x_714);
lean_ctor_set_uint8(x_720, 3, x_715);
lean_ctor_set_uint8(x_720, 4, x_716);
lean_ctor_set_uint8(x_720, 5, x_719);
lean_inc(x_713);
lean_inc(x_712);
x_721 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_721, 0, x_720);
lean_ctor_set(x_721, 1, x_712);
lean_ctor_set(x_721, 2, x_713);
x_722 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_1, x_721, x_3, x_4, x_5, x_12);
x_723 = lean_ctor_get(x_722, 0);
lean_inc(x_723);
x_724 = lean_ctor_get(x_722, 1);
lean_inc(x_724);
lean_dec(x_722);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_721);
x_725 = l___private_Lean_Meta_SynthInstance_3__preprocess(x_723, x_721, x_3, x_4, x_5, x_724);
if (lean_obj_tag(x_725) == 0)
{
lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; 
x_726 = lean_ctor_get(x_725, 0);
lean_inc(x_726);
x_727 = lean_ctor_get(x_725, 1);
lean_inc(x_727);
lean_dec(x_725);
x_810 = lean_st_ref_get(x_3, x_727);
x_811 = lean_ctor_get(x_810, 0);
lean_inc(x_811);
x_812 = lean_ctor_get(x_810, 1);
lean_inc(x_812);
if (lean_is_exclusive(x_810)) {
 lean_ctor_release(x_810, 0);
 lean_ctor_release(x_810, 1);
 x_813 = x_810;
} else {
 lean_dec_ref(x_810);
 x_813 = lean_box(0);
}
x_814 = lean_ctor_get(x_811, 1);
lean_inc(x_814);
lean_dec(x_811);
x_815 = lean_ctor_get(x_814, 2);
lean_inc(x_815);
lean_dec(x_814);
x_816 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6(x_815, x_726);
if (lean_obj_tag(x_816) == 0)
{
lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; 
lean_dec(x_813);
x_817 = lean_st_ref_get(x_3, x_812);
x_818 = lean_ctor_get(x_817, 0);
lean_inc(x_818);
x_819 = lean_ctor_get(x_817, 1);
lean_inc(x_819);
lean_dec(x_817);
x_820 = lean_ctor_get(x_818, 0);
lean_inc(x_820);
lean_dec(x_818);
x_848 = lean_st_ref_take(x_3, x_819);
x_849 = lean_ctor_get(x_848, 0);
lean_inc(x_849);
x_850 = lean_ctor_get(x_848, 1);
lean_inc(x_850);
lean_dec(x_848);
x_851 = lean_ctor_get(x_849, 0);
lean_inc(x_851);
x_852 = lean_ctor_get(x_849, 1);
lean_inc(x_852);
x_853 = lean_ctor_get(x_849, 2);
lean_inc(x_853);
if (lean_is_exclusive(x_849)) {
 lean_ctor_release(x_849, 0);
 lean_ctor_release(x_849, 1);
 lean_ctor_release(x_849, 2);
 x_854 = x_849;
} else {
 lean_dec_ref(x_849);
 x_854 = lean_box(0);
}
x_855 = l_Lean_MetavarContext_incDepth(x_851);
if (lean_is_scalar(x_854)) {
 x_856 = lean_alloc_ctor(0, 3, 0);
} else {
 x_856 = x_854;
}
lean_ctor_set(x_856, 0, x_855);
lean_ctor_set(x_856, 1, x_852);
lean_ctor_set(x_856, 2, x_853);
x_857 = lean_st_ref_set(x_3, x_856, x_850);
x_858 = lean_ctor_get(x_857, 1);
lean_inc(x_858);
lean_dec(x_857);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_721);
lean_inc(x_726);
x_859 = l___private_Lean_Meta_SynthInstance_6__preprocessOutParam(x_726, x_721, x_3, x_4, x_5, x_858);
if (lean_obj_tag(x_859) == 0)
{
lean_object* x_860; lean_object* x_861; lean_object* x_862; uint8_t x_908; lean_object* x_909; lean_object* x_919; lean_object* x_920; lean_object* x_921; 
x_860 = lean_ctor_get(x_859, 0);
lean_inc(x_860);
x_861 = lean_ctor_get(x_859, 1);
lean_inc(x_861);
lean_dec(x_859);
x_919 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_920 = lean_ctor_get(x_919, 2);
lean_inc(x_920);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_721);
x_921 = lean_apply_5(x_920, x_721, x_3, x_4, x_5, x_861);
if (lean_obj_tag(x_921) == 0)
{
lean_object* x_922; uint8_t x_923; 
x_922 = lean_ctor_get(x_921, 0);
lean_inc(x_922);
x_923 = lean_ctor_get_uint8(x_922, sizeof(void*)*1);
lean_dec(x_922);
if (x_923 == 0)
{
lean_object* x_924; uint8_t x_925; 
x_924 = lean_ctor_get(x_921, 1);
lean_inc(x_924);
lean_dec(x_921);
x_925 = 0;
x_908 = x_925;
x_909 = x_924;
goto block_918;
}
else
{
lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; uint8_t x_931; 
x_926 = lean_ctor_get(x_921, 1);
lean_inc(x_926);
lean_dec(x_921);
x_927 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_928 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_927, x_721, x_3, x_4, x_5, x_926);
x_929 = lean_ctor_get(x_928, 0);
lean_inc(x_929);
x_930 = lean_ctor_get(x_928, 1);
lean_inc(x_930);
lean_dec(x_928);
x_931 = lean_unbox(x_929);
lean_dec(x_929);
x_908 = x_931;
x_909 = x_930;
goto block_918;
}
}
else
{
lean_object* x_932; lean_object* x_933; lean_object* x_934; 
lean_dec(x_860);
lean_dec(x_8);
x_932 = lean_ctor_get(x_921, 0);
lean_inc(x_932);
x_933 = lean_ctor_get(x_921, 1);
lean_inc(x_933);
lean_dec(x_921);
x_934 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_934, 0, x_932);
x_821 = x_934;
x_822 = x_933;
goto block_847;
}
block_907:
{
lean_object* x_863; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_721);
x_863 = l_Lean_Meta_SynthInstance_main(x_860, x_8, x_721, x_3, x_4, x_5, x_862);
if (lean_obj_tag(x_863) == 0)
{
lean_object* x_864; 
x_864 = lean_ctor_get(x_863, 0);
lean_inc(x_864);
if (lean_obj_tag(x_864) == 0)
{
lean_object* x_865; lean_object* x_866; 
x_865 = lean_ctor_get(x_863, 1);
lean_inc(x_865);
lean_dec(x_863);
x_866 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_866, 0, x_864);
x_821 = x_866;
x_822 = x_865;
goto block_847;
}
else
{
lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_883; lean_object* x_884; lean_object* x_885; 
x_867 = lean_ctor_get(x_863, 1);
lean_inc(x_867);
lean_dec(x_863);
x_868 = lean_ctor_get(x_864, 0);
lean_inc(x_868);
if (lean_is_exclusive(x_864)) {
 lean_ctor_release(x_864, 0);
 x_869 = x_864;
} else {
 lean_dec_ref(x_864);
 x_869 = lean_box(0);
}
x_883 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_884 = lean_ctor_get(x_883, 2);
lean_inc(x_884);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_721);
x_885 = lean_apply_5(x_884, x_721, x_3, x_4, x_5, x_867);
if (lean_obj_tag(x_885) == 0)
{
lean_object* x_886; uint8_t x_887; 
x_886 = lean_ctor_get(x_885, 0);
lean_inc(x_886);
x_887 = lean_ctor_get_uint8(x_886, sizeof(void*)*1);
lean_dec(x_886);
if (x_887 == 0)
{
lean_object* x_888; 
x_888 = lean_ctor_get(x_885, 1);
lean_inc(x_888);
lean_dec(x_885);
x_870 = x_888;
goto block_882;
}
else
{
lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; uint8_t x_893; 
x_889 = lean_ctor_get(x_885, 1);
lean_inc(x_889);
lean_dec(x_885);
x_890 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_891 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_890, x_721, x_3, x_4, x_5, x_889);
x_892 = lean_ctor_get(x_891, 0);
lean_inc(x_892);
x_893 = lean_unbox(x_892);
lean_dec(x_892);
if (x_893 == 0)
{
lean_object* x_894; 
x_894 = lean_ctor_get(x_891, 1);
lean_inc(x_894);
lean_dec(x_891);
x_870 = x_894;
goto block_882;
}
else
{
lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; 
x_895 = lean_ctor_get(x_891, 1);
lean_inc(x_895);
lean_dec(x_891);
lean_inc(x_868);
x_896 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_896, 0, x_868);
x_897 = l_Lean_Meta_synthInstanceImp_x3f___closed__6;
x_898 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_898, 0, x_897);
lean_ctor_set(x_898, 1, x_896);
x_899 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_890, x_898, x_721, x_3, x_4, x_5, x_895);
x_900 = lean_ctor_get(x_899, 1);
lean_inc(x_900);
lean_dec(x_899);
x_870 = x_900;
goto block_882;
}
}
}
else
{
lean_object* x_901; lean_object* x_902; lean_object* x_903; 
lean_dec(x_869);
lean_dec(x_868);
x_901 = lean_ctor_get(x_885, 0);
lean_inc(x_901);
x_902 = lean_ctor_get(x_885, 1);
lean_inc(x_902);
lean_dec(x_885);
x_903 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_903, 0, x_901);
x_821 = x_903;
x_822 = x_902;
goto block_847;
}
block_882:
{
lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; uint8_t x_876; 
x_871 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_868, x_721, x_3, x_4, x_5, x_870);
x_872 = lean_ctor_get(x_871, 0);
lean_inc(x_872);
x_873 = lean_ctor_get(x_871, 1);
lean_inc(x_873);
lean_dec(x_871);
x_874 = l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(x_872, x_721, x_3, x_4, x_5, x_873);
x_875 = lean_ctor_get(x_874, 0);
lean_inc(x_875);
x_876 = lean_unbox(x_875);
lean_dec(x_875);
if (x_876 == 0)
{
lean_object* x_877; lean_object* x_878; lean_object* x_879; 
x_877 = lean_ctor_get(x_874, 1);
lean_inc(x_877);
lean_dec(x_874);
if (lean_is_scalar(x_869)) {
 x_878 = lean_alloc_ctor(1, 1, 0);
} else {
 x_878 = x_869;
}
lean_ctor_set(x_878, 0, x_872);
x_879 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_879, 0, x_878);
x_821 = x_879;
x_822 = x_877;
goto block_847;
}
else
{
lean_object* x_880; lean_object* x_881; 
lean_dec(x_872);
lean_dec(x_869);
x_880 = lean_ctor_get(x_874, 1);
lean_inc(x_880);
lean_dec(x_874);
x_881 = l_Lean_Meta_SynthInstance_tryAnswer___closed__1;
x_821 = x_881;
x_822 = x_880;
goto block_847;
}
}
}
}
else
{
lean_object* x_904; lean_object* x_905; lean_object* x_906; 
x_904 = lean_ctor_get(x_863, 0);
lean_inc(x_904);
x_905 = lean_ctor_get(x_863, 1);
lean_inc(x_905);
lean_dec(x_863);
x_906 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_906, 0, x_904);
x_821 = x_906;
x_822 = x_905;
goto block_847;
}
}
block_918:
{
if (x_908 == 0)
{
x_862 = x_909;
goto block_907;
}
else
{
lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; 
lean_inc(x_726);
x_910 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_910, 0, x_726);
x_911 = l_Lean_Meta_synthInstanceImp_x3f___closed__9;
x_912 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_912, 0, x_910);
lean_ctor_set(x_912, 1, x_911);
lean_inc(x_860);
x_913 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_913, 0, x_860);
x_914 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_914, 0, x_912);
lean_ctor_set(x_914, 1, x_913);
x_915 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_916 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_915, x_914, x_721, x_3, x_4, x_5, x_909);
x_917 = lean_ctor_get(x_916, 1);
lean_inc(x_917);
lean_dec(x_916);
x_862 = x_917;
goto block_907;
}
}
}
else
{
lean_object* x_935; lean_object* x_936; lean_object* x_937; 
lean_dec(x_8);
x_935 = lean_ctor_get(x_859, 0);
lean_inc(x_935);
x_936 = lean_ctor_get(x_859, 1);
lean_inc(x_936);
lean_dec(x_859);
x_937 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_937, 0, x_935);
x_821 = x_937;
x_822 = x_936;
goto block_847;
}
block_847:
{
if (lean_obj_tag(x_821) == 0)
{
lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; 
x_823 = lean_ctor_get(x_821, 0);
lean_inc(x_823);
lean_dec(x_821);
x_824 = lean_st_ref_take(x_3, x_822);
x_825 = lean_ctor_get(x_824, 0);
lean_inc(x_825);
x_826 = lean_ctor_get(x_824, 1);
lean_inc(x_826);
lean_dec(x_824);
x_827 = lean_ctor_get(x_825, 1);
lean_inc(x_827);
x_828 = lean_ctor_get(x_825, 2);
lean_inc(x_828);
if (lean_is_exclusive(x_825)) {
 lean_ctor_release(x_825, 0);
 lean_ctor_release(x_825, 1);
 lean_ctor_release(x_825, 2);
 x_829 = x_825;
} else {
 lean_dec_ref(x_825);
 x_829 = lean_box(0);
}
if (lean_is_scalar(x_829)) {
 x_830 = lean_alloc_ctor(0, 3, 0);
} else {
 x_830 = x_829;
}
lean_ctor_set(x_830, 0, x_820);
lean_ctor_set(x_830, 1, x_827);
lean_ctor_set(x_830, 2, x_828);
x_831 = lean_st_ref_set(x_3, x_830, x_826);
x_832 = lean_ctor_get(x_831, 1);
lean_inc(x_832);
if (lean_is_exclusive(x_831)) {
 lean_ctor_release(x_831, 0);
 lean_ctor_release(x_831, 1);
 x_833 = x_831;
} else {
 lean_dec_ref(x_831);
 x_833 = lean_box(0);
}
if (lean_is_scalar(x_833)) {
 x_834 = lean_alloc_ctor(1, 2, 0);
} else {
 x_834 = x_833;
 lean_ctor_set_tag(x_834, 1);
}
lean_ctor_set(x_834, 0, x_823);
lean_ctor_set(x_834, 1, x_832);
x_728 = x_834;
goto block_809;
}
else
{
lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; 
x_835 = lean_ctor_get(x_821, 0);
lean_inc(x_835);
lean_dec(x_821);
x_836 = lean_st_ref_take(x_3, x_822);
x_837 = lean_ctor_get(x_836, 0);
lean_inc(x_837);
x_838 = lean_ctor_get(x_836, 1);
lean_inc(x_838);
lean_dec(x_836);
x_839 = lean_ctor_get(x_837, 1);
lean_inc(x_839);
x_840 = lean_ctor_get(x_837, 2);
lean_inc(x_840);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 lean_ctor_release(x_837, 2);
 x_841 = x_837;
} else {
 lean_dec_ref(x_837);
 x_841 = lean_box(0);
}
if (lean_is_scalar(x_841)) {
 x_842 = lean_alloc_ctor(0, 3, 0);
} else {
 x_842 = x_841;
}
lean_ctor_set(x_842, 0, x_820);
lean_ctor_set(x_842, 1, x_839);
lean_ctor_set(x_842, 2, x_840);
x_843 = lean_st_ref_set(x_3, x_842, x_838);
x_844 = lean_ctor_get(x_843, 1);
lean_inc(x_844);
if (lean_is_exclusive(x_843)) {
 lean_ctor_release(x_843, 0);
 lean_ctor_release(x_843, 1);
 x_845 = x_843;
} else {
 lean_dec_ref(x_843);
 x_845 = lean_box(0);
}
if (lean_is_scalar(x_845)) {
 x_846 = lean_alloc_ctor(0, 2, 0);
} else {
 x_846 = x_845;
}
lean_ctor_set(x_846, 0, x_835);
lean_ctor_set(x_846, 1, x_844);
x_728 = x_846;
goto block_809;
}
}
}
else
{
lean_object* x_938; lean_object* x_939; 
lean_dec(x_726);
lean_dec(x_721);
lean_dec(x_713);
lean_dec(x_712);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_938 = lean_ctor_get(x_816, 0);
lean_inc(x_938);
lean_dec(x_816);
if (lean_is_scalar(x_813)) {
 x_939 = lean_alloc_ctor(0, 2, 0);
} else {
 x_939 = x_813;
}
lean_ctor_set(x_939, 0, x_938);
lean_ctor_set(x_939, 1, x_812);
return x_939;
}
block_809:
{
if (lean_obj_tag(x_728) == 0)
{
lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; 
x_729 = lean_ctor_get(x_728, 0);
lean_inc(x_729);
x_730 = lean_ctor_get(x_728, 1);
lean_inc(x_730);
if (lean_is_exclusive(x_728)) {
 lean_ctor_release(x_728, 0);
 lean_ctor_release(x_728, 1);
 x_731 = x_728;
} else {
 lean_dec_ref(x_728);
 x_731 = lean_box(0);
}
if (lean_obj_tag(x_729) == 0)
{
lean_dec(x_721);
lean_dec(x_713);
lean_dec(x_712);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
x_732 = x_729;
x_733 = x_730;
goto block_756;
}
else
{
lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_783; lean_object* x_784; lean_object* x_785; 
x_757 = lean_ctor_get(x_729, 0);
lean_inc(x_757);
if (lean_is_exclusive(x_729)) {
 lean_ctor_release(x_729, 0);
 x_758 = x_729;
} else {
 lean_dec_ref(x_729);
 x_758 = lean_box(0);
}
x_783 = l_Lean_Meta_Lean_SimpleMonadTracerAdapter___closed__4;
x_784 = lean_ctor_get(x_783, 2);
lean_inc(x_784);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_721);
x_785 = lean_apply_5(x_784, x_721, x_3, x_4, x_5, x_730);
if (lean_obj_tag(x_785) == 0)
{
lean_object* x_786; uint8_t x_787; 
x_786 = lean_ctor_get(x_785, 0);
lean_inc(x_786);
x_787 = lean_ctor_get_uint8(x_786, sizeof(void*)*1);
lean_dec(x_786);
if (x_787 == 0)
{
lean_object* x_788; 
x_788 = lean_ctor_get(x_785, 1);
lean_inc(x_788);
lean_dec(x_785);
x_759 = x_788;
goto block_782;
}
else
{
lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; uint8_t x_793; 
x_789 = lean_ctor_get(x_785, 1);
lean_inc(x_789);
lean_dec(x_785);
x_790 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_791 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_790, x_721, x_3, x_4, x_5, x_789);
x_792 = lean_ctor_get(x_791, 0);
lean_inc(x_792);
x_793 = lean_unbox(x_792);
lean_dec(x_792);
if (x_793 == 0)
{
lean_object* x_794; 
x_794 = lean_ctor_get(x_791, 1);
lean_inc(x_794);
lean_dec(x_791);
x_759 = x_794;
goto block_782;
}
else
{
lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; 
x_795 = lean_ctor_get(x_791, 1);
lean_inc(x_795);
lean_dec(x_791);
lean_inc(x_757);
x_796 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_796, 0, x_757);
x_797 = l_Lean_Meta_synthInstanceImp_x3f___closed__3;
x_798 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_798, 0, x_797);
lean_ctor_set(x_798, 1, x_796);
x_799 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_790, x_798, x_721, x_3, x_4, x_5, x_795);
x_800 = lean_ctor_get(x_799, 1);
lean_inc(x_800);
lean_dec(x_799);
x_759 = x_800;
goto block_782;
}
}
}
else
{
lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; 
lean_dec(x_758);
lean_dec(x_757);
lean_dec(x_731);
lean_dec(x_726);
lean_dec(x_721);
lean_dec(x_713);
lean_dec(x_712);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_801 = lean_ctor_get(x_785, 0);
lean_inc(x_801);
x_802 = lean_ctor_get(x_785, 1);
lean_inc(x_802);
if (lean_is_exclusive(x_785)) {
 lean_ctor_release(x_785, 0);
 lean_ctor_release(x_785, 1);
 x_803 = x_785;
} else {
 lean_dec_ref(x_785);
 x_803 = lean_box(0);
}
if (lean_is_scalar(x_803)) {
 x_804 = lean_alloc_ctor(1, 2, 0);
} else {
 x_804 = x_803;
}
lean_ctor_set(x_804, 0, x_801);
lean_ctor_set(x_804, 1, x_802);
return x_804;
}
block_782:
{
lean_object* x_760; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_721);
lean_inc(x_757);
x_760 = l_Lean_inferType___at_Lean_mkAuxDefinitionFor___spec__1(x_757, x_721, x_3, x_4, x_5, x_759);
if (lean_obj_tag(x_760) == 0)
{
lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; 
x_761 = lean_ctor_get(x_760, 0);
lean_inc(x_761);
x_762 = lean_ctor_get(x_760, 1);
lean_inc(x_762);
lean_dec(x_760);
x_763 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_763, 0, x_11);
lean_ctor_set(x_763, 1, x_712);
lean_ctor_set(x_763, 2, x_713);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_726);
x_764 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_726, x_761, x_763, x_3, x_4, x_5, x_762);
if (lean_obj_tag(x_764) == 0)
{
lean_object* x_765; uint8_t x_766; 
x_765 = lean_ctor_get(x_764, 0);
lean_inc(x_765);
x_766 = lean_unbox(x_765);
lean_dec(x_765);
if (x_766 == 0)
{
lean_object* x_767; lean_object* x_768; 
lean_dec(x_758);
lean_dec(x_757);
lean_dec(x_721);
lean_dec(x_5);
lean_dec(x_4);
x_767 = lean_ctor_get(x_764, 1);
lean_inc(x_767);
lean_dec(x_764);
x_768 = lean_box(0);
x_732 = x_768;
x_733 = x_767;
goto block_756;
}
else
{
lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; 
x_769 = lean_ctor_get(x_764, 1);
lean_inc(x_769);
lean_dec(x_764);
x_770 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_757, x_721, x_3, x_4, x_5, x_769);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_721);
x_771 = lean_ctor_get(x_770, 0);
lean_inc(x_771);
x_772 = lean_ctor_get(x_770, 1);
lean_inc(x_772);
lean_dec(x_770);
if (lean_is_scalar(x_758)) {
 x_773 = lean_alloc_ctor(1, 1, 0);
} else {
 x_773 = x_758;
}
lean_ctor_set(x_773, 0, x_771);
x_732 = x_773;
x_733 = x_772;
goto block_756;
}
}
else
{
lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; 
lean_dec(x_758);
lean_dec(x_757);
lean_dec(x_731);
lean_dec(x_726);
lean_dec(x_721);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_774 = lean_ctor_get(x_764, 0);
lean_inc(x_774);
x_775 = lean_ctor_get(x_764, 1);
lean_inc(x_775);
if (lean_is_exclusive(x_764)) {
 lean_ctor_release(x_764, 0);
 lean_ctor_release(x_764, 1);
 x_776 = x_764;
} else {
 lean_dec_ref(x_764);
 x_776 = lean_box(0);
}
if (lean_is_scalar(x_776)) {
 x_777 = lean_alloc_ctor(1, 2, 0);
} else {
 x_777 = x_776;
}
lean_ctor_set(x_777, 0, x_774);
lean_ctor_set(x_777, 1, x_775);
return x_777;
}
}
else
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; 
lean_dec(x_758);
lean_dec(x_757);
lean_dec(x_731);
lean_dec(x_726);
lean_dec(x_721);
lean_dec(x_713);
lean_dec(x_712);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_778 = lean_ctor_get(x_760, 0);
lean_inc(x_778);
x_779 = lean_ctor_get(x_760, 1);
lean_inc(x_779);
if (lean_is_exclusive(x_760)) {
 lean_ctor_release(x_760, 0);
 lean_ctor_release(x_760, 1);
 x_780 = x_760;
} else {
 lean_dec_ref(x_760);
 x_780 = lean_box(0);
}
if (lean_is_scalar(x_780)) {
 x_781 = lean_alloc_ctor(1, 2, 0);
} else {
 x_781 = x_780;
}
lean_ctor_set(x_781, 0, x_778);
lean_ctor_set(x_781, 1, x_779);
return x_781;
}
}
}
block_756:
{
uint8_t x_734; 
x_734 = l_Lean_Expr_hasMVar(x_726);
if (x_734 == 0)
{
lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; 
lean_dec(x_731);
x_735 = lean_st_ref_take(x_3, x_733);
x_736 = lean_ctor_get(x_735, 0);
lean_inc(x_736);
x_737 = lean_ctor_get(x_736, 1);
lean_inc(x_737);
x_738 = lean_ctor_get(x_735, 1);
lean_inc(x_738);
lean_dec(x_735);
x_739 = lean_ctor_get(x_736, 0);
lean_inc(x_739);
x_740 = lean_ctor_get(x_736, 2);
lean_inc(x_740);
if (lean_is_exclusive(x_736)) {
 lean_ctor_release(x_736, 0);
 lean_ctor_release(x_736, 1);
 lean_ctor_release(x_736, 2);
 x_741 = x_736;
} else {
 lean_dec_ref(x_736);
 x_741 = lean_box(0);
}
x_742 = lean_ctor_get(x_737, 0);
lean_inc(x_742);
x_743 = lean_ctor_get(x_737, 1);
lean_inc(x_743);
x_744 = lean_ctor_get(x_737, 2);
lean_inc(x_744);
x_745 = lean_ctor_get(x_737, 3);
lean_inc(x_745);
x_746 = lean_ctor_get(x_737, 4);
lean_inc(x_746);
if (lean_is_exclusive(x_737)) {
 lean_ctor_release(x_737, 0);
 lean_ctor_release(x_737, 1);
 lean_ctor_release(x_737, 2);
 lean_ctor_release(x_737, 3);
 lean_ctor_release(x_737, 4);
 x_747 = x_737;
} else {
 lean_dec_ref(x_737);
 x_747 = lean_box(0);
}
lean_inc(x_732);
x_748 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstanceImp_x3f___spec__2(x_744, x_726, x_732);
if (lean_is_scalar(x_747)) {
 x_749 = lean_alloc_ctor(0, 5, 0);
} else {
 x_749 = x_747;
}
lean_ctor_set(x_749, 0, x_742);
lean_ctor_set(x_749, 1, x_743);
lean_ctor_set(x_749, 2, x_748);
lean_ctor_set(x_749, 3, x_745);
lean_ctor_set(x_749, 4, x_746);
if (lean_is_scalar(x_741)) {
 x_750 = lean_alloc_ctor(0, 3, 0);
} else {
 x_750 = x_741;
}
lean_ctor_set(x_750, 0, x_739);
lean_ctor_set(x_750, 1, x_749);
lean_ctor_set(x_750, 2, x_740);
x_751 = lean_st_ref_set(x_3, x_750, x_738);
lean_dec(x_3);
x_752 = lean_ctor_get(x_751, 1);
lean_inc(x_752);
if (lean_is_exclusive(x_751)) {
 lean_ctor_release(x_751, 0);
 lean_ctor_release(x_751, 1);
 x_753 = x_751;
} else {
 lean_dec_ref(x_751);
 x_753 = lean_box(0);
}
if (lean_is_scalar(x_753)) {
 x_754 = lean_alloc_ctor(0, 2, 0);
} else {
 x_754 = x_753;
}
lean_ctor_set(x_754, 0, x_732);
lean_ctor_set(x_754, 1, x_752);
return x_754;
}
else
{
lean_object* x_755; 
lean_dec(x_726);
lean_dec(x_3);
if (lean_is_scalar(x_731)) {
 x_755 = lean_alloc_ctor(0, 2, 0);
} else {
 x_755 = x_731;
}
lean_ctor_set(x_755, 0, x_732);
lean_ctor_set(x_755, 1, x_733);
return x_755;
}
}
}
else
{
lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; 
lean_dec(x_726);
lean_dec(x_721);
lean_dec(x_713);
lean_dec(x_712);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_805 = lean_ctor_get(x_728, 0);
lean_inc(x_805);
x_806 = lean_ctor_get(x_728, 1);
lean_inc(x_806);
if (lean_is_exclusive(x_728)) {
 lean_ctor_release(x_728, 0);
 lean_ctor_release(x_728, 1);
 x_807 = x_728;
} else {
 lean_dec_ref(x_728);
 x_807 = lean_box(0);
}
if (lean_is_scalar(x_807)) {
 x_808 = lean_alloc_ctor(1, 2, 0);
} else {
 x_808 = x_807;
}
lean_ctor_set(x_808, 0, x_805);
lean_ctor_set(x_808, 1, x_806);
return x_808;
}
}
}
else
{
lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; 
lean_dec(x_721);
lean_dec(x_713);
lean_dec(x_712);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_940 = lean_ctor_get(x_725, 0);
lean_inc(x_940);
x_941 = lean_ctor_get(x_725, 1);
lean_inc(x_941);
if (lean_is_exclusive(x_725)) {
 lean_ctor_release(x_725, 0);
 lean_ctor_release(x_725, 1);
 x_942 = x_725;
} else {
 lean_dec_ref(x_725);
 x_942 = lean_box(0);
}
if (lean_is_scalar(x_942)) {
 x_943 = lean_alloc_ctor(1, 2, 0);
} else {
 x_943 = x_942;
}
lean_ctor_set(x_943, 0, x_940);
lean_ctor_set(x_943, 1, x_941);
return x_943;
}
}
}
}
lean_object* l_Lean_getConfig___at_Lean_Meta_synthInstanceImp_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_getConfig___at_Lean_Meta_synthInstanceImp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__5(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__3(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___main___at_Lean_Meta_synthInstanceImp_x3f___spec__7(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstanceImp_x3f___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_hasAssignableMVar___at_Lean_Meta_synthInstanceImp_x3f___spec__9(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_trySynthInstanceImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
lean_ctor_set_uint8(x_8, 4, x_10);
x_11 = l_Lean_Meta_synthInstanceImp_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Option_toLOption___rarg(x_13);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = l_Option_toLOption___rarg(x_15);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_11, 0);
lean_dec(x_21);
return x_11;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_dec(x_11);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_11);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_11, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
x_27 = l_Lean_Meta_isDefEqStuckExceptionId;
x_28 = lean_nat_dec_eq(x_27, x_26);
lean_dec(x_26);
if (x_28 == 0)
{
return x_11;
}
else
{
lean_object* x_29; 
lean_dec(x_19);
x_29 = lean_box(2);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_29);
return x_11;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_dec(x_11);
x_31 = lean_ctor_get(x_19, 0);
lean_inc(x_31);
x_32 = l_Lean_Meta_isDefEqStuckExceptionId;
x_33 = lean_nat_dec_eq(x_32, x_31);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_19);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_19);
x_35 = lean_box(2);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_30);
return x_36;
}
}
}
}
}
else
{
uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get_uint8(x_8, 0);
x_38 = lean_ctor_get_uint8(x_8, 1);
x_39 = lean_ctor_get_uint8(x_8, 2);
x_40 = lean_ctor_get_uint8(x_8, 3);
x_41 = lean_ctor_get_uint8(x_8, 5);
lean_dec(x_8);
x_42 = 1;
x_43 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_43, 0, x_37);
lean_ctor_set_uint8(x_43, 1, x_38);
lean_ctor_set_uint8(x_43, 2, x_39);
lean_ctor_set_uint8(x_43, 3, x_40);
lean_ctor_set_uint8(x_43, 4, x_42);
lean_ctor_set_uint8(x_43, 5, x_41);
lean_ctor_set(x_2, 0, x_43);
x_44 = l_Lean_Meta_synthInstanceImp_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_47 = x_44;
} else {
 lean_dec_ref(x_44);
 x_47 = lean_box(0);
}
x_48 = l_Option_toLOption___rarg(x_45);
lean_dec(x_45);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_44, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_52 = x_44;
} else {
 lean_dec_ref(x_44);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_44, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_55 = x_44;
} else {
 lean_dec_ref(x_44);
 x_55 = lean_box(0);
}
x_56 = lean_ctor_get(x_50, 0);
lean_inc(x_56);
x_57 = l_Lean_Meta_isDefEqStuckExceptionId;
x_58 = lean_nat_dec_eq(x_57, x_56);
lean_dec(x_56);
if (x_58 == 0)
{
lean_object* x_59; 
if (lean_is_scalar(x_55)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_55;
}
lean_ctor_set(x_59, 0, x_50);
lean_ctor_set(x_59, 1, x_54);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_50);
x_60 = lean_box(2);
if (lean_is_scalar(x_55)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_55;
 lean_ctor_set_tag(x_61, 0);
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_54);
return x_61;
}
}
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_62 = lean_ctor_get(x_2, 0);
x_63 = lean_ctor_get(x_2, 1);
x_64 = lean_ctor_get(x_2, 2);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_2);
x_65 = lean_ctor_get_uint8(x_62, 0);
x_66 = lean_ctor_get_uint8(x_62, 1);
x_67 = lean_ctor_get_uint8(x_62, 2);
x_68 = lean_ctor_get_uint8(x_62, 3);
x_69 = lean_ctor_get_uint8(x_62, 5);
if (lean_is_exclusive(x_62)) {
 x_70 = x_62;
} else {
 lean_dec_ref(x_62);
 x_70 = lean_box(0);
}
x_71 = 1;
if (lean_is_scalar(x_70)) {
 x_72 = lean_alloc_ctor(0, 0, 6);
} else {
 x_72 = x_70;
}
lean_ctor_set_uint8(x_72, 0, x_65);
lean_ctor_set_uint8(x_72, 1, x_66);
lean_ctor_set_uint8(x_72, 2, x_67);
lean_ctor_set_uint8(x_72, 3, x_68);
lean_ctor_set_uint8(x_72, 4, x_71);
lean_ctor_set_uint8(x_72, 5, x_69);
x_73 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_63);
lean_ctor_set(x_73, 2, x_64);
x_74 = l_Lean_Meta_synthInstanceImp_x3f(x_1, x_73, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
x_78 = l_Option_toLOption___rarg(x_75);
lean_dec(x_75);
if (lean_is_scalar(x_77)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_77;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
else
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_74, 0);
lean_inc(x_80);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_74, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_82 = x_74;
} else {
 lean_dec_ref(x_74);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_84 = lean_ctor_get(x_74, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_85 = x_74;
} else {
 lean_dec_ref(x_74);
 x_85 = lean_box(0);
}
x_86 = lean_ctor_get(x_80, 0);
lean_inc(x_86);
x_87 = l_Lean_Meta_isDefEqStuckExceptionId;
x_88 = lean_nat_dec_eq(x_87, x_86);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; 
if (lean_is_scalar(x_85)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_85;
}
lean_ctor_set(x_89, 0, x_80);
lean_ctor_set(x_89, 1, x_84);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_80);
x_90 = lean_box(2);
if (lean_is_scalar(x_85)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_85;
 lean_ctor_set_tag(x_91, 0);
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_84);
return x_91;
}
}
}
}
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to synthesize");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_synthInstanceImp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_synthInstanceImp___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_synthInstanceImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_synthInstanceImp_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = l_Lean_indentExpr(x_10);
x_12 = l_Lean_Meta_synthInstanceImp___closed__3;
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_13, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_8, 0);
lean_inc(x_17);
lean_dec(x_8);
lean_ctor_set(x_7, 0, x_17);
return x_7;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_dec(x_7);
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_7);
if (x_21 == 0)
{
return x_7;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_7, 0);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_7);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_isExprMVarAssigned___at_Lean_Meta_synthPendingImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_3, x_4, x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_metavar_ctx_is_expr_assigned(x_9, x_1);
x_11 = lean_box(x_10);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_metavar_ctx_is_expr_assigned(x_12, x_1);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
}
lean_object* l_Lean_Meta_synthPendingImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_getMVarDecl___at_Lean_isReadOnlyExprMVar___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint8(x_8, sizeof(void*)*5);
x_10 = lean_box(x_9);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_ctor_get(x_8, 2);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_12);
x_13 = l___private_Lean_Meta_Basic_15__isClassImpl_x3f(x_12, x_2, x_3, x_4, x_5, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = 0;
x_18 = lean_box(x_17);
lean_ctor_set(x_13, 0, x_18);
return x_13;
}
else
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_dec(x_13);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_14);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_dec(x_13);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_24 = l_Lean_Meta_synthInstanceImp_x3f(x_12, x_2, x_3, x_4, x_5, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = 0;
x_29 = lean_box(x_28);
lean_ctor_set(x_24, 0, x_29);
return x_24;
}
else
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_dec(x_24);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_dec(x_24);
x_35 = lean_ctor_get(x_25, 0);
lean_inc(x_35);
lean_dec(x_25);
lean_inc(x_1);
x_36 = l_Lean_isExprMVarAssigned___at_Lean_Meta_synthPendingImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = l_Lean_assignExprMVar___at_Lean_Meta_getLevel___spec__3(x_1, x_35, x_2, x_3, x_4, x_5, x_39);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = 1;
x_44 = lean_box(x_43);
lean_ctor_set(x_40, 0, x_44);
return x_40;
}
else
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_dec(x_40);
x_46 = 1;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_36);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_36, 0);
lean_dec(x_50);
x_51 = 0;
x_52 = lean_box(x_51);
lean_ctor_set(x_36, 0, x_52);
return x_36;
}
else
{
lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_36, 1);
lean_inc(x_53);
lean_dec(x_36);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_24);
if (x_57 == 0)
{
return x_24;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_24, 0);
x_59 = lean_ctor_get(x_24, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_24);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_13);
if (x_61 == 0)
{
return x_13;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_13, 0);
x_63 = lean_ctor_get(x_13, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_13);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_7);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_7, 0);
lean_dec(x_66);
x_67 = 0;
x_68 = lean_box(x_67);
lean_ctor_set(x_7, 0, x_68);
return x_7;
}
else
{
lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_7, 1);
lean_inc(x_69);
lean_dec(x_7);
x_70 = 0;
x_71 = lean_box(x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_69);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_7);
if (x_73 == 0)
{
return x_7;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_7, 0);
x_75 = lean_ctor_get(x_7, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_7);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
lean_object* l_Lean_isExprMVarAssigned___at_Lean_Meta_synthPendingImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_isExprMVarAssigned___at_Lean_Meta_synthPendingImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* _init_l_Lean_Meta_setSynthPendingRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_synthPendingImp), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_setSynthPendingRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_Lean_synthPendingRef;
x_3 = l_Lean_Meta_setSynthPendingRef___closed__1;
x_4 = lean_st_ref_set(x_2, x_3, x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_8__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Meta_SynthInstance_newSubgoal___closed__2;
x_9 = l_Lean_registerTraceClass(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2;
x_12 = l_Lean_registerTraceClass(x_11, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_Meta_SynthInstance_resume___closed__4;
x_15 = l_Lean_registerTraceClass(x_14, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Meta_SynthInstance_generate___closed__2;
x_18 = l_Lean_registerTraceClass(x_17, x_16);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_9);
if (x_27 == 0)
{
return x_9;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_9, 0);
x_29 = lean_ctor_get(x_9, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_9);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_6);
if (x_31 == 0)
{
return x_6;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_6, 0);
x_33 = lean_ctor_get(x_6, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_6);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_3);
if (x_35 == 0)
{
return x_3;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_3, 0);
x_37 = lean_ctor_get(x_3, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_3);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_synthInstance_x3f___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstanceImp_x3f), 6, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_apply_2(x_3, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_synthInstance_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_synthInstance_x3f___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_trySynthInstance___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_trySynthInstanceImp), 6, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_apply_2(x_3, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_trySynthInstance(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_trySynthInstance___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_synthInstance___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstanceImp), 6, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_apply_2(x_3, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_synthInstance(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_synthInstance___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_Instances(lean_object*);
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Lean_Meta_AbstractMVars(lean_object*);
lean_object* initialize_Lean_Meta_WHNF(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_SynthInstance(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Instances(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AbstractMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__1 = _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__1);
l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__2 = _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__2);
l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__3 = _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__3);
l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__4 = _init_l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr___closed__4);
res = l_Lean_Meta_SynthInstance_mkInferTCGoalsLRAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_SynthInstance_inferTCGoalsLRAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_SynthInstance_inferTCGoalsLRAttr);
lean_dec_ref(res);
l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1 = _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_GeneratorNode_inhabited___closed__1);
l_Lean_Meta_SynthInstance_GeneratorNode_inhabited = _init_l_Lean_Meta_SynthInstance_GeneratorNode_inhabited();
lean_mark_persistent(l_Lean_Meta_SynthInstance_GeneratorNode_inhabited);
l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1 = _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_Consumernode_inhabited___closed__1);
l_Lean_Meta_SynthInstance_Consumernode_inhabited = _init_l_Lean_Meta_SynthInstance_Consumernode_inhabited();
lean_mark_persistent(l_Lean_Meta_SynthInstance_Consumernode_inhabited);
l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1 = _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__1);
l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2 = _init_l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_MkTableKey_normLevel___main___closed__2);
l_Lean_Meta_SynthInstance_mkTableKey___closed__1 = _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkTableKey___closed__1);
l_Lean_Meta_SynthInstance_mkTableKey___closed__2 = _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkTableKey___closed__2);
l_Lean_Meta_SynthInstance_mkTableKey___closed__3 = _init_l_Lean_Meta_SynthInstance_mkTableKey___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_mkTableKey___closed__3);
l_Lean_Meta_SynthInstance_Answer_inhabited___closed__1 = _init_l_Lean_Meta_SynthInstance_Answer_inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_Answer_inhabited___closed__1);
l_Lean_Meta_SynthInstance_Answer_inhabited = _init_l_Lean_Meta_SynthInstance_Answer_inhabited();
lean_mark_persistent(l_Lean_Meta_SynthInstance_Answer_inhabited);
l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1 = _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__1);
l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2 = _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__2);
l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3 = _init_l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Meta_SynthInstance_getInstances___spec__2___closed__3);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__1 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__1);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__2 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__2);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__3);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__4 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__4);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__5);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__6 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__6();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__6);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__7);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_getInstances___spec__6___closed__8);
l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1 = _init_l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1();
lean_mark_persistent(l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1);
l_Lean_Meta_SynthInstance_newSubgoal___closed__1 = _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_newSubgoal___closed__1);
l_Lean_Meta_SynthInstance_newSubgoal___closed__2 = _init_l_Lean_Meta_SynthInstance_newSubgoal___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_newSubgoal___closed__2);
l_Lean_Meta_SynthInstance_getEntry___closed__1 = _init_l_Lean_Meta_SynthInstance_getEntry___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getEntry___closed__1);
l_Lean_Meta_SynthInstance_getEntry___closed__2 = _init_l_Lean_Meta_SynthInstance_getEntry___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getEntry___closed__2);
l_Lean_Meta_SynthInstance_getEntry___closed__3 = _init_l_Lean_Meta_SynthInstance_getEntry___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getEntry___closed__3);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__1 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__1);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__2);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__3 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__3);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__4 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__4);
l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5 = _init_l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Basic_11__withNewLocalInstancesImpl___main___at_Lean_Meta_SynthInstance_tryResolveCore___spec__4___closed__5);
l_Lean_Meta_SynthInstance_tryAnswer___closed__1 = _init_l_Lean_Meta_SynthInstance_tryAnswer___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_tryAnswer___closed__1);
l_Lean_Meta_SynthInstance_wakeUp___closed__1 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__1);
l_Lean_Meta_SynthInstance_wakeUp___closed__2 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__2);
l_Lean_Meta_SynthInstance_wakeUp___closed__3 = _init_l_Lean_Meta_SynthInstance_wakeUp___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_wakeUp___closed__3);
l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__1 = _init_l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__1();
lean_mark_persistent(l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__1);
l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2 = _init_l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2();
lean_mark_persistent(l___private_Lean_Meta_SynthInstance_2__mkAnswer___closed__2);
l_Lean_Meta_SynthInstance_generate___closed__1 = _init_l_Lean_Meta_SynthInstance_generate___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__1);
l_Lean_Meta_SynthInstance_generate___closed__2 = _init_l_Lean_Meta_SynthInstance_generate___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__2);
l_Lean_Meta_SynthInstance_generate___closed__3 = _init_l_Lean_Meta_SynthInstance_generate___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__3);
l_Lean_Meta_SynthInstance_generate___closed__4 = _init_l_Lean_Meta_SynthInstance_generate___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__4);
l_Lean_Meta_SynthInstance_generate___closed__5 = _init_l_Lean_Meta_SynthInstance_generate___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_generate___closed__5);
l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1 = _init_l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1();
lean_mark_persistent(l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___closed__1);
l_Lean_Meta_SynthInstance_resume___closed__1 = _init_l_Lean_Meta_SynthInstance_resume___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__1);
l_Lean_Meta_SynthInstance_resume___closed__2 = _init_l_Lean_Meta_SynthInstance_resume___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__2);
l_Lean_Meta_SynthInstance_resume___closed__3 = _init_l_Lean_Meta_SynthInstance_resume___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__3);
l_Lean_Meta_SynthInstance_resume___closed__4 = _init_l_Lean_Meta_SynthInstance_resume___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__4);
l_Lean_Meta_SynthInstance_resume___closed__5 = _init_l_Lean_Meta_SynthInstance_resume___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__5);
l_Lean_Meta_SynthInstance_resume___closed__6 = _init_l_Lean_Meta_SynthInstance_resume___closed__6();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__6);
l_Lean_Meta_SynthInstance_resume___closed__7 = _init_l_Lean_Meta_SynthInstance_resume___closed__7();
lean_mark_persistent(l_Lean_Meta_SynthInstance_resume___closed__7);
l_Lean_Meta_SynthInstance_synth___main___closed__1 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__1);
l_Lean_Meta_SynthInstance_synth___main___closed__2 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__2);
l_Lean_Meta_SynthInstance_synth___main___closed__3 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__3);
l_Lean_Meta_SynthInstance_synth___main___closed__4 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__4);
l_Lean_Meta_SynthInstance_synth___main___closed__5 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__5);
l_Lean_Meta_SynthInstance_synth___main___closed__6 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__6();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__6);
l_Lean_Meta_SynthInstance_synth___main___closed__7 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__7();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__7);
l_Lean_Meta_SynthInstance_synth___main___closed__8 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__8();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__8);
l_Lean_Meta_SynthInstance_synth___main___closed__9 = _init_l_Lean_Meta_SynthInstance_synth___main___closed__9();
lean_mark_persistent(l_Lean_Meta_SynthInstance_synth___main___closed__9);
l_Lean_Meta_SynthInstance_main___closed__1 = _init_l_Lean_Meta_SynthInstance_main___closed__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__1);
l_Lean_Meta_SynthInstance_main___closed__2 = _init_l_Lean_Meta_SynthInstance_main___closed__2();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__2);
l_Lean_Meta_SynthInstance_main___closed__3 = _init_l_Lean_Meta_SynthInstance_main___closed__3();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__3);
l_Lean_Meta_SynthInstance_main___closed__4 = _init_l_Lean_Meta_SynthInstance_main___closed__4();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__4);
l_Lean_Meta_SynthInstance_main___closed__5 = _init_l_Lean_Meta_SynthInstance_main___closed__5();
lean_mark_persistent(l_Lean_Meta_SynthInstance_main___closed__5);
l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__1 = _init_l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__1();
lean_mark_persistent(l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__1);
l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__2 = _init_l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__2();
lean_mark_persistent(l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__2);
l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__3 = _init_l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__3();
lean_mark_persistent(l___private_Lean_Meta_SynthInstance_5__preprocessArgs___main___closed__3);
l_Lean_Meta_maxStepsOption___closed__1 = _init_l_Lean_Meta_maxStepsOption___closed__1();
lean_mark_persistent(l_Lean_Meta_maxStepsOption___closed__1);
l_Lean_Meta_maxStepsOption___closed__2 = _init_l_Lean_Meta_maxStepsOption___closed__2();
lean_mark_persistent(l_Lean_Meta_maxStepsOption___closed__2);
l_Lean_Meta_maxStepsOption___closed__3 = _init_l_Lean_Meta_maxStepsOption___closed__3();
lean_mark_persistent(l_Lean_Meta_maxStepsOption___closed__3);
l_Lean_Meta_maxStepsOption___closed__4 = _init_l_Lean_Meta_maxStepsOption___closed__4();
lean_mark_persistent(l_Lean_Meta_maxStepsOption___closed__4);
l_Lean_Meta_maxStepsOption___closed__5 = _init_l_Lean_Meta_maxStepsOption___closed__5();
lean_mark_persistent(l_Lean_Meta_maxStepsOption___closed__5);
l_Lean_Meta_maxStepsOption___closed__6 = _init_l_Lean_Meta_maxStepsOption___closed__6();
lean_mark_persistent(l_Lean_Meta_maxStepsOption___closed__6);
res = l_Lean_Meta_maxStepsOption(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_synthInstanceImp_x3f___closed__1 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__1);
l_Lean_Meta_synthInstanceImp_x3f___closed__2 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__2);
l_Lean_Meta_synthInstanceImp_x3f___closed__3 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__3);
l_Lean_Meta_synthInstanceImp_x3f___closed__4 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__4();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__4);
l_Lean_Meta_synthInstanceImp_x3f___closed__5 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__5();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__5);
l_Lean_Meta_synthInstanceImp_x3f___closed__6 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__6();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__6);
l_Lean_Meta_synthInstanceImp_x3f___closed__7 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__7();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__7);
l_Lean_Meta_synthInstanceImp_x3f___closed__8 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__8();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__8);
l_Lean_Meta_synthInstanceImp_x3f___closed__9 = _init_l_Lean_Meta_synthInstanceImp_x3f___closed__9();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp_x3f___closed__9);
l_Lean_Meta_synthInstanceImp___closed__1 = _init_l_Lean_Meta_synthInstanceImp___closed__1();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp___closed__1);
l_Lean_Meta_synthInstanceImp___closed__2 = _init_l_Lean_Meta_synthInstanceImp___closed__2();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp___closed__2);
l_Lean_Meta_synthInstanceImp___closed__3 = _init_l_Lean_Meta_synthInstanceImp___closed__3();
lean_mark_persistent(l_Lean_Meta_synthInstanceImp___closed__3);
l_Lean_Meta_setSynthPendingRef___closed__1 = _init_l_Lean_Meta_setSynthPendingRef___closed__1();
lean_mark_persistent(l_Lean_Meta_setSynthPendingRef___closed__1);
res = l_Lean_Meta_setSynthPendingRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_SynthInstance_8__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
