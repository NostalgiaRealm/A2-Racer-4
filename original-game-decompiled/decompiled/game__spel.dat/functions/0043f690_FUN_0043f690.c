
/* ==== FUN_0043f690 @ 0043f690 ==== 
 * signature: undefined __stdcall FUN_0043f690(void)
 * body: 0043f690-0043f899
 */

void FUN_0043f690(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,'\0');
  local_4 = 0;
  if (DAT_006fb964 == 0) {
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
    ExceptionList = local_c;
    return;
  }
  if (-1 < DAT_006fbaa4 + -1) {
    iVar2 = FUN_0043f640(DAT_006fbaa4 + -1);
    if (iVar2 == -1) {
      FUN_004c5930(1,0,400,&DAT_0059c084);
    }
    else {
      puVar3 = FUN_0049df90(local_1c,(byte *)s_Racer__d_0059c088);
      local_4._0_1_ = 1;
      iVar2 = FUN_00424660(&DAT_005d3458,(int)puVar3);
      FUN_004093c0(local_2c,(void *)(iVar2 + 0x20),0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_1c,'\x01');
      FUN_004c5930(1,0,400,(byte *)&PTR_DAT_0059c094);
    }
  }
  if (DAT_006fbaa4 + 1 < DAT_005d2ab0 + 1) {
    iVar2 = FUN_0043f640(DAT_006fbaa4 + 1);
    if (iVar2 == -1) {
      FUN_004c5930(1,0,0x1a4,&DAT_0059c098);
    }
    else {
      puVar3 = FUN_0049df90(local_1c,(byte *)s_Racer__d_0059c09c);
      local_4._0_1_ = 2;
      iVar2 = FUN_00424660(&DAT_005d3458,(int)puVar3);
      FUN_004093c0(local_2c,(void *)(iVar2 + 0x20),0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      FUN_004c5930(1,0,0x1a4,(byte *)&PTR_DAT_0059c0a8);
    }
  }
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((LPVOID)(local_28 + -1));
  }
  ExceptionList = local_c;
  return;
}


