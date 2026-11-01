
/* ==== FUN_0047b960 @ 0047b960 ==== 
 * signature: undefined4 * __thiscall FUN_0047b960(void * this, byte param_1)
 * body: 0047b960-0047b9b3
 */

undefined4 * __thiscall FUN_0047b960(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    FUN_005586c5(this,0x18,*(int *)((int)this + -4),FUN_0047a130);
    if ((param_1 & 1) != 0) {
      FUN_0054b339((undefined4 *)((int)this + -4));
    }
    return (undefined4 *)((int)this + -4);
  }
  FUN_0047a130(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


