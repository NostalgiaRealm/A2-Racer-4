
/* ==== FUN_00413a98 @ 00413a98 ==== 
 * signature: undefined __register FUN_00413a98(int param_1, int param_2, undefined4 param_3)
 * body: 00413a98-00413ae8
 */

void FUN_00413a98(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    iVar2 = FUN_0040f080(*(int *)(param_1 + 0x14),param_2);
    if (iVar2 < 0) {
      FUN_0040eec8(*(int **)(param_1 + 0x14),param_2);
      FUN_00413a98(param_2,param_1,extraout_ECX);
    }
  }
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x100;
  return;
}


