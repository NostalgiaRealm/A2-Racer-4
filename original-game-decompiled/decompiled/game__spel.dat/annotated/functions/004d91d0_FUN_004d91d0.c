
/* ==== FUN_004d91d0 @ 004d91d0 ==== 
 * signature: undefined __thiscall FUN_004d91d0(void * this, int param_1)
 * body: 004d91d0-004d91ff
 */

void __thiscall FUN_004d91d0(void *this,int param_1)

{
  void *unaff_EDI;
  
  if (*(int *)((int)this + 0xc) < param_1 + *(int *)((int)this + 8)) {
    do {
      FUN_004d8ff0(this,unaff_EDI);
    } while (*(int *)((int)this + 0xc) < param_1 + *(int *)((int)this + 8));
  }
  return;
}


