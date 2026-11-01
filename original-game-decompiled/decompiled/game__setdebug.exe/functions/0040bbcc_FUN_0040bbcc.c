
/* ==== FUN_0040bbcc @ 0040bbcc ==== 
 * signature: bool __register FUN_0040bbcc(int param_1)
 * body: 0040bbcc-0040bc04
 */

bool FUN_0040bbcc(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = FUN_00404afc(*(int *)(param_1 + 0x28));
    for (iVar4 = 0;
        (iVar4 < iVar3 &&
        ((iVar1 = *(int *)(*(int *)(param_1 + 0x28) + iVar4 * 8), iVar1 == 0 ||
         (iVar1 == *(int *)(param_1 + 0x2c))))); iVar4 = iVar4 + 1) {
    }
    bVar2 = iVar3 <= iVar4;
  }
  return bVar2;
}


