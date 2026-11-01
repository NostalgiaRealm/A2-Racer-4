
/* ==== FUN_004d9d9a @ 004d9d9a ==== 
 * signature: undefined __stdcall FUN_004d9d9a(void)
 * body: 004d9d9a-004d9ddc
 */

void FUN_004d9d9a(void)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  void *unaff_retaddr;
  
  if (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 8) {
    do {
      FUN_004d8ff0(unaff_ESI,unaff_retaddr);
    } while (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 8);
  }
  puVar1 = (undefined4 *)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 8;
  return;
}


