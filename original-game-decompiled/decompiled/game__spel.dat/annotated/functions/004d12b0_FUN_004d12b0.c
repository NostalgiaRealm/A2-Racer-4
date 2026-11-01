
/* ==== FUN_004d12b0 @ 004d12b0 ==== 
 * signature: undefined4 * __thiscall FUN_004d12b0(void * this, byte param_1)
 * body: 004d12b0-004d12cf
 */

undefined4 * __thiscall FUN_004d12b0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00579044;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


