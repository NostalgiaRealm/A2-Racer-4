
/* ==== FUN_004bbd40 @ 004bbd40 ==== 
 * signature: undefined4 __thiscall FUN_004bbd40(void * this, int param_1)
 * body: 004bbd40-004bbf1a
 */

undefined4 __thiscall FUN_004bbd40(void *this,int param_1)

{
  int iVar1;
  int local_5c [20];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f6e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c31f0(local_5c,100);
  local_4 = 0;
  *(int *)((int)this + 0x270) = param_1;
  if (DAT_005b37a0 < 9) {
    *(undefined4 *)((int)this + 0x278) = 4;
    *(undefined4 *)((int)this + 0x2b9) = 1;
    iVar1 = FUN_004bbc50(this,0xf2086b20,0x11cf259f,0xaa001aa3,0x5633b900);
    if (iVar1 != 0) {
      local_4 = 0xffffffff;
      FUN_004c33f0(local_5c);
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x278) = 1;
    iVar1 = FUN_004bbc50(this,0x84e63de0,0x11cf46aa,0x6f81,0x6e1520c0);
    if (iVar1 != 0) {
      FUN_004bb290(param_1);
      FUN_004c3fa0((byte *)s___s___d_Could_not_create_HAL_dev_005b2238);
      *(undefined4 *)((int)this + 0x278) = 3;
      iVar1 = FUN_004bbc50(this,0xa4665c60,0x11cf2673,0xaa001aa3,0x5633b900);
      if (iVar1 != 0) {
        FUN_004bb290(iVar1);
        FUN_004c3fa0((byte *)s___s___d_Could_not_create_RGB_dev_005b220c);
        local_4 = 0xffffffff;
        FUN_004c33f0(local_5c);
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  *(undefined4 *)((int)this + 0x274) = 1;
  FUN_004bc160(this);
  FUN_004bb7a0((int)this);
  FUN_004bc0f0();
  local_4 = 0xffffffff;
  FUN_004c33f0(local_5c);
  ExceptionList = local_c;
  return 1;
}


