
/* ==== FUN_0053bbc0 @ 0053bbc0 ==== 
 * signature: undefined __thiscall FUN_0053bbc0(void * this, short param_1, undefined4 param_2)
 * body: 0053bbc0-0053bbd3
 */

void __thiscall FUN_0053bbc0(void *this,short param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(short *)((int)this + 0x18) = param_1 - (short)this;
  return;
}


