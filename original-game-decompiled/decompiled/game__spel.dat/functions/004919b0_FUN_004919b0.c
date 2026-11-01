
/* ==== FUN_004919b0 @ 004919b0 ==== 
 * signature: undefined __thiscall FUN_004919b0(void * this, int param_1)
 * body: 004919b0-004919df
 */

void __thiscall FUN_004919b0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_1 == 5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00491980(this,uVar1);
  *(undefined4 *)((int)this + 0x10) = DAT_006fba68;
  FUN_004917b0((int)this);
  return;
}


