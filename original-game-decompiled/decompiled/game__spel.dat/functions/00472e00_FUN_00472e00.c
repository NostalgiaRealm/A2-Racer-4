
/* ==== FUN_00472e00 @ 00472e00 ==== 
 * signature: undefined4 * __thiscall FUN_00472e00(void * this, undefined4 * param_1, undefined4 param_2)
 * body: 00472e00-00472e1f
 */

undefined4 * __thiscall FUN_00472e00(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_00472740(this,param_1);
  *(undefined ***)this = &PTR_FUN_00576a34;
  *(undefined4 *)((int)this + 0x18) = param_2;
  return this;
}


