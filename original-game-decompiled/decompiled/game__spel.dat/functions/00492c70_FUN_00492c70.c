
/* ==== FUN_00492c70 @ 00492c70 ==== 
 * signature: undefined __fastcall FUN_00492c70(int param_1)
 * body: 00492c70-00492ca5;00492ca9-00492d31;00493071-00493082
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00492ca6-00492ca8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00492c70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  char *pcVar12;
  char *pcVar13;
  float10 fVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  longlong lVar15;
  undefined1 uStack_65;
  float local_64;
  float fStack_50;
  char *pcStack_4c;
  void *pvStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  char *pcStack_30;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056e06a;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Element_not_initted_yet__005acfc4);
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_64 = 1.2;
  }
  else {
    local_64 = 0.6;
  }
  ExceptionList = &pvStack_c;
  fVar14 = FUN_004a6800(0x7128b0);
  fVar14 = fVar14 + (float10)*(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x60) = (float)fVar14;
  if (fVar14 < (float10)0.0) {
    ExceptionList = pvStack_c;
    return;
  }
  if ((float10)local_64 <= fVar14) {
    FUN_0047bc50(*(void **)(param_1 + 4),(undefined4 *)(param_1 + 0x30));
    fStack_34 = 0.0;
    pcStack_30 = (char *)0x0;
    fStack_2c = 0.0;
    FUN_0047bc90(*(void **)(param_1 + 4),&fStack_34);
    ExceptionList = pvStack_c;
    return;
  }
  fVar14 = FUN_004a6800(0x7128b0);
  fVar11 = (float)((float10)local_64 / fVar14);
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 100) = (_DAT_005b23b8 * 0.25) / fVar11 + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x68) = (_DAT_005b23b8 * 0.5) / fVar11 + *(float *)(param_1 + 0x68);
  lVar15 = __ftol();
  iVar7 = DAT_0073b530;
  uVar10 = DAT_005b23bc;
  fVar5 = *(float *)(DAT_0073b530 + ((uint)lVar15 & DAT_005b23bc) * 4);
  pcStack_4c = (char *)((fVar1 - fVar2) * fVar5);
  fStack_50 = (fVar3 - fVar4) * fVar5;
  pvStack_48 = (void *)(float)(extraout_ST0 * (float10)fVar5);
  fStack_34 = fStack_50;
  pcStack_30 = pcStack_4c;
  fStack_2c = (float)pvStack_48;
  lVar15 = __ftol();
  pvStack_48 = (void *)(*(float *)(iVar7 + ((uint)lVar15 & uVar10) * 4) * 0.4 +
                       *(float *)(param_1 + 0x2c));
  pcStack_4c = (char *)((float)pcStack_30 + *(float *)(param_1 + 0x28));
  fStack_50 = fStack_34 + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x18) = fStack_50;
  *(char **)(param_1 + 0x1c) = pcStack_4c;
  *(void **)(param_1 + 0x20) = pvStack_48;
  FUN_0047bc50(*(void **)(param_1 + 4),(float *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x5c) == 0) {
    puVar8 = (undefined4 *)FUN_0047bc40(*(int *)(param_1 + 4));
    uStack_40 = *puVar8;
    uStack_3c = puVar8[1];
    fStack_38 = (_DAT_005b23b8 + _DAT_005b23b8) / fVar11 + (float)puVar8[2];
    FUN_0047bc90(*(void **)(param_1 + 4),&uStack_40);
    lVar15 = __ftol();
    uStack_1c = 0x3f800000;
    fStack_24 = *(float *)(DAT_0073b530 + ((uint)lVar15 & DAT_005b23bc) * 4) * 0.3 + 1.0;
    fStack_20 = fStack_24;
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(&fStack_24);
  }
  fStack_50 = (float)CONCAT31(fStack_50._1_3_,uStack_65);
  FUN_004028f0(&fStack_50,'\0');
  uVar10 = 0xffffffff;
  pcVar12 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar6 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar6 != '\0');
  fVar11 = (float)(~uVar10 - 1);
  uVar9 = FUN_00402a00(&fStack_50,(uint)fVar11,'\x01');
  if ((char)uVar9 != '\0') {
    pcVar12 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
    pcVar13 = pcStack_4c;
    for (uVar10 = (uint)fVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar10 = (uint)fVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pcStack_4c[(int)fVar11] = '\0';
    pvStack_48 = (void *)fVar11;
  }
  fStack_34 = (float)CONCAT31(fStack_34._1_3_,uStack_65);
  iStack_4 = 0;
  FUN_004028f0(&fStack_34,'\0');
  uVar10 = 0xffffffff;
  pcVar12 = s_m_FinStrElement_not_initialised_005ad014;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar6 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar6 != '\0');
  fVar11 = (float)(~uVar10 - 1);
  uVar9 = FUN_00402a00(&fStack_34,(uint)fVar11,'\x01');
  if ((char)uVar9 != '\0') {
    pcVar12 = s_m_FinStrElement_not_initialised_005ad014;
    pcVar13 = pcStack_30;
    for (uVar10 = (uint)fVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar10 = (uint)fVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pcStack_30[(int)fVar11] = '\0';
    fStack_2c = fVar11;
  }
  iStack_4._0_1_ = 1;
  FUN_00487bc0(*(int *)(param_1 + 8),(undefined1 *)&fStack_34,(int)&fStack_50);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_004028f0(&fStack_34,'\x01');
  iStack_4 = 0xffffffff;
  if (pcStack_4c != (char *)0x0) {
    cVar6 = pcStack_4c[-1];
    if ((cVar6 == '\0') || (cVar6 == -1)) {
      FUN_0054b339(pcStack_4c + -1);
    }
    else {
      pcStack_4c[-1] = cVar6 + -1;
    }
  }
  pcStack_30 = (char *)(*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x40));
  lVar15 = __ftol();
  fVar11 = *(float *)(DAT_0073b530 + ((uint)lVar15 & DAT_005b23bc) * 4);
  pcStack_30 = (char *)((float)pcStack_30 * fVar11);
  fStack_50 = (float)(extraout_ST0_00 * (float10)fVar11 + (float10)*(float *)(param_1 + 0x3c));
  pcStack_4c = (char *)((float)pcStack_30 + *(float *)(param_1 + 0x40));
  pvStack_48 = *(void **)(param_1 + 0x44);
  fStack_18 = fStack_50;
  fStack_14 = (float)pcStack_4c;
  pvStack_10 = pvStack_48;
  (**(code **)(**(int **)(param_1 + 8) + 0x20))(1);
  FUN_0047bc50(*(void **)(param_1 + 8),&uStack_1c);
  ExceptionList = pvStack_10;
  return;
}


