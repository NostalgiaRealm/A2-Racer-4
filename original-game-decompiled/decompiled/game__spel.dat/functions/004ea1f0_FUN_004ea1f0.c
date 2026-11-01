
/* ==== FUN_004ea1f0 @ 004ea1f0 ==== 
 * signature: undefined __thiscall FUN_004ea1f0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004ea1f0-004ea230
 */

void __thiscall FUN_004ea1f0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined4 *)((int)this + 0x68) = param_1;
  FUN_004eb890(this,(int)this + 0x14);
  FUN_004eb890(this,(int)this + 0x28);
  FUN_004eb890(this,(int)this + 0x3c);
  FUN_004eb220(this);
  *(undefined1 *)((int)this + 0x60) = 1;
  return;
}


