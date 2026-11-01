
/* ==== FUN_004d92a0 @ 004d92a0 ==== 
 * signature: undefined __thiscall FUN_004d92a0(void * this, undefined4 param_1)
 * body: 004d92a0-004d92dd
 */

void __thiscall FUN_004d92a0(void *this,undefined4 param_1)

{
  void *unaff_ESI;
  
  if (*(int *)((int)this + 0xc) < *(int *)((int)this + 8) + 4) {
    do {
      FUN_004d8ff0(this,unaff_ESI);
    } while (*(int *)((int)this + 0xc) < *(int *)((int)this + 8) + 4);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8)) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
  return;
}


