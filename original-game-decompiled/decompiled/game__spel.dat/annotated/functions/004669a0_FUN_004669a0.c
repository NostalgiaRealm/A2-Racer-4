
/* ==== FUN_004669a0 @ 004669a0 ==== 
 * signature: undefined4 __cdecl FUN_004669a0(undefined4 * param_1)
 * body: 004669a0-004669d8;004669dc-00466da7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004669d9-004669db
 */

undefined4 __cdecl FUN_004669a0(undefined4 *param_1)

{
  char cVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  char *pcStack_18;
  float fStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056abda;
  pvStack_c = ExceptionList;
  if (DAT_005d2aa8 == 0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__No_traffic_types_availab_005a726c);
  }
  iVar8 = param_1[4];
  ExceptionList = &pvStack_c;
  FUN_00450b30(iVar8,1);
  if ((int)param_1[2] < param_1[1] + -2) {
    pfVar2 = (float *)FUN_00464540(&fStack_1c,param_1[6],param_1[1],param_1[2],(float)param_1[3],
                                   param_1[8]);
    fStack_28 = *pfVar2;
    fStack_24 = pfVar2[1];
    fStack_20 = pfVar2[2];
    pfVar2 = (float *)FUN_00464540(&fStack_34,param_1[6],param_1[1],param_1[2] + 1,(float)param_1[3]
                                   ,param_1[8]);
    fStack_1c = *pfVar2;
    pcStack_18 = (char *)pfVar2[1];
    fStack_14 = pfVar2[2];
  }
  iVar6 = param_1[2];
  param_1[2] = iVar6 + 1;
  if (iVar6 + 1 < param_1[1] + -2) {
    fStack_40 = fStack_1c - fStack_28;
    fStack_3c = (float)pcStack_18 - fStack_24;
    iVar8 = iVar8 * 0xf0;
    fStack_38 = fStack_14 - fStack_20;
    iVar6 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
    fStack_34 = fStack_40;
    fStack_30 = fStack_3c;
    fStack_2c = fStack_38;
    pfVar2 = (float *)FUN_00467320(&fStack_1c,&fStack_40,
                                   SQRT(fStack_40 * fStack_40 +
                                        fStack_3c * fStack_3c + fStack_38 * fStack_38));
    fStack_40 = *pfVar2;
    fStack_30 = 0.0;
    fStack_3c = pfVar2[1];
    fStack_2c = -fStack_40;
    fStack_38 = pfVar2[2];
    fStack_1c = fStack_3c * fStack_2c;
    pcStack_18 = (char *)(fStack_38 * fStack_38 - fStack_2c * fStack_40);
    iVar6 = iVar6 * 0xa9;
    fStack_14 = -(fStack_3c * fStack_38);
    fStack_34 = fStack_38;
    FUN_004b40b0((undefined4 *)(iVar6 + 0x10 + DAT_0073b0d0),fStack_38,0,fStack_2c);
    FUN_004b40d0(iVar6 + 0x10 + DAT_0073b0d0,fStack_1c,pcStack_18,fStack_14);
    FUN_004b40f0(iVar6 + 0x10 + DAT_0073b0d0,fStack_40,fStack_3c,fStack_38);
    *(float *)(iVar6 + 0x40 + DAT_0073b0d0) = fStack_28;
    *(float *)(iVar6 + 0x44 + DAT_0073b0d0) = fStack_24;
    *(float *)(iVar6 + 0x48 + DAT_0073b0d0) = fStack_20;
    iVar8 = iVar8 + DAT_00715e50;
    iVar6 = FUN_004af230(&DAT_00715250,DAT_006fba7c,fStack_28,fStack_24,fStack_20);
    *(int *)(iVar8 + 0x34) = iVar6;
  }
  else if (param_1[7] != 0) {
    uVar3 = FUN_00558625();
    iVar8 = (int)uVar3 % DAT_005d2aa8;
    fStack_1c = (float)CONCAT31(fStack_1c._1_3_,param_1._0_1_);
    FUN_004028f0(&fStack_1c,'\0');
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(&DAT_005d269c + iVar8 * 10);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar4 = FUN_00402a00(&fStack_1c,uVar3,'\x01');
    if ((char)uVar4 != '\0') {
      pcVar5 = (char *)(&DAT_005d269c + iVar8 * 10);
      pcVar9 = pcStack_18;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_004029e0(&fStack_1c,uVar3);
    }
    uStack_4 = 0;
    iVar8 = FUN_00424660(&DAT_005d3458,(int)&fStack_1c);
    pcVar5 = *(char **)(iVar8 + 0x14);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
    }
    iVar8 = FUN_004b75a0(&DAT_00712130,pcVar5);
    *(int *)(DAT_0073b0d0 + *(int *)(param_1[4] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 4) = iVar8;
    FUN_00558625();
    FUN_004a6800(0x7128b0);
    lVar10 = __ftol();
    param_1[1] = (int)lVar10;
    FUN_004644e0((int)param_1);
    param_1[2] = 0;
    uStack_4 = 0xffffffff;
    FUN_004028f0(&fStack_1c,'\x01');
  }
  if ((*(int *)(&DAT_00709f0c + param_1[6] * 0x340) != 0) &&
     (*(int *)(&DAT_00709f0c + param_1[6] * 0x340) == DAT_006fba7c)) {
    *param_1 = 0;
    ExceptionList = pvStack_c;
    return 1;
  }
  ExceptionList = pvStack_c;
  return 0;
}


