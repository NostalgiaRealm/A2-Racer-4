
/* ==== FUN_004fbfa0 @ 004fbfa0 ==== 
 * signature: undefined4 * __thiscall FUN_004fbfa0(void * this, undefined4 param_1, undefined4 * param_2)
 * body: 004fbfa0-004fbfca
 */

undefined4 * __thiscall FUN_004fbfa0(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_004fb670(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_0057853c;
  *(undefined4 *)((int)this + 0xd4) = param_2[5];
  return this;
}


