
/* ==== FUN_00448850 @ 00448850 ==== 
 * signature: undefined4 * __fastcall FUN_00448850(undefined4 * param_1)
 * body: 00448850-004488df
 */

undefined4 * __fastcall FUN_00448850(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005767b0;
  *(undefined1 *)(param_1 + 1) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[2] = pvVar1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_005767a0;
  param_1[4] = &PTR_FUN_005767b0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[6] = pvVar1;
  param_1[7] = 0;
  param_1[4] = &PTR_FUN_005767a0;
  ExceptionList = local_c;
  return param_1;
}


