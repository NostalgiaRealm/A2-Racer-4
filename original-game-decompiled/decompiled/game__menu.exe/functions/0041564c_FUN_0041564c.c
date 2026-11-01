
/* ==== FUN_0041564c @ 0041564c ==== 
 * signature: undefined __register FUN_0041564c(int param_1, int param_2, undefined4 param_3)
 * body: 0041564c-0041569c
 */

void FUN_0041564c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    iVar2 = FUN_0041030c(*(int *)(param_1 + 0x14),param_2);
    if (iVar2 < 0) {
      FUN_00410104(*(int **)(param_1 + 0x14),param_2);
      FUN_0041564c(param_2,param_1,extraout_ECX);
    }
  }
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x100;
  return;
}


