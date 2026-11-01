
/* ==== FUN_004d4eb0 @ 004d4eb0 ==== 
 * signature: undefined4 __stdcall FUN_004d4eb0(void)
 * body: 004d4eb0-004d4eb2
 */

undefined4 FUN_004d4eb0(void)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  piVar2 = *(int **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0054c6db();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar4 = FUN_0054eb4d();
  if ((cVar4 == '\0') &&
     (iVar5 = *(int *)(*piVar2 + 4), (*(byte *)(iVar5 + 0xc + (int)piVar2) & 2) != 0)) {
    bVar3 = false;
    if (((*(byte *)((int)piVar2 + iVar5 + 4) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)((int)piVar2 + iVar5 + 0x28) + 0x2c))(), iVar5 == -1)) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_0054c6db();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


