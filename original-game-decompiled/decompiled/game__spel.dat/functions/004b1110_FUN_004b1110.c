
/* ==== FUN_004b1110 @ 004b1110 ==== 
 * signature: undefined __thiscall FUN_004b1110(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004b1110-004b114e
 */

void __thiscall FUN_004b1110(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x6c) = 1;
  *(undefined4 *)((int)this + 0x88) = param_1;
  *(undefined4 *)((int)this + 0x8c) = param_2;
  *(undefined4 *)((int)this + 0x90) = param_3;
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0x10);
  return;
}


