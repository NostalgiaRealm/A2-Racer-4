
/* ==== FUN_00457d74 @ 00457d74 ==== 
 * signature: undefined __register FUN_00457d74(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00457d74-00457dcc
 */

void FUN_00457d74(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  
  pcStack_18 = (code *)0x457d8c;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',param_3);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,piVar1);
  (**(code **)(*piVar1 + 0x14))();
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00457dd4;
  pcStack_1c = (code *)0x457dcc;
  FUN_00402f9c(piVar1);
  return;
}


