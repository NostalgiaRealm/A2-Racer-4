
/* ==== FUN_00485d98 @ 00485d98 ==== 
 * signature: undefined4 __register FUN_00485d98(int param_1, int param_2)
 * body: 00485d98-00485de7
 */

undefined4 FUN_00485d98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_00485e00(param_1);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00485de8(param_1,iVar4);
      if ((iVar2 == *(int *)(param_2 + 0x24)) && (param_1 == *(int *)(param_2 + 0x90))) {
        uVar3 = FUN_00485de8(param_1,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}


