
/* ==== FUN_00467e60 @ 00467e60 ==== 
 * signature: undefined __register FUN_00467e60(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00467e60-00467ea8
 */

void FUN_00467e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 0x48) + 8);
  iVar2 = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 0x48));
  }
  if (-1 < iVar2) {
    do {
      uVar3 = param_4;
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x48),iVar2);
      FUN_0042f720(iVar1,param_2,param_3,uVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}


