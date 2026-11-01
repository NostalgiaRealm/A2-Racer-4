
/* ==== FUN_004a9130 @ 004a9130 ==== 
 * signature: undefined __thiscall FUN_004a9130(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004a9130-004a9366;004a936e-004a9515;004a9519-004a97ed
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a9367-004a936d 004a9516-004a9518
 */

void __thiscall
FUN_004a9130(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  char in_stack_0000002c;
  char in_stack_00000034;
  char in_stack_00000038;
  undefined1 local_129;
  undefined4 local_128;
  char *pcStack_124;
  uint uStack_120;
  void *local_118;
  undefined1 auStack_114 [4];
  char *pcStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [4];
  char *pcStack_100;
  uint uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined1 local_e4 [4];
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 local_d4 [4];
  char *local_d0;
  int local_c4 [3];
  uint local_b8;
  uint local_b4;
  undefined4 *local_b0;
  double local_ac;
  undefined4 local_a4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_54 [4];
  char *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined1 local_1c;
  int local_14;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_118 = this;
  FUN_004028f0(local_d4,'\0');
  local_4 = 0;
  FUN_004a0210(local_c4);
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x18) = 1;
  puVar3 = (undefined4 *)FUN_004a44a0(&DAT_00715f58,in_stack_00000024,in_stack_00000028);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = FUN_0049df90((undefined1 *)&local_128,(byte *)s_ObjectMaterial_d_005aff54);
    local_4._0_1_ = 2;
    FUN_004093c0(local_d4,puVar4,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004028f0(&local_128,'\x01');
    DAT_00715ea8 = DAT_00715ea8 + 1;
    pcVar11 = local_d0;
    if (local_d0 == (char *)0x0) {
      pcVar11 = "";
    }
    local_128 = CONCAT31(local_128._1_3_,local_129);
    FUN_004028f0(&local_128,'\0');
    uVar7 = 0xffffffff;
    pcVar12 = pcVar11;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(&local_128,(undefined4 *)pcVar11,~uVar7 - 1);
    local_4._0_1_ = 3;
    puVar3 = FUN_004a4510(&DAT_00715f58,&local_128,in_stack_00000024,in_stack_00000028);
    local_4._0_1_ = 1;
    FUN_004028f0(&local_128,'\x01');
    this = local_118;
  }
  local_b0 = puVar3;
  FUN_004f5520(local_c4,(char *)0x0);
  local_b8 = (uint)(in_stack_0000002c != '\0');
  local_b4 = (uint)(in_stack_00000034 != '\0');
  local_ac = (double)in_stack_00000020;
  piVar5 = (int *)(DAT_0073b0d0 + *(int *)((int)this + 0x24) * 0xa9);
  local_a4 = 1;
  local_8c = 0x9999999a;
  local_88 = 0x3fa99999;
  local_84 = 0x33333333;
  local_80 = 0x3fe33333;
  local_7c = 0x33333333;
  local_78 = 0x3fe33333;
  local_74 = 0x33333333;
  local_70 = 0x3fe33333;
  local_1c = 1;
  local_14 = param_1;
  if (*piVar5 == 1) {
    iVar10 = *(int *)((int)piVar5 + 0x99);
  }
  else {
    if (*piVar5 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Invalid_object_type__005afc8c);
    }
    iVar10 = *(int *)(*(int *)(*(int *)(piVar5[1] * 9 + 4 + DAT_0073b168) + piVar5[2] * 4) * 0x10 +
                     DAT_0073b120);
  }
  FUN_0049df90(local_e4,(byte *)s_obj_d_005aff4c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(auStack_114,'\0');
  uVar7 = 0xffffffff;
  pcVar11 = s_debris_005aff44;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uStack_f4 = uVar7;
  uVar6 = FUN_00402a00(auStack_114,uVar7,'\x01');
  if ((char)uVar6 != '\0') {
    pcVar11 = s_debris_005aff44;
    pcVar12 = pcStack_110;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_004029e0(auStack_114,uVar7);
  }
  DAT_00715ea4 = DAT_00715ea4 + 1;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004093c0(auStack_54,local_e4,0,0xffffffff);
  pcVar11 = pcStack_50;
  if (pcStack_50 == (char *)0x0) {
    pcVar11 = "";
  }
  FUN_004f5480(local_c4,pcVar11);
  uVar7 = DAT_00715b0c;
  if (in_stack_00000038 == '\0') {
    uVar7 = FUN_004a3460();
  }
  FUN_004a02a0(local_c4,uVar7);
  uStack_34 = 0;
  iVar9 = DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  local_128 = *(undefined4 *)(iVar9 + 0x74);
  pcStack_124 = *(char **)(iVar9 + 0x78);
  uStack_120 = *(uint *)(iVar9 + 0x7c);
  uStack_2c = 0;
  iVar10 = iVar10 * 0xac;
  pcStack_30 = pcStack_124;
  if (*(int *)(DAT_0073b5c8 + 0x9c + iVar10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____string_is_not_initialis_005969b0);
  }
  pcVar11 = *(char **)(DAT_0073b5c8 + 0x98 + iVar10);
  FUN_004028f0(auStack_104,'\0');
  uVar7 = 0xffffffff;
  pcVar12 = pcVar11;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar6 = FUN_00402a00(auStack_104,uVar7,'\x01');
  if ((char)uVar6 != '\0') {
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcStack_100 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcStack_100 = pcStack_100 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcStack_100 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcStack_100 = pcStack_100 + 1;
    }
    FUN_004029e0(auStack_104,uVar7);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  puStack_38 = (undefined1 *)FUN_004a41f0(&DAT_00715f58,(int)auStack_104);
  if (puStack_38 == (undefined1 *)0x0) {
    puStack_38 = FUN_004a4330(&DAT_00715f58,auStack_104,*(int *)(DAT_0073b5c8 + 0x84 + iVar10),
                              *(int *)(DAT_0073b5c8 + 0x80 + iVar10));
  }
  pvVar2 = local_118;
  iVar9 = *(int *)((int)local_118 + 0x24);
  iVar10 = DAT_0073b0d0 + iVar9 + 0x50 + iVar9 * 0xa8;
  uStack_f0 = *(undefined4 *)(DAT_0073b0d0 + iVar9 + 0x50 + iVar9 * 0xa8);
  local_128 = CONCAT31(local_128._1_3_,local_129);
  fStack_ec = *(float *)(iVar10 + 4) + 1.0;
  uStack_e8 = *(undefined4 *)(iVar10 + 8);
  FUN_004028f0(&local_128,'\0');
  uVar7 = 0xffffffff;
  pcVar11 = s_RealObject_005af178;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar6 = FUN_00402a00(&local_128,uVar7,'\x01');
  if ((char)uVar6 != '\0') {
    pcVar11 = s_RealObject_005af178;
    pcVar12 = pcStack_124;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    pcStack_124[uVar7] = '\0';
    uStack_120 = uVar7;
  }
  local_4._0_1_ = 7;
  piVar5 = FUN_004a4400(&DAT_00715f58,(int)&local_128,local_c4,&uStack_f0);
  *(int **)((int)pvVar2 + 0x10) = piVar5;
  local_4._0_1_ = 6;
  FUN_004028f0(&local_128,'\x01');
  if (0.1 <= in_stack_00000020) {
    *(float *)((int)pvVar2 + 0xb0) = 1.0 / in_stack_00000020;
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0xb0) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined4 *)((int)pvVar2 + 0xbc) = param_2;
  *(undefined4 *)((int)pvVar2 + 0xc0) = param_3;
  *(undefined4 *)((int)pvVar2 + 0xc4) = param_4;
  FUN_004028f0(auStack_104,'\x01');
  if (pcStack_110 != (char *)0x0) {
    cVar1 = pcStack_110[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_110 + -1);
    }
    else {
      pcStack_110[-1] = cVar1 + -1;
    }
  }
  pcStack_110 = (char *)0x0;
  uStack_10c = 0;
  uStack_108 = 0;
  if (iStack_e0 != 0) {
    cVar1 = *(char *)(iStack_e0 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_e0 + -1));
    }
    else {
      *(char *)(iStack_e0 + -1) = cVar1 + -1;
    }
  }
  iStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  local_4 = local_4 & 0xffffff00;
  if (pcStack_50 != (char *)0x0) {
    cVar1 = pcStack_50[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_50 + -1);
    }
    else {
      pcStack_50[-1] = cVar1 + -1;
    }
  }
  pcStack_50 = (char *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  FUN_004f5510(local_c4);
  if (local_d0 != (char *)0x0) {
    cVar1 = local_d0[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_d0[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(local_d0 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


