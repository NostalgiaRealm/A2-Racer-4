
/* ==== FUN_004d9ddd @ 004d9ddd ==== 
 * signature: undefined __stdcall FUN_004d9ddd(void)
 * body: 004d9ddd-004d9e24
 */

void FUN_004d9ddd(void)

{
  uint *puVar1;
  void *unaff_ESI;
  void *unaff_EDI;
  
  puVar1 = FUN_005686b8((uint *)&DAT_00712694);
  if (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4) {
    do {
      FUN_004d8ff0(unaff_ESI,unaff_EDI);
    } while (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4);
  }
  *(uint **)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8)) = puVar1;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 4;
  return;
}


