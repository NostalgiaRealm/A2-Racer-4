
/* ==== FUN_004dd280 @ 004dd280 ==== 
 * signature: undefined4 * __thiscall FUN_004dd280(void * this, byte param_1)
 * body: 004dd280-004dd29f
 */

undefined4 * __thiscall FUN_004dd280(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00577ad0;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


