
/* ==== FUN_0041c1c8 @ 0041c1c8 ==== 
 * signature: undefined __register FUN_0041c1c8(int param_1)
 * body: 0041c1c8-0041c1ee
 */

void FUN_0041c1c8(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_0041cf14(*(int **)(param_1 + 0x20));
  iVar1 = FUN_00402f6c((int *)&PTR_TMetafileImage_vmt_000_004171d4,'\x01',extraout_ECX);
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0041cf10(iVar1);
  return;
}


