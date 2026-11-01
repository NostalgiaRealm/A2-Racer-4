
/* ==== FUN_004f59f0 @ 004f59f0 ==== 
 * signature: undefined __thiscall FUN_004f59f0(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004f59f0-004f5a0c
 */

void __thiscall FUN_004f59f0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x1f0) = param_3;
  *(undefined4 *)((int)this + param_1 * 4 + 0x1d8) = param_2;
  return;
}


