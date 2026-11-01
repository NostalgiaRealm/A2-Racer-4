
/* ==== FUN_004e0d60 @ 004e0d60 ==== 
 * signature: undefined __thiscall FUN_004e0d60(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004e0d60-004e0d7f
 */

void __thiscall FUN_004e0d60(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_00576a88;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}


