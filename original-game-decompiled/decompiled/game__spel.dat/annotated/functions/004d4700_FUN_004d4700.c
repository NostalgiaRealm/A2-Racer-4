
/* ==== FUN_004d4700 @ 004d4700 ==== 
 * signature: undefined __fastcall FUN_004d4700(int param_1)
 * body: 004d4700-004d4762
 */

void __fastcall FUN_004d4700(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_0054eb4d();
  if (cVar3 == '\0') {
    piVar1 = *(int **)(param_1 + 4);
    iVar4 = *(int *)(*piVar1 + 4);
    if ((*(byte *)(iVar4 + 0xc + (int)piVar1) & 2) != 0) {
      bVar2 = false;
      if (((*(byte *)((int)piVar1 + iVar4 + 4) & 6) == 0) &&
         (iVar4 = (**(code **)(**(int **)((int)piVar1 + iVar4 + 0x28) + 0x2c))(), iVar4 == -1)) {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_0054c6db();
      }
    }
  }
  return;
}


