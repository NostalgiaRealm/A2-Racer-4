
/* ==== FUN_004e5a10 @ 004e5a10 ==== 
 * signature: undefined4 * __thiscall FUN_004e5a10(void * this, byte param_1)
 * body: 004e5a10-004e5a2f
 */

undefined4 * __thiscall FUN_004e5a10(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00578178;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


