
/* ==== FUN_0049dda0 @ 0049dda0 ==== 
 * signature: undefined1 * __thiscall FUN_0049dda0(void * this, undefined1 * param_1, int param_2)
 * body: 0049dda0-0049df19
 */

undefined1 * __thiscall FUN_0049dda0(void *this,undefined1 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ead4;
  local_c = ExceptionList;
  local_3c[0] = param_1._0_1_;
  ExceptionList = &local_c;
  FUN_004028f0(local_3c,'\0');
  local_4 = 0;
  if ((param_2 < 0) || (*(int *)((int)this + 0x3c) < param_2)) {
    *param_1 = local_3c[0];
    FUN_004028f0(param_1,'\0');
    FUN_004093c0(param_1,local_3c,0,0xffffffff);
    local_4 = 0xffffffff;
    FUN_004028f0(local_3c,'\x01');
  }
  else {
    uVar2 = *(uint *)((int)this + param_2 * 4 + 0x40);
    if (param_2 == 0) {
      puVar4 = FUN_00479520((void *)((int)this + 0x2c),local_1c,0,uVar2);
      local_4._0_1_ = 1;
      FUN_004093c0(local_3c,puVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_1c,'\x01');
    }
    else {
      uVar3 = *(uint *)((int)this + param_2 * 4 + 0x3c);
      puVar4 = FUN_00479520((void *)((int)this + 0x2c),local_2c,uVar3,uVar2 - uVar3);
      local_4._0_1_ = 2;
      FUN_004093c0(local_3c,puVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
    }
    *param_1 = local_3c[0];
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_004093c0(param_1,local_3c,0,0xffffffff);
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((LPVOID)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}


