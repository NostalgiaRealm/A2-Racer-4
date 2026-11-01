
/* ==== FUN_0049ee40 @ 0049ee40 ==== 
 * signature: undefined4 * __thiscall FUN_0049ee40(void * this, byte param_1)
 * body: 0049ee40-0049ee93
 */

undefined4 * __thiscall FUN_0049ee40(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    FUN_005586c5(this,0x38,*(int *)((int)this + -4),FUN_0049f4c0);
    if ((param_1 & 1) != 0) {
      FUN_0054b339((undefined4 *)((int)this + -4));
    }
    return (undefined4 *)((int)this + -4);
  }
  FUN_0049f4c0(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


