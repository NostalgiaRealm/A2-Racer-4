
/* ==== FUN_004d9e25 @ 004d9e25 ==== 
 * signature: undefined __stdcall FUN_004d9e25(void)
 * body: 004d9e25-004d9e5f
 */

void FUN_004d9e25(void)

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


