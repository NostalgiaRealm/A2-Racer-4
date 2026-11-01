
/* ==== FUN_004961f0 @ 004961f0 ==== 
 * signature: undefined __thiscall FUN_004961f0(void * this, undefined4 param_1)
 * body: 004961f0-004962af
 */

void __thiscall FUN_004961f0(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 8:
    FUN_004962e0(this,0);
    FUN_00496110(this,*(int **)((int)this + 0x20),0.9);
    return;
  case 9:
    FUN_004962e0(this,0);
    FUN_00496110(this,*(int **)((int)this + 0x1c),0.9);
    return;
  case 10:
    FUN_004962e0(this,1);
    FUN_00496110(this,*(int **)((int)this + 0x18),0.9);
    return;
  case 0xb:
    FUN_004962e0(this,0);
    FUN_00496110(this,*(int **)((int)this + 0x24),1.0);
    return;
  default:
    FUN_004962e0(this,0);
    return;
  }
}


