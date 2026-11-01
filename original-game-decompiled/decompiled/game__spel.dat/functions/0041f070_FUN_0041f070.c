
/* ==== FUN_0041f070 @ 0041f070 ==== 
 * signature: undefined __cdecl FUN_0041f070(float param_1)
 * body: 0041f070-0041f0ad;0041f0b1-0041f343
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041f0ae-0041f0b0
 */

void __cdecl FUN_0041f070(float param_1)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  void *this;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569ec6;
  pvStack_c = ExceptionList;
  if (((int)param_1 < 0) || (0x12 < (int)param_1)) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Illegal_FSM_object_inde_00594e40);
  }
  iVar1 = (int)param_1 * 0x294;
  iVar4 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar5 = *(int *)(&DAT_005ceabc + iVar1);
  ExceptionList = &pvStack_c;
  puVar6 = FUN_0040ebe0();
  if ((iVar5 < 0) || (iVar7 = (*(code *)**(undefined4 **)(puVar6 + 0x24))(), iVar7 <= iVar5)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  FUN_004a6980(iVar7,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar5 = *(int *)(*(int *)(puVar6 + 0x28) + 4) + iVar5 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    (&DAT_005cec60)[iVar1] = 0;
    FUN_00558625();
    *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40000000;
    (&DAT_005ceadc)[iVar1] = 0;
    iVar7 = *(int *)(&DAT_005ce9f0 + iVar1);
    if (((((iVar7 == 0x26) || (iVar7 == 0x27)) || (iVar7 == 0x28)) || (iVar7 == 0x29)) &&
       ((*(int *)(&DAT_005ceac0 + (iVar4 + 2) * 0x10 + iVar1) == 2 &&
        ((&DAT_005cec78)[iVar1] != '\0')))) {
      (&DAT_005cec78)[iVar1] = 0;
      auStack_1c[0] = param_1._0_1_;
      FUN_004028f0(auStack_1c,'\0');
      uVar10 = 0xffffffff;
      pcVar12 = s__police_outsmarted_00594e68;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      uVar10 = ~uVar10 - 1;
      uVar8 = FUN_00402a00(auStack_1c,uVar10,'\x01');
      if ((char)uVar8 != '\0') {
        pcVar12 = s__police_outsmarted_00594e68;
        pcVar13 = pcStack_18;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcStack_18[uVar10] = '\0';
        uStack_14 = uVar10;
      }
      puVar6 = auStack_1c;
      uStack_4 = 0;
      iVar7 = (&DAT_005ce9e8)[(int)param_1 * 0xa5];
      this = (void *)FUN_004891a0();
      FUN_0048a910(this,(int)puVar6,iVar7);
      uStack_4 = 0xffffffff;
      FUN_004028f0(auStack_1c,'\x01');
    }
  }
  iVar7 = FUN_00418890((int)param_1);
  pfVar2 = (float *)((&DAT_005d2b78)[iVar7 * 3] * 0x50 + 8 + DAT_00715eb8);
  *(float *)(&DAT_005cebf4 + iVar1) = *pfVar2;
  *(float *)(&DAT_005cebf8 + iVar1) = pfVar2[1];
  *(float *)(&DAT_005cebfc + iVar1) = pfVar2[2];
  FUN_00403a70(param_1,*pfVar2,pfVar2[1],pfVar2[2]);
  iVar4 = *(int *)(&DAT_005ceac0 + (iVar4 + 2) * 0x10 + iVar1);
  if (iVar4 == 1) {
    FUN_004060d0((int)param_1,*(float *)(iVar5 + 0x28),*(float *)(iVar5 + 0x30),'\0');
  }
  else if (iVar4 == 2) {
    FUN_00405c80((int)param_1);
    if (50.0 <= *(float *)(&DAT_005cec54 + iVar1)) {
      (&DAT_005ceadd)[iVar1] = 0;
    }
    else {
      (&DAT_005ceadd)[iVar1] = 1;
    }
  }
  FUN_00406390((int)param_1);
  if ((*(char *)(iVar5 + 0x48) != '\0') &&
     (*(int *)(iVar5 + 0x4c) <= *(int *)(&DAT_005cec0c + iVar1))) {
    puVar9 = (undefined4 *)
             FUN_004a71e0(*(int *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0x34 + DAT_00715e50) -
                          *(int *)(iVar5 + 0x50));
    FUN_0040e5a0((&DAT_005ce9e8)[(int)param_1 * 0xa5],puVar9,'\0');
  }
  FUN_0041eeb0((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


