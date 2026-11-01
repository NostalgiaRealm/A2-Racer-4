
/* ==== FUN_0049f6e0 @ 0049f6e0 ==== 
 * signature: undefined4 * __fastcall FUN_0049f6e0(undefined4 * param_1)
 * body: 0049f6e0-0049f7bb
 */

undefined4 * __fastcall FUN_0049f6e0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ebac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049ea60(param_1 + 1);
  local_4 = 0;
  FUN_0049ed60(param_1 + 5);
  local_4._0_1_ = 1;
  FUN_00558643(param_1 + 8,0x10,0x20,FUN_00409390);
  *param_1 = &PTR_FUN_005771b4;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004a0100((uint)(DAT_00712864 == 0),(byte *)s__s___d__Can_t_create_multiple_in_005aed60);
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 100;
  param_1[0x9a] = 0;
  param_1[0x88] = 0;
  param_1[0x9b] = 0;
  DAT_00712864 = DAT_00712864 + 1;
  ExceptionList = local_c;
  return param_1;
}


