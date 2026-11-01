
/* ==== FUN_00497800 @ 00497800 ==== 
 * signature: undefined4 * __fastcall FUN_00497800(undefined4 * param_1)
 * body: 00497800-00497894
 */

undefined4 * __fastcall FUN_00497800(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e46b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = &PTR_FUN_005767b0;
  *(undefined1 *)(param_1 + 2) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[3] = pvVar1;
  param_1[4] = 0;
  param_1[1] = &PTR_FUN_005767a0;
  param_1[6] = &PTR_FUN_005767b0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 7) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[8] = pvVar1;
  param_1[9] = 0;
  param_1[6] = &PTR_FUN_005767a0;
  *param_1 = 0;
  param_1[5] = 0;
  DAT_007127f0 = 0;
  ExceptionList = local_c;
  return param_1;
}


