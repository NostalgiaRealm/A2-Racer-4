
/* ==== FUN_004e7e8e @ 004e7e8e ==== 
 * signature: undefined __stdcall FUN_004e7e8e(void)
 * body: 004e7e8e-004e7f29
 */

void FUN_004e7e8e(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0054c6db();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar2 = FUN_0054eb4d();
  if ((cVar2 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)((int)unaff_ESI + iVar3 + 0xc) & 2) != 0)) {
    bVar1 = false;
    if (((*(byte *)((int)unaff_ESI + iVar3 + 4) & 6) == 0) &&
       (iVar3 = (**(code **)(**(int **)((int)unaff_ESI + iVar3 + 0x28) + 0x2c))(), iVar3 == -1)) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0054c6db();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


