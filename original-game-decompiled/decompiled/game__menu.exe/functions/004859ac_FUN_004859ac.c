
/* ==== FUN_004859ac @ 004859ac ==== 
 * signature: undefined __register FUN_004859ac(int param_1)
 * body: 004859ac-004859e8
 */

void FUN_004859ac(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00485e00(param_1);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      iVar3 = FUN_00485de8(param_1,iVar4);
      bVar1 = *(byte *)(iVar3 + 0x1fa);
      iVar3 = FUN_00485de8(param_1,iVar4);
      TTabSheet_set_Highlighted(iVar3,bVar1);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


