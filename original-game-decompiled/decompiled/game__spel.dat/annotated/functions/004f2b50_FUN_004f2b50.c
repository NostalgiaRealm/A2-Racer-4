
/* ==== FUN_004f2b50 @ 004f2b50 ==== 
 * signature: undefined4 * __thiscall FUN_004f2b50(void * this, undefined4 param_1)
 * body: 004f2b50-004f2b76
 */

undefined4 * __thiscall FUN_004f2b50(void *this,undefined4 param_1)

{
  FUN_004f2a30(this,param_1);
  *(undefined ***)this = &PTR_FUN_005782e4;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 4) = 1;
  return this;
}


