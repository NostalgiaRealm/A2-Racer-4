
/* ==== FUN_00472b60 @ 00472b60 ==== 
 * signature: undefined4 * __thiscall FUN_00472b60(void * this, undefined4 * param_1, undefined4 param_2)
 * body: 00472b60-00472b7f
 */

undefined4 * __thiscall FUN_00472b60(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_00472740(this,param_1);
  *(undefined ***)this = &PTR_FUN_00576a28;
  *(undefined4 *)((int)this + 0x18) = param_2;
  return this;
}


