
/* ==== FUN_004cf6d0 @ 004cf6d0 ==== 
 * signature: undefined4 * __thiscall FUN_004cf6d0(void * this, byte param_1)
 * body: 004cf6d0-004cf708
 */

undefined4 * __thiscall FUN_004cf6d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_005777a0;
  FUN_004d38c0(*(void **)((int)this + 4),s_OnUnLoad_005b6ee0);
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


