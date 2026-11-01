
/* ==== FUN_0041f648 @ 0041f648 ==== 
 * signature: undefined __register FUN_0041f648(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0041f648-0041f687;0041f69f-0041f6ba
 */

void FUN_0041f648(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x41f661;
  iVar1 = FUN_00402f6c((int *)&PTR_TIconImage_vmt_000_00417488,'\x01',param_3);
  pcStack_1c = thunk_FUN_00403408;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *in_FS_OFFSET = uStack_20;
  uStack_18 = 0x41f6a7;
  FUN_0041cf10(iVar1);
  uStack_18 = 0x41f6af;
  FUN_0041cf14(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


