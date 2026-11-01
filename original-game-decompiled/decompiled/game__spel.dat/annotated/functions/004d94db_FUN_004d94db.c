
/* ==== FUN_004d94db @ 004d94db ==== 
 * signature: undefined __thiscall FUN_004d94db(void * this)
 * body: 004d94db-004d9523
 */

void __thiscall FUN_004d94db(void *this)

{
  undefined4 uVar1;
  void *unaff_ESI;
  void *unaff_retaddr;
  void *in_stack_00000048;
  
  uVar1 = *(undefined4 *)((int)this + 0x10);
  if (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4) {
    do {
      FUN_004d8ff0(unaff_ESI,unaff_retaddr);
    } while (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4);
  }
  *(undefined4 *)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8)) = uVar1;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 4;
  ExceptionList = in_stack_00000048;
  return;
}


