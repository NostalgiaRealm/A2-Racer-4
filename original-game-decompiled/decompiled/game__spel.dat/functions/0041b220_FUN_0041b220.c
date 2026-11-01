
/* ==== FUN_0041b220 @ 0041b220 ==== 
 * signature: undefined __fastcall FUN_0041b220(void * param_1)
 * body: 0041b220-0041b680
 */

void __fastcall FUN_0041b220(void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  iVar5 = DAT_00715258;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,'\0');
  local_4 = 0;
  FUN_004c3fa0((byte *)s_COPRADIO__Init_00594420);
  FUN_0041c660((void *)((int)param_1 + 0x10),8);
  FUN_0041c660((void *)((int)param_1 + 0x20),6);
  FUN_0041c660((void *)((int)param_1 + 0x30),0x32);
  FUN_0041c660((void *)((int)param_1 + 0x40),3);
  FUN_0041c660((void *)((int)param_1 + 0x50),6);
  FUN_0041c660((void *)((int)param_1 + 0x60),8);
  iVar7 = 0;
  do {
    puVar2 = FUN_0049df90(local_1c,(byte *)s_START_PURSUIT__d_00594430);
    local_4._0_1_ = 1;
    FUN_004093c0(local_2c,puVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
    FUN_004c3fa0((byte *)s_COPRADIO_Looking_for_sample__s_00594444);
    pcVar3 = local_28;
    if (local_28 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = FUN_00450900(pcVar3);
    iVar4 = FUN_0041c570((void *)((int)param_1 + 0x10),iVar4);
  } while (((char)iVar4 != '\0') && (iVar7 = iVar7 + 1, iVar7 < 8));
  iVar7 = 0;
  do {
    puVar2 = FUN_0049df90(local_1c,(byte *)s_CSTAY__d_00594464);
    local_4._0_1_ = 2;
    FUN_004093c0(local_2c,puVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
    FUN_004c3fa0((byte *)s_COPRADIO_Looking_for_sample__s_00594470);
    pcVar3 = local_28;
    if (local_28 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = FUN_00450900(pcVar3);
    iVar4 = FUN_0041c570((void *)((int)param_1 + 0x20),iVar4);
  } while (((char)iVar4 != '\0') && (iVar7 = iVar7 + 1, iVar7 < 6));
  iVar7 = 0;
  do {
    puVar2 = FUN_0049df90(local_1c,(byte *)s_BLOCK__d_00594490);
    local_4._0_1_ = 3;
    FUN_004093c0(local_2c,puVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
    FUN_004c3fa0((byte *)s_COPRADIO_Looking_for_sample__s_0059449c);
    pcVar3 = local_28;
    if (local_28 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = FUN_00450900(pcVar3);
    iVar4 = FUN_0041c570((void *)((int)param_1 + 0x40),iVar4);
  } while (((char)iVar4 != '\0') && (iVar7 = iVar7 + 1, iVar7 < 3));
  iVar7 = 0;
  do {
    puVar2 = FUN_0049df90(local_1c,(byte *)s_CBLOK__d_005944bc);
    local_4._0_1_ = 4;
    FUN_004093c0(local_2c,puVar2,0,0xffffffff);
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
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004c3fa0((byte *)s_COPRADIO_Looking_for_sample__s_005944c8);
    pcVar3 = local_28;
    if (local_28 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = FUN_00450900(pcVar3);
    iVar4 = FUN_0041c570((void *)((int)param_1 + 0x50),iVar4);
  } while (((char)iVar4 != '\0') && (iVar7 = iVar7 + 1, iVar7 < 6));
  iVar7 = 0;
  do {
    puVar2 = FUN_0049df90(local_1c,(byte *)s_MEGA__d_005944e8);
    local_4._0_1_ = 5;
    FUN_004093c0(local_2c,puVar2,0,0xffffffff);
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
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004c3fa0((byte *)s_COPRADIO_Looking_for_sample__s_005944f0);
    pcVar3 = local_28;
    if (local_28 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = FUN_00450900(pcVar3);
    iVar4 = FUN_0041c570((void *)((int)param_1 + 0x60),iVar4);
  } while (((char)iVar4 != '\0') && (iVar7 = iVar7 + 1, iVar7 < 8));
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      iVar4 = FUN_0041ae70(*(undefined4 *)
                            (DAT_00715f00 + 0xfc + *(int *)(DAT_00715254 + iVar7 * 4) * 0x994));
      FUN_004c3fa0((byte *)s_COPRADIO_found_trigger__d_which_i_00594510);
      if (iVar4 != -1) {
        FUN_004c3fa0((byte *)s_COPRADIO_Creating_sound_00594540);
        FUN_0041af00(param_1,iVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  FUN_0041bde0(param_1);
  FUN_0041aa60(param_1,0x30);
  iVar5 = FUN_004475f0();
  uVar6 = FUN_0049f9a0(&DAT_006fbb58,(uint *)&DAT_0059455c);
  FUN_0049ff90(&DAT_006fbb58,uVar6,iVar5);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


