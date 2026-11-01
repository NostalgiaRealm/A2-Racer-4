
/* ==== FUN_004e62b0 @ 004e62b0 ==== 
 * signature: undefined __thiscall FUN_004e62b0(void * this, char * param_1)
 * body: 004e62b0-004e6a12
 */

void __thiscall FUN_004e62b0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  int iStack00000010;
  void *in_stack_00000024;
  undefined4 uStack0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  void *in_stack_00000038;
  char *in_stack_ffffff74;
  char *in_stack_ffffff78;
  undefined1 auStack_54 [4];
  int local_50 [3];
  undefined4 uStack_44;
  undefined1 local_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [4];
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [4];
  int local_1c [3];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571cc1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00424980(&stack0xffffff7c,&stack0xffffff75);
  local_4 = 0;
  FUN_00424980(&stack0xffffff90,&stack0xffffff76);
  local_4._0_1_ = 1;
  FUN_00424980(&stack0xffffffa0,&stack0xffffff77);
  local_4._0_1_ = 2;
  FUN_00424980(local_50,&stack0xffffff78);
  local_4._0_1_ = 3;
  FUN_00424980(local_40,&stack0xffffff79);
  local_4._0_1_ = 4;
  FUN_00424980(local_30,&stack0xffffff7a);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00424980(local_1c,&stack0xffffff7b);
  local_4 = 6;
  if (((2000 < (int)param_1) && ((int)param_1 < 0x7d6)) ||
     ((999 < (int)param_1 && ((int)param_1 < 0x417)))) {
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + 1;
  }
  if (*(char *)((int)this + 0x78) == '\0') goto LAB_004e6609;
  uVar3 = FUN_00483e70((void *)((int)this + 0x10),&DAT_00712694);
  if (uVar3 != 0) {
    pcVar7 = *(char **)((int)this + 0x14);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    FUN_004d4cd0(&DAT_0074d768,pcVar7);
    FUN_004d43a0(&DAT_0074d768,10);
    FUN_004d77a0(&DAT_0074d768);
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80(this,0,*(uint *)((int)this + 8),&DAT_00712694,~uVar3 - 1);
  if (uVar3 != 0) {
    pcVar7 = *(char **)((int)this + 4);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    FUN_004d4cd0(&DAT_0074d768,pcVar7);
    piVar4 = FUN_004d4cd0(&DAT_0074d768,&DAT_005b725c);
    piVar4 = FUN_004d4130(piVar4,in_stack_ffffff74);
    FUN_004d4cd0(piVar4,in_stack_ffffff78);
  }
  if (((int)param_1 < 1000) || (0x416 < (int)param_1)) {
    if (((int)param_1 < 0x7d1) || (0x7d5 < (int)param_1)) {
      pcVar7 = s_Warning_W_005b75e0;
    }
    else {
      pcVar7 = s_Fatal_Error_F_005b75ec;
    }
  }
  else {
    pcVar7 = s_Error_C_005b75fc;
  }
  FUN_004d4cd0(&DAT_0074d768,pcVar7);
  pcVar7 = &DAT_005b709c;
  piVar4 = FUN_004d4130(&DAT_0074d768,param_1);
  FUN_004d4cd0(piVar4,pcVar7);
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80((void *)((int)this + 0x54),0,*(uint *)((int)this + 0x5c),&DAT_00712694,
                       ~uVar3 - 1);
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_00712694;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = FUN_0040fc80((void *)((int)this + 0x24),0,*(uint *)((int)this + 0x2c),&DAT_00712694,
                         ~uVar3 - 1);
    if (uVar3 != 0) {
      pcVar7 = *(char **)((int)this + 0x28);
      goto joined_r0x004e650b;
    }
  }
  else {
    pcVar7 = *(char **)((int)this + 0x58);
joined_r0x004e650b:
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    FUN_004d4cd0(&DAT_0074d768,pcVar7);
    FUN_004d4cd0(&DAT_0074d768,&DAT_005b709c);
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80((void *)((int)this + 0x34),0,*(uint *)((int)this + 0x3c),&DAT_00712694,
                       ~uVar3 - 1);
  if (uVar3 != 0) {
    pcVar7 = *(char **)((int)this + 0x38);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    FUN_004d4cd0(&DAT_0074d768,pcVar7);
    FUN_004d4cd0(&DAT_0074d768,&DAT_005b709c);
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80((void *)((int)this + 0x44),0,*(uint *)((int)this + 0x4c),&DAT_00712694,
                       ~uVar3 - 1);
  if (uVar3 != 0) {
    pcVar7 = *(char **)((int)this + 0x48);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    FUN_004d4cd0(&DAT_0074d768,pcVar7);
    FUN_004d4cd0(&DAT_0074d768,&DAT_005b709c);
  }
  pcVar7 = *(char **)(in_stack_00000030 + 4);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "";
  }
  FUN_004d4cd0(&DAT_0074d768,pcVar7);
  FUN_004d43a0(&DAT_0074d768,10);
  FUN_004d77a0(&DAT_0074d768);
LAB_004e6609:
  iStack00000010 = in_stack_00000034;
  FUN_004093c0(&stack0x00000014,in_stack_00000038,0,0xffffffff);
  FUN_004093c0(local_30,(void *)((int)this + 0x24),0,0xffffffff);
  FUN_004093c0(auStack_54,this,0,0xffffffff);
  FUN_004093c0(local_20,(void *)((int)this + 0x34),0,0xffffffff);
  FUN_004093c0(local_40,(void *)((int)this + 0x10),0,0xffffffff);
  uStack_44 = *(undefined4 *)((int)this + 0x20);
  FUN_004093c0(&stack0x00000000,(void *)((int)this + 0x44),0,0xffffffff);
  FUN_004093c0(auStack_10,(void *)((int)this + 0x54),0,0xffffffff);
  FUN_004e7220((void *)((int)this + 100),*(undefined1 **)((int)this + 0x6c),1,auStack_54);
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80((void *)((int)this + 0x10),0,*(uint *)((int)this + 0x18),&DAT_00712694,
                       ~uVar3 - 1);
  if (uVar3 != 0) {
    FUN_004d6730();
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80(this,0,*(uint *)((int)this + 8),&DAT_00712694,~uVar3 - 1);
  if (uVar3 != 0) {
    FUN_004d6730();
  }
  FUN_004d6730();
  FUN_004d6730();
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80((void *)((int)this + 0x54),0,*(uint *)((int)this + 0x5c),&DAT_00712694,
                       ~uVar3 - 1);
  if (uVar3 != 0) {
    FUN_004d6730();
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040fc80((void *)((int)this + 0x24),0,*(uint *)((int)this + 0x2c),&DAT_00712694,
                       ~uVar3 - 1);
  if (uVar3 != 0) {
    FUN_004d6730();
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)((int)this + 0x4c);
  uVar5 = ~uVar3 - 1;
  uVar3 = uVar2;
  if (uVar5 <= uVar2) {
    uVar3 = uVar5;
  }
  bVar10 = false;
  iVar6 = 0;
  bVar11 = true;
  pbVar8 = *(byte **)((int)this + 0x48);
  pbVar9 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar10 = *pbVar8 < *pbVar9;
    bVar11 = *pbVar8 == *pbVar9;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  } while (bVar11);
  if (!bVar11) {
    iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
  }
  if (((iVar6 != 0) || (uVar2 < uVar5)) || (uVar2 != uVar5)) {
    FUN_004d6730();
  }
  FUN_004d6730();
  if ((100 < *(int *)((int)this + 0x74)) &&
     ((in_stack_00000034 < 0x7d1 || (0x7d5 < in_stack_00000034)))) {
    FUN_004e6c70(this,0x7d1);
  }
  uStack0000002c = 0xc;
  FUN_004028f0(&stack0x00000014,'\x01');
  uStack0000002c = CONCAT31(uStack0000002c._1_3_,0xb);
  FUN_004028f0(&stack0x00000000,'\x01');
  if (pvStack_c != (void *)0x0) {
    cVar1 = *(char *)((int)pvStack_c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)pvStack_c + -1));
    }
    else {
      *(char *)((int)pvStack_c + -1) = cVar1 + -1;
    }
  }
  pvStack_c = (void *)0x0;
  pcStack_8 = (code *)0x0;
  local_4 = 0;
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_1c[0] + -1));
    }
    else {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
    }
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  if (iStack_2c != 0) {
    cVar1 = *(char *)(iStack_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_2c + -1));
    }
    else {
      *(char *)(iStack_2c + -1) = cVar1 + -1;
    }
  }
  iStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (iStack_3c != 0) {
    cVar1 = *(char *)(iStack_3c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_3c + -1));
    }
    else {
      *(char *)(iStack_3c + -1) = cVar1 + -1;
    }
  }
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (local_50[0] != 0) {
    cVar1 = *(char *)(local_50[0] + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_50[0] + -1) = cVar1 + -1;
      ExceptionList = in_stack_00000024;
      return;
    }
    FUN_0054b339((LPVOID)(local_50[0] + -1));
  }
  ExceptionList = in_stack_00000024;
  return;
}


