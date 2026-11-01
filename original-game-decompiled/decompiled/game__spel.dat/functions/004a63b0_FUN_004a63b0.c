
/* ==== FUN_004a63b0 @ 004a63b0 ==== 
 * signature: undefined4 * __thiscall FUN_004a63b0(void * this, byte param_1)
 * body: 004a63b0-004a63cf
 */

undefined4 * __thiscall FUN_004a63b0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_005773bc;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


