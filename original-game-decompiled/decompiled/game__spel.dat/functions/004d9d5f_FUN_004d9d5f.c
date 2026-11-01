
/* ==== FUN_004d9d5f @ 004d9d5f ==== 
 * signature: undefined __stdcall FUN_004d9d5f(void)
 * body: 004d9d5f-004d9d99
 */

void FUN_004d9d5f(void)

{
  void *unaff_ESI;
  void *unaff_retaddr;
  
  if (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4) {
    do {
      FUN_004d8ff0(unaff_ESI,unaff_retaddr);
    } while (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4);
  }
  *(undefined4 *)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8)) = 0;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 4;
  return;
}


