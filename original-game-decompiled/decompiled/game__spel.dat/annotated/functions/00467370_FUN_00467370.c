
/* ==== FUN_00467370 @ 00467370 ==== 
 * signature: undefined4 * __fastcall FUN_00467370(undefined4 * param_1)
 * body: 00467370-00467461
 */

undefined4 * __fastcall FUN_00467370(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ac29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00576984;
  *(undefined1 *)(param_1 + 1) = local_11;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[2] = pvVar1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00576974;
  param_1[4] = &PTR_FUN_00576984;
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = local_11;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[6] = pvVar1;
  param_1[7] = 0;
  param_1[4] = &PTR_FUN_00576974;
  param_1[8] = &PTR_FUN_00576984;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 9) = local_11;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[10] = pvVar1;
  param_1[0xb] = 0;
  param_1[8] = &PTR_FUN_00576974;
  param_1[0xc] = &PTR_FUN_00576984;
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0xd) = local_11;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xe] = pvVar1;
  param_1[0xf] = 0;
  param_1[0xc] = &PTR_FUN_00576974;
  param_1[0x10] = &PTR_FUN_00576984;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(param_1 + 0x11) = local_11;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x12] = pvVar1;
  param_1[0x13] = 0;
  param_1[0x10] = &PTR_FUN_00576974;
  ExceptionList = local_c;
  return param_1;
}


