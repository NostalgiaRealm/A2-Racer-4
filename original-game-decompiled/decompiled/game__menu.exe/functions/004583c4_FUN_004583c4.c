
/* ==== FUN_004583c4 @ 004583c4 ==== 
 * signature: undefined __register FUN_004583c4(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004583c4-00458421
 */

void FUN_004583c4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  
  pcStack_1c = (code *)0x4583df;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',param_3);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,piVar1);
  (**(code **)(*piVar1 + 0x50))(piVar1,param_3);
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00458429;
  pcStack_20 = (code *)0x458421;
  FUN_00402f9c(piVar1);
  return;
}


