
/* ==== FUN_00460568 @ 00460568 ==== 
 * signature: undefined __register FUN_00460568(int * param_1, undefined4 * param_2)
 * body: 00460568-004605c9
 */

void FUN_00460568(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46057c;
  FUN_00404090((int)param_2);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_20 = (code *)0x460599;
  puStack_14 = &stack0xfffffffc;
  piVar1 = FUN_00457d38((int *)&PTR_TSafeIniFile_vmt_000_0046004c,'\x01',param_2);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x1c))(param_1,piVar1);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004605d1;
  pcStack_24 = (code *)0x4605c9;
  FUN_00402f9c(piVar1);
  return;
}


