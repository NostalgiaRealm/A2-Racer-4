
/* ==== FUN_004e4d60 @ 004e4d60 ==== 
 * signature: undefined __thiscall FUN_004e4d60(void * this, void * param_1)
 * body: 004e4d60-004e5012
 */

void __thiscall FUN_004e4d60(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  char *pcVar7;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [20];
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571ab9;
  pvStack_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar7 = s_BINOP_005b7568;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_00402940(param_1,(undefined4 *)s_BINOP_005b7568,~uVar6 - 1);
  iVar2 = (**(code **)(**(int **)((int)this + 8) + 4))(local_1c);
  auStack_b0[0] = (undefined1)((uint)unaff_EBX >> 0x18);
  pcStack_8 = (code *)0x0;
  FUN_004028f0(auStack_b0,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = (char *)&DAT_005b36c4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_b0,(undefined4 *)&DAT_005b36c4,~uVar6 - 1);
  pcStack_8._0_1_ = 1;
  iVar3 = FUN_004e48f0(auStack_a0,*(int *)((int)this + 0x10));
  iVar4 = (**(code **)(**(int **)((int)this + 0x14) + 4))(auStack_38);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  puVar5 = (undefined1 *)(**(code **)(**(int **)((int)this + 0xc) + 4))(auStack_5c);
  pcStack_8._0_1_ = 4;
  puVar5 = FUN_004796b0(auStack_80,puVar5,&DAT_005b74a0);
  pcStack_8._0_1_ = 5;
  puVar5 = FUN_0047c9a0(auStack_50,puVar5,iVar4);
  pcStack_8._0_1_ = 6;
  puVar5 = FUN_0047c9a0(auStack_90,puVar5,iVar3);
  pcStack_8._0_1_ = 7;
  puVar5 = FUN_0047c9a0(auStack_70,puVar5,(int)auStack_b0);
  pcStack_8._0_1_ = 8;
  puVar5 = FUN_0047c9a0(auStack_30,puVar5,iVar2);
  pcStack_8._0_1_ = 9;
  FUN_004093c0(param_1,puVar5,0,0xffffffff);
  pcStack_8._0_1_ = 8;
  FUN_004028f0(auStack_30,'\x01');
  pcStack_8._0_1_ = 7;
  FUN_004028f0(auStack_70,'\x01');
  pcStack_8._0_1_ = 6;
  FUN_004028f0(auStack_90,'\x01');
  pcStack_8._0_1_ = 5;
  FUN_004028f0(auStack_50,'\x01');
  pcStack_8._0_1_ = 4;
  FUN_004028f0(auStack_80,'\x01');
  pcStack_8._0_1_ = 3;
  FUN_004028f0(auStack_60,'\x01');
  pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,2);
  FUN_004028f0(auStack_40,'\x01');
  if (iStack_9c != 0) {
    cVar1 = *(char *)(iStack_9c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_9c + -1));
    }
    else {
      *(char *)(iStack_9c + -1) = cVar1 + -1;
    }
  }
  iStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  if (iStack_ac != 0) {
    cVar1 = *(char *)(iStack_ac + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_ac + -1));
    }
    else {
      *(char *)(iStack_ac + -1) = cVar1 + -1;
    }
  }
  iStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
      ExceptionList = pvStack_10;
      return;
    }
    FUN_0054b339((char *)(local_1c[0] + -1));
  }
  ExceptionList = pvStack_10;
  return;
}


