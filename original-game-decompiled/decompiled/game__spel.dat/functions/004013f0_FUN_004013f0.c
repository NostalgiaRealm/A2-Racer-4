
/* ==== FUN_004013f0 @ 004013f0 ==== 
 * signature: undefined __thiscall FUN_004013f0(void * this, int param_1)
 * body: 004013f0-0040151c;00401520-00401627;0040162b-00401732;00401736-0040183d;00401841-00401948;0040194c-00401a59;00401a5d-00401b6a;00401b6e-00401c7b;00401c7f-00401de6;00401dea-00401f51;00401f55-004020ae;004020b2-00402130;00402134-0040229b;0040229f-0040240d;00402411-00402552;00402556-00402708;0040270c-00402726
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040151d-0040151f 00401628-0040162a 00401733-00401735 0040183e-00401840 00401949-0040194b 00401a5a-00401a5c 00401b6b-00401b6d 00401c7c-00401c7e 00401de7-00401de9 00401f52-00401f54 004020af-004020b1 00402131-00402133 0040229c-0040229e 0040240e-00402410 00402553-00402555 00402709-0040270b
 */

void __thiscall FUN_004013f0(void *this,int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  float *pfVar9;
  char *pcVar10;
  undefined1 local_158 [4];
  char *local_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [4];
  char *local_144;
  uint uStack_140;
  undefined4 uStack_13c;
  int local_138;
  float local_134;
  undefined1 auStack_130 [4];
  char *pcStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [4];
  char *pcStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  byte local_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005694fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_FrontVisibilityRange_0058dd18;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_FrontVisibilityRange_0058dd18,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 0;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 1;
  uVar3 = FUN_00405710((int)local_148,(int)local_158,&local_138);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058df30);
    }
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    *(int *)((int)this + 0x10) = local_138;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_RearVisibilityRange_0058dd30;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_RearVisibilityRange_0058dd30,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 2;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 3;
  uVar3 = FUN_00405710((int)local_148,(int)local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058df9c);
    }
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    *(int *)((int)this + 0x14) = local_138;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_MegaphoneFrequency_0058de60;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_MegaphoneFrequency_0058de60,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 4;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 5;
  uVar3 = FUN_00405710((int)local_148,(int)local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e008);
    }
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    *(int *)((int)this + 0x18) = local_138;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_OvertakeBashFrequency_0058de74;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_OvertakeBashFrequency_0058de74,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 6;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 7;
  uVar3 = FUN_00405710((int)local_148,(int)local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e074);
    }
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    *(int *)((int)this + 0x1c) = local_138;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_StayInLaneDistance_0058de8c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_StayInLaneDistance_0058de8c,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 8;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 9;
  uVar3 = FUN_00405710((int)local_148,(int)local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e0e0);
    }
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    *(int *)((int)this + 0x20) = local_138;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_PatrolSpeed_0058dd44;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_PatrolSpeed_0058dd44,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 10;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 0xb;
  uVar3 = FUN_00405850((int)local_148,(int)local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e14c);
    }
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    *(float *)((int)this + 0x28) = local_134 * 0.2777778;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_MaxCornerSpeed_0058dd5c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_MaxCornerSpeed_0058dd5c,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 0xc;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 0xd;
  uVar3 = FUN_00405850((int)local_148,(int)local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e1b8);
    }
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    *(float *)((int)this + 0x2c) = local_134 * 0.2777778;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Acceleration_0058dd6c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_Acceleration_0058dd6c,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 0xe;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4._0_1_ = 0xf;
  uVar3 = FUN_00405850((int)local_148,(int)local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e224);
    }
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    *(float *)((int)this + 0x30) = local_134 * 0.01;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_HandBrakeSlowDownBias_0058dea0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_158,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar8 = s_HandBrakeSlowDownBias_0058dea0;
    pcVar10 = local_154;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_158,uVar6);
  }
  local_4 = 0x10;
  pcVar8 = *(char **)((int)this + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_148,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar10 = local_144;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_148,uVar6);
  }
  local_4._0_1_ = 0x11;
  uVar3 = FUN_00405850((int)local_148,(int)local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e290);
    }
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    *(float *)((int)this + 0x24) = local_134 * 0.01;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Aggression_0058dd7c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_158,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar8 = s_Aggression_0058dd7c;
    pcVar10 = local_154;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_158,uVar6);
  }
  local_4 = 0x12;
  pcVar8 = *(char **)((int)this + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_148,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar10 = local_144;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_148,uVar6);
  }
  local_4._0_1_ = 0x13;
  uVar3 = FUN_00405850((int)local_148,(int)local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e2fc);
    }
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    *(float *)((int)this + 0x34) = local_134 * 0.01;
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_BehaviorBiases_0058de3c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_158,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar8 = s_BehaviorBiases_0058de3c;
    pcVar10 = local_154;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_158,uVar6);
  }
  local_4 = 0x14;
  pcVar8 = *(char **)((int)this + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_148,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar10 = local_144;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_148,uVar6);
  }
  local_4._0_1_ = 0x15;
  bVar2 = FUN_00405990((int)local_148,(int)local_158,(LPSTR)local_10c,0xff);
  local_4 = CONCAT31(local_4._1_3_,0x14);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if (bVar2) {
    iVar4 = FUN_004c3d60(local_10c,(uint *)0x0);
    if (iVar4 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s____In_0058e368);
    }
    iVar4 = 0;
    pfVar9 = (float *)((int)this + 0x38);
    do {
      iStack_110 = FUN_004c3ec0(iVar4);
      iVar4 = iVar4 + 1;
      *pfVar9 = (float)iStack_110;
      pfVar9 = pfVar9 + 1;
    } while (iVar4 < 3);
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e3f8);
    }
    puVar5 = (undefined4 *)((int)this + 0x38);
    iVar4 = 3;
    do {
      *puVar5 = *(undefined4 *)((param_1 - (int)this) + (int)puVar5);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = (char *)&DAT_0058de4c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_158,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar8 = (char *)&DAT_0058de4c;
    pcVar10 = local_154;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_158,uVar6);
  }
  local_4 = 0x16;
  pcVar8 = *(char **)((int)this + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_148,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar10 = local_144;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(local_148,uVar6);
  }
  local_4._0_1_ = 0x17;
  uVar3 = FUN_00405850((int)local_148,(int)local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  FUN_004028f0(local_148,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_158,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e464);
    }
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    *(float *)((int)this + 0x44) = local_134 * 0.01;
  }
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Cheat_0058deb8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_148,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar8 = s_Cheat_0058deb8;
    pcVar10 = local_144;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    local_144[uVar6] = '\0';
    uStack_140 = uVar6;
  }
  local_4 = 0x18;
  pcVar8 = *(char **)((int)this + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_158,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar10 = local_154;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    local_154[uVar6] = '\0';
    uStack_150 = uVar6;
  }
  local_4._0_1_ = 0x19;
  uVar3 = FUN_00405710((int)local_158,(int)local_148,&local_138);
  local_4 = CONCAT31(local_4._1_3_,0x18);
  FUN_004028f0(local_158,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_148,'\x01');
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e4d0);
    }
    *(undefined1 *)((int)this + 0x48) = *(undefined1 *)(param_1 + 0x48);
  }
  else {
    *(bool *)((int)this + 0x48) = local_138 != 0;
  }
  uVar6 = 0xffffffff;
  local_144 = (char *)0x0;
  uStack_140 = 0;
  uStack_13c = 0;
  pcVar8 = s_CheatThreshHoldDistance_0058dec0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)s_CheatThreshHoldDistance_0058dec0,~uVar6 - 1);
  pcVar8 = *(char **)((int)this + 4);
  local_4 = 0x1a;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  uVar6 = 0xffffffff;
  local_154 = (char *)0x0;
  uStack_150 = 0;
  uStack_14c = 0;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)pcVar8,~uVar6 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x1b);
  uVar3 = FUN_00405710((int)local_158,(int)local_148,&local_138);
  if (local_154 != (char *)0x0) {
    cVar1 = *(char *)((int)local_154 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_154 + -1));
    }
    else {
      *(char *)((int)local_154 + -1) = cVar1 + -1;
    }
  }
  local_154 = (char *)0x0;
  uStack_150 = 0;
  uStack_14c = 0;
  local_4 = 0xffffffff;
  if (local_144 != (char *)0x0) {
    cVar1 = *(char *)((int)local_144 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_144 + -1));
    }
    else {
      *(char *)((int)local_144 + -1) = cVar1 + -1;
    }
  }
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e53c);
    }
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    *(int *)((int)this + 0x4c) = local_138;
  }
  uVar6 = 0xffffffff;
  pcStack_11c = (char *)0x0;
  uStack_118 = 0;
  uStack_114 = 0;
  pcVar8 = s_CheatReplaceDistance_0058ded8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(auStack_120,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar8 = s_CheatReplaceDistance_0058ded8;
    pcVar10 = pcStack_11c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(auStack_120,uVar6);
  }
  local_4 = 0x1c;
  pcVar8 = "";
  if (*(char **)((int)this + 4) != (char *)0x0) {
    pcVar8 = *(char **)((int)this + 4);
  }
  uVar6 = 0xffffffff;
  pcStack_12c = (char *)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(auStack_130,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar10 = pcStack_12c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcStack_12c[uVar6] = '\0';
    uStack_128 = uVar6;
  }
  local_4 = CONCAT31(local_4._1_3_,0x1d);
  uVar3 = FUN_00405710((int)auStack_130,(int)auStack_120,&local_138);
  if (pcStack_12c != (char *)0x0) {
    cVar1 = pcStack_12c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_12c + -1);
    }
    else {
      pcStack_12c[-1] = cVar1 + -1;
    }
  }
  pcStack_12c = (char *)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_4 = 0xffffffff;
  if (pcStack_11c != (char *)0x0) {
    cVar1 = pcStack_11c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_11c + -1);
    }
    else {
      pcStack_11c[-1] = cVar1 + -1;
    }
  }
  pcStack_11c = (char *)0x0;
  uStack_118 = 0;
  uStack_114 = 0;
  if ((char)uVar3 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s___Behavior___s_______0058e5a8);
    }
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    *(int *)((int)this + 0x50) = local_138;
  }
  ExceptionList = pvStack_c;
  return;
}


