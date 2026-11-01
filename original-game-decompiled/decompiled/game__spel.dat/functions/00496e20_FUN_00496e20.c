
/* ==== FUN_00496e20 @ 00496e20 ==== 
 * signature: undefined __thiscall FUN_00496e20(void * this, int param_1)
 * body: 00496e20-00496e9a
 */

void __thiscall FUN_00496e20(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_1 == 5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00496dd0(this,uVar1);
  FUN_00496ea0((int)this);
  FUN_00496b10((int)this);
  if (DAT_00712784 == 1) {
    if (((byte)DAT_005ab3c0 & 0x20) == 0) {
      (**(code **)(**(int **)((int)this + 0x18) + 0x20))(0);
      (**(code **)(**(int **)((int)this + 0x24) + 0x20))(0);
      (**(code **)(**(int **)((int)this + 0x20) + 0x20))(0);
      if (DAT_00712784 != 1) {
        return;
      }
    }
    if (((byte)DAT_005ab3c0 & 0x10) == 0) {
      (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(0);
    }
  }
  return;
}


