
/* ==== FUN_0050a8d0 @ 0050a8d0 ==== 
 * signature: undefined __thiscall FUN_0050a8d0(void * this, double param_1)
 * body: 0050a8d0-0050a904
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050a8d0(void *this,double param_1)

{
  *(double *)((int)this + 0x18) = param_1;
  if (param_1 - _DAT_0074bdd0 < *(double *)((int)this + 0x28)) {
    *(undefined4 *)((int)this + 0x20) = 1;
    return;
  }
  _DAT_0074bdd0 = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  return;
}


