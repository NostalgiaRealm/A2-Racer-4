
/* ==== FUN_004604d8 @ 004604d8 ==== 
 * signature: undefined FUN_004604d8(void)
 * body: 004604d8-0046053d
 */

void FUN_004604d8(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  puStack_14 = (undefined1 *)0x4604f0;
  FUN_00404090((int)param_2);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_20 = (code *)0x46050d;
  puStack_14 = &stack0xfffffffc;
  piVar1 = FUN_00457d38((int *)&PTR_TSafeIniFile_vmt_000_0046004c,'\x01',param_2);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x18))(param_1,piVar1);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00460545;
  pcStack_24 = (code *)0x46053d;
  FUN_00402f9c(piVar1);
  return;
}


