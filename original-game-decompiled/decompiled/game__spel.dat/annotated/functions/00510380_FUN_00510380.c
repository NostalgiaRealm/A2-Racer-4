
/* ==== FUN_00510380 @ 00510380 ==== 
 * signature: undefined4 * __thiscall FUN_00510380(void * this, byte param_1)
 * body: 00510380-0051039f
 */

undefined4 * __thiscall FUN_00510380(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00578ab4;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


