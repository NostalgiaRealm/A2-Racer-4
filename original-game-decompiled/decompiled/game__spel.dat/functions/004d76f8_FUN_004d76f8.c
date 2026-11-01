
/* ==== FUN_004d76f8 @ 004d76f8 ==== 
 * signature: undefined __stdcall FUN_004d76f8(void)
 * body: 004d76f8-004d7794
 */

void FUN_004d76f8(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (unaff_EDI != 0) {
    FUN_0054c6db();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar2 = FUN_0054eb4d();
  if ((cVar2 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)(iVar3 + 0xc + (int)unaff_ESI) & 2) != 0)) {
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


