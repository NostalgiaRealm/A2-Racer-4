
/* ==== FUN_0041fca0 @ 0041fca0 ==== 
 * signature: undefined __cdecl FUN_0041fca0(float param_1)
 * body: 0041fca0-0041fcc6;0041fcca-004200d6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041fcc7-0041fcc9
 */

void __cdecl FUN_0041fca0(float param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  if (((int)param_1 < 0) || (0x12 < (int)param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Illegal_FSM_object_inde_00595004);
  }
  iVar2 = (int)param_1 * 0x294;
  piVar3 = &DAT_005ce9e8 + (int)param_1 * 0xa5;
  iVar10 = *(int *)(&DAT_005cebe4 + iVar2);
  iVar11 = *(int *)(&DAT_005ceabc + iVar2);
  puVar7 = FUN_0040ebe0();
  if (iVar11 < 0) {
LAB_0041fd15:
    iVar8 = 0;
  }
  else {
    iVar8 = (*(code *)**(undefined4 **)(puVar7 + 0x24))();
    if (iVar8 <= iVar11) goto LAB_0041fd15;
    iVar8 = 1;
  }
  FUN_004a6980(iVar8,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar8 = *(int *)(*(int *)(puVar7 + 0x28) + 4);
  if ((&DAT_005ce9f8)[iVar2] != '\0') {
    (&DAT_005ce9f8)[iVar2] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar2) = 3;
    uVar9 = FUN_00558625();
    *(float *)(&DAT_005cec28 + iVar2) = (float)((int)uVar9 % 3 + 2);
    *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
    *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
    (&DAT_005ceadc)[iVar2] = 0;
    (&DAT_005ceadd)[iVar2] = 0;
  }
  fVar12 = *(float *)(iVar8 + iVar11 * 0x54 + 0x30);
  pfVar1 = (float *)(&DAT_005cebf4 + iVar2);
  *(float *)(&DAT_005cec00 + iVar2) = *pfVar1;
  *(undefined4 *)(&DAT_005cec04 + iVar2) = *(undefined4 *)(&DAT_005cebf8 + iVar2);
  *(undefined4 *)(&DAT_005cec08 + iVar2) = *(undefined4 *)(&DAT_005cebfc + iVar2);
  fVar12 = fVar12 * 28.0 + 4.0;
  iVar11 = DAT_0073b0d0 +
           *(int *)(*(int *)((iVar10 + 2) * 0x10 + iVar2 + 0x5ceac4) * 0xf0 + 0x24 + DAT_00715e50) *
           0xa9;
  *pfVar1 = *(float *)(iVar11 + 0x50);
  *(undefined4 *)(&DAT_005cebf8 + iVar2) = *(undefined4 *)(iVar11 + 0x54);
  *(undefined4 *)(&DAT_005cebfc + iVar2) = *(undefined4 *)(iVar11 + 0x58);
  iVar10 = *(int *)(&DAT_005cec3c + iVar2);
  if (iVar10 == 0) {
    if (*(float *)(&DAT_005cec28 + iVar2) <= 0.0) {
LAB_00420064:
      uVar9 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar2) = 1;
      *(undefined4 *)(&DAT_005cec40 + iVar2) = 3;
      *(float *)(&DAT_005cec28 + iVar2) = (float)((int)uVar9 % 3 + 2);
    }
    else {
      iVar10 = *(int *)(*piVar3 * 0xf0 + 0x24 + DAT_00715e50);
      iVar11 = DAT_0073b0d0 + iVar10;
      fVar4 = *pfVar1 - *(float *)(iVar11 + 0x50 + iVar10 * 0xa8);
      fVar6 = *(float *)(&DAT_005cebf8 + iVar2) - *(float *)(iVar11 + 0x54 + iVar10 * 0xa8);
      fVar5 = *(float *)(&DAT_005cebfc + iVar2) - *(float *)(iVar11 + iVar10 * 0xa8 + 0x58);
      if (300.0 <= SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5)) goto LAB_00420064;
      *(undefined4 *)(&DAT_005cead0 + iVar2) = 0;
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
      *(float *)(&DAT_005cead8 + iVar2) = fVar12 * 0.6 + *(float *)(&DAT_005cead8 + iVar2);
    }
    fVar12 = *(float *)(&DAT_005cead0 + iVar2);
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 == 3) {
        if (0.0 < *(float *)(&DAT_005cec28 + iVar2)) {
          iVar10 = *(int *)(*piVar3 * 0xf0 + 0x24 + DAT_00715e50);
          iVar8 = DAT_0073b0d0 + iVar10;
          fVar4 = *pfVar1 - *(float *)(iVar8 + 0x50 + iVar10 * 0xa8);
          fVar5 = *(float *)(&DAT_005cebf8 + iVar2) - *(float *)(iVar8 + 0x54 + iVar10 * 0xa8);
          fVar6 = *(float *)(&DAT_005cebfc + iVar2) - *(float *)(iVar8 + iVar10 * 0xa8 + 0x58);
          if (40.0 <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6)) {
            FUN_00403a70(param_1,*(float *)(iVar11 + 0x50),*(float *)(iVar11 + 0x54),
                         *(float *)(iVar11 + 0x58));
            *(float *)(&DAT_005cead4 + iVar2) = fVar12 + *(float *)(&DAT_005cead4 + iVar2);
            *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
            FUN_0041eeb0((int)param_1);
            return;
          }
        }
        uVar9 = FUN_00558625();
        *(undefined4 *)(&DAT_005cec3c + iVar2) = 1;
        *(undefined4 *)(&DAT_005cec40 + iVar2) = 0;
        *(float *)(&DAT_005cec28 + iVar2) = (float)((int)uVar9 % 3 + 2);
        FUN_0041eeb0((int)param_1);
        return;
      }
      goto LAB_004200c4;
    }
    *(undefined4 *)(&DAT_005cead0 + iVar2) = 0;
    fVar12 = *(float *)(*piVar3 * 0xf0 + 0xc4 + DAT_00715e50) * 3.6;
    if (fVar12 <= 0.0) {
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0x42c80000;
      *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
    }
    else {
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
      *(undefined4 *)(&DAT_005cead8 + iVar2) = 0x42c80000;
    }
    if (ABS(fVar12) < 2.0) {
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
      *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
      if (*(int *)(&DAT_005cec40 + iVar2) == 3) {
        uVar9 = FUN_00558625();
        iVar10 = (int)uVar9 % 3 + 0xb;
      }
      else {
        uVar9 = FUN_00558625();
        iVar10 = (int)uVar9 % 3 + 2;
      }
      *(float *)(&DAT_005cec28 + iVar2) = (float)iVar10;
      *(undefined4 *)(&DAT_005cec3c + iVar2) = *(undefined4 *)(&DAT_005cec40 + iVar2);
    }
    fVar12 = *(float *)(&DAT_005cead0 + iVar2);
  }
  FUN_00402de0(&DAT_005cea7c + iVar2,fVar12);
LAB_004200c4:
  FUN_0041eeb0((int)param_1);
  return;
}


