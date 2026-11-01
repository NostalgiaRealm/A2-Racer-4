
/* ==== FUN_004d09f0 @ 004d09f0 ==== 
 * signature: undefined4 * __thiscall FUN_004d09f0(void * this, byte param_1)
 * body: 004d09f0-004d0a1c
 */

undefined4 * __thiscall FUN_004d09f0(void *this,byte param_1)

{
  FUN_004cfc40((int)this);
  FUN_004cfb70(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339((undefined4 *)((int)this + -0x5c));
  }
  return (undefined4 *)((int)this + -0x5c);
}


