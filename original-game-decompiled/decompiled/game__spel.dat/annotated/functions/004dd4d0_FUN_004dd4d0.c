
/* ==== FUN_004dd4d0 @ 004dd4d0 ==== 
 * signature: undefined4 * __thiscall FUN_004dd4d0(void * this, byte param_1)
 * body: 004dd4d0-004dd4ef
 */

undefined4 * __thiscall FUN_004dd4d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00577b5c;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


