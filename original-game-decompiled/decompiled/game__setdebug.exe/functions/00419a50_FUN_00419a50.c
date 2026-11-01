
/* ==== FUN_00419a50 @ 00419a50 ==== 
 * signature: undefined __register FUN_00419a50(int param_1)
 * body: 00419a50-00419a76
 */

void FUN_00419a50(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_0041a6f0(*(int **)(param_1 + 0x20));
  iVar1 = FUN_00402ce4((int *)&PTR_TMetafileImage_vmt_000_00415580,'\x01',extraout_ECX);
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0041a6ec(iVar1);
  return;
}


