
/* ==== FUN_0041f350 @ 0041f350 ==== 
 * signature: undefined __cdecl FUN_0041f350(float param_1)
 * body: 0041f350-0041f38d;0041f391-0041f5c0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041f38e-0041f390
 */

void __cdecl FUN_0041f350(float param_1)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *this;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569ed8;
  pvStack_c = ExceptionList;
  if (((int)param_1 < 0) || (0x12 < (int)param_1)) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Illegal_FSM_object_inde_00594ea4);
  }
  iVar1 = (int)param_1 * 0x294;
  iVar4 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar7 = *(int *)(&DAT_005ceabc + iVar1);
  ExceptionList = &pvStack_c;
  puVar5 = FUN_0040ebe0();
  if (-1 < iVar7) {
    iVar6 = (*(code *)**(undefined4 **)(puVar5 + 0x24))();
    if (iVar7 < iVar6) {
      iVar7 = 1;
      goto LAB_0041f3e8;
    }
  }
  iVar7 = 0;
LAB_0041f3e8:
  FUN_004a6980(iVar7,(byte *)s__s__d____Invalid_object_index____0058fd14);
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    uVar8 = FUN_00421d80((int)param_1);
    *(undefined4 *)(&DAT_005cebec + iVar1) = uVar8;
    if (*(int *)(&DAT_005ce9f0 + iVar1) == 0x1d) {
      auStack_1c[0] = param_1._0_1_;
      FUN_004028f0(auStack_1c,'\0');
      uVar9 = 0xffffffff;
      pcVar11 = s__warning_from_harry_00594ecc;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      uVar9 = ~uVar9 - 1;
      uVar8 = FUN_00402a00(auStack_1c,uVar9,'\x01');
      if ((char)uVar8 != '\0') {
        pcVar11 = s__warning_from_harry_00594ecc;
        pcVar12 = pcStack_18;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar12 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar12 = pcVar12 + 1;
        }
        pcStack_18[uVar9] = '\0';
        uStack_14 = uVar9;
      }
      puVar5 = auStack_1c;
      iVar7 = (&DAT_005ce9e8)[(int)param_1 * 0xa5];
      uStack_4 = 0;
      this = (void *)FUN_004891a0();
      FUN_0048a910(this,(int)puVar5,iVar7);
      uStack_4 = 0xffffffff;
      if (pcStack_18 != (char *)0x0) {
        cVar3 = pcStack_18[-1];
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_0054b339(pcStack_18 + -1);
        }
        else {
          pcStack_18[-1] = cVar3 + -1;
        }
      }
      pcStack_18 = (char *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    (&DAT_005ceadc)[iVar1] = 0;
  }
  iVar7 = FUN_00418890((int)param_1);
  pfVar2 = (float *)((&DAT_005d2b78)[iVar7 * 3] * 0x50 + 8 + DAT_00715eb8);
  *(float *)(&DAT_005cebf4 + iVar1) = *pfVar2;
  *(float *)(&DAT_005cebf8 + iVar1) = pfVar2[1];
  *(float *)(&DAT_005cebfc + iVar1) = pfVar2[2];
  FUN_00403a70(param_1,*pfVar2,pfVar2[1],pfVar2[2]);
  if (*(int *)(&DAT_005ceac0 + (iVar4 + 2) * 0x10 + iVar1) == 1) {
    FUN_00405e90((int)param_1);
  }
  else if (*(int *)(&DAT_005ceac0 + (iVar4 + 2) * 0x10 + iVar1) == 2) {
    FUN_00405c80((int)param_1);
    if (50.0 <= *(float *)(&DAT_005cec54 + iVar1)) {
      (&DAT_005ceadd)[iVar1] = 0;
    }
    else {
      (&DAT_005ceadd)[iVar1] = 1;
    }
  }
  FUN_00406390((int)param_1);
  FUN_0041eeb0((int)param_1);
  if (*(int *)(&DAT_005cec0c + iVar1) < 3) {
    FUN_0040d470(&DAT_005ce9e8 + (int)param_1 * 0xa5,*(undefined4 *)(&DAT_005cebec + iVar1));
  }
  ExceptionList = pvStack_c;
  return;
}


