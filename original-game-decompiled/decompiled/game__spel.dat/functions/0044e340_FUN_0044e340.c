
/* ==== FUN_0044e340 @ 0044e340 ==== 
 * signature: undefined __stdcall FUN_0044e340(void)
 * body: 0044e340-0044e459;0044e45f-0044e521;0044e525-0044e75b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044e45a-0044e45e 0044e522-0044e524
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e340(void)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  float fVar6;
  void *this;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 in_stack_ffffff78;
  int in_stack_ffffff7c;
  undefined4 in_stack_ffffff80;
  undefined4 in_stack_ffffff84;
  float fVar11;
  undefined4 uVar12;
  code *pcVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar16;
  code *pcVar17;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a5f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_3c,'\0');
  local_4 = 0;
  FUN_004028f0(local_1c,'\0');
  local_4._0_1_ = 1;
  FUN_0042aee0();
  if (DAT_006fba30 == 0) {
    puVar4 = FUN_0049df90(local_2c,(byte *)s_RACER__d_005a1f4c);
    local_4._0_1_ = 3;
    FUN_004093c0(local_3c,puVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_2c,'\x01');
  }
  else {
    FUN_004028f0(local_2c,'\0');
    uVar7 = 0xffffffff;
    pcVar10 = (char *)&DAT_005a1f04;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar3 = FUN_00402a00(local_2c,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar9 = &DAT_005a1f04;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_28 = *puVar9;
        puVar9 = puVar9 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_004029e0(local_2c,uVar7);
    }
    local_4._0_1_ = 2;
    FUN_004093c0(local_3c,local_2c,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_2c,'\x01');
    DAT_006fba5c = FUN_004245f0(&DAT_005d3458,(int)local_3c);
    if (DAT_006fba5c == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s___d__Could_not_find_car__s_005a1f2c);
    }
  }
  iVar5 = FUN_00424660(&DAT_005d3458,(int)local_3c);
  FUN_00403140(&DAT_006fbabc,*(int *)(iVar5 + 0x4c));
  iVar5 = FUN_00424660(&DAT_005d3458,(int)local_3c);
  fVar2 = *(float *)(iVar5 + 0x44);
  iVar5 = FUN_00424660(&DAT_005d3458,(int)local_3c);
  FUN_0041aa80(&DAT_005d3118,iVar5);
  if (((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0) &&
     (DAT_006fb8ac == DAT_006fbaa4 || (int)(DAT_006fb8ac - DAT_006fbaa4) < 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__init_player_car___s__d____Illeg_005a1f7c);
  }
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 == 1) {
      iVar5 = 0;
      fVar6 = (float)(DAT_006fb8ac - DAT_006fbaa4);
    }
    else {
      iVar5 = 1;
      fVar6 = (float)(DAT_006fb8ac - DAT_006fbaa4);
    }
  }
  else if (DAT_006fb954 == 1) {
    iVar5 = 1;
    fVar6 = (float)(DAT_006fb8ac - DAT_006fbaa4);
  }
  else {
    iVar5 = 0;
    fVar6 = (float)(DAT_006fb8ac - DAT_006fbaa4);
  }
  uVar7 = DAT_006fbaa4 & 1;
  pcVar16 = FUN_0044f960;
  iVar15 = 1;
  pcVar13 = FUN_0044f970;
  pcVar17 = FUN_0044ea60;
  fVar11 = 1.4013e-45;
  FUN_0041c870(&stack0xffffff78,local_3c);
  DAT_006fba58 = (char *)FUN_0042a3d0(in_stack_ffffff78,in_stack_ffffff7c,in_stack_ffffff80,
                                      in_stack_ffffff84,fVar6,uVar7,iVar5,fVar11,pcVar17,
                                      (int)pcVar13,iVar15,pcVar16);
  uVar7 = 0;
  this = (void *)FUN_00426f60(&DAT_005d3460,(int)DAT_006fba58);
  FUN_004252e0(this,uVar7);
  FUN_004353e0(fVar2,(int)DAT_006fba58);
  uVar3 = *(undefined4 *)((int)DAT_006fba58 * 0xf0 + 0x3c + DAT_00715e50);
  pcVar14 = s_cur___d__next___d_005a1fc0;
  FUN_004c3fa0((byte *)s_cur___d__next___d_005a1fc0);
  uVar12 = 0x44e64f;
  pcVar10 = DAT_006fba58;
  FUN_004a6ae0(DAT_006fba58);
  pcVar17 = FUN_0042b730;
  *(uint *)((int)DAT_006fba58 * 0xf0 + 0x1c + DAT_00715e50) =
       *(uint *)((int)DAT_006fba58 * 0xf0 + 0x1c + DAT_00715e50) | 3;
  *(undefined4 *)((int)DAT_006fba58 * 0xf0 + 100 + DAT_00715e50) = 0;
  FUN_0041c870(&stack0xffffff94,local_3c);
  FUN_0042b550((int)DAT_006fba58,uVar12,pcVar10,pcVar14,uVar3,pcVar17);
  FUN_00402de0(&DAT_006fbabc,0.0);
  FUN_00402ea0(&DAT_006fbabc,0.0);
  _DAT_006fbab0 = 0;
  FUN_004505e0();
  FUN_0044f0d0();
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_38 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339((LPVOID)(local_38 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}


