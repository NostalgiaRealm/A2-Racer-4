
/* ==== FUN_0050a640 @ 0050a640 ==== 
 * signature: undefined4 * __thiscall FUN_0050a640(void * this, byte param_1)
 * body: 0050a640-0050a65f
 */

undefined4 * __thiscall FUN_0050a640(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00578824;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


