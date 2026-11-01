
/* ==== FUN_0041cc10 @ 0041cc10 ==== 
 * signature: undefined __register FUN_0041cc10(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0041cc10-0041cc4f;0041cc67-0041cc82
 */

void FUN_0041cc10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x41cc29;
  iVar1 = FUN_00402ce4((int *)&PTR_TIconImage_vmt_000_00415800,'\x01',param_3);
  pcStack_1c = thunk_FUN_00403180;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *in_FS_OFFSET = uStack_20;
  uStack_18 = 0x41cc6f;
  FUN_0041a6ec(iVar1);
  uStack_18 = 0x41cc77;
  FUN_0041a6f0(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


