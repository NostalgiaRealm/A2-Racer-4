
/* ==== FUN_004d9524 @ 004d9524 ==== 
 * signature: undefined __thiscall FUN_004d9524(void * this)
 * body: 004d9524-004d956f
 */

void __thiscall FUN_004d9524(void *this)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  void *in_stack_00000048;
  
  uStack00000008 = *(undefined4 *)((int)this + 0x10);
  uStack0000000c = *(undefined4 *)((int)this + 0x14);
  if (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 8) {
    do {
      FUN_004d8ff0(unaff_ESI,unaff_retaddr);
    } while (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 8);
  }
  puVar1 = (undefined4 *)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8));
  *puVar1 = uStack00000008;
  puVar1[1] = uStack0000000c;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 8;
  ExceptionList = in_stack_00000048;
  return;
}


