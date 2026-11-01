
/* ==== FUN_004e80b7 @ 004e80b7 ==== 
 * signature: int * __stdcall FUN_004e80b7(void)
 * body: 004e80b7-004e80b9
 */

int * FUN_004e80b7(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0054c6db();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar3 = FUN_0054eb4d();
  if ((cVar3 == '\0') &&
     (iVar4 = *(int *)(*piVar1 + 4), (*(byte *)((int)piVar1 + iVar4 + 0xc) & 2) != 0)) {
    bVar2 = false;
    if (((*(byte *)((int)piVar1 + iVar4 + 4) & 6) == 0) &&
       (iVar4 = (**(code **)(**(int **)((int)piVar1 + iVar4 + 0x28) + 0x2c))(), iVar4 == -1)) {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_0054c6db();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar1;
}


