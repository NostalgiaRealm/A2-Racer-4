
/* ==== FUN_004d9230 @ 004d9230 ==== 
 * signature: undefined4 * __thiscall FUN_004d9230(void * this, byte param_1)
 * body: 004d9230-004d925b
 */

undefined4 * __thiscall FUN_004d9230(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_005778dc;
  FUN_00559d4e(*(LPVOID *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


