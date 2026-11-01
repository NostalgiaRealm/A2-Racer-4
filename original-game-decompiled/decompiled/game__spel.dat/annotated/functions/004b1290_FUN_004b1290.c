
/* ==== FUN_004b1290 @ 004b1290 ==== 
 * signature: undefined __thiscall FUN_004b1290(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004b1290-004b12bd
 */

void __thiscall
FUN_004b1290(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 200) = param_1;
  *(undefined4 *)((int)this + 0xcc) = param_2;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0xd0) = param_3;
  *(undefined4 *)((int)this + 0xd4) = param_4;
  return;
}


