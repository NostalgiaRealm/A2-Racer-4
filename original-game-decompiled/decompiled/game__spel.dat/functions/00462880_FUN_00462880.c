
/* ==== FUN_00462880 @ 00462880 ==== 
 * signature: undefined4 __cdecl FUN_00462880(int param_1)
 * body: 00462880-00462a34
 */

undefined4 __cdecl FUN_00462880(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  longlong lVar18;
  
  puVar13 = DAT_00709af8;
  if (((param_1 != 0) && (DAT_00709af8 != (undefined4 *)0x0)) &&
     (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x7c))) {
    puVar1 = DAT_00709af8 + 1;
    uVar12 = DAT_00709af8[1];
    if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x78) = DAT_00709af8;
      DAT_00709af8 = (undefined4 *)uVar12;
      uVar12 = DAT_00709af8;
    }
    DAT_00709af8 = (undefined4 *)uVar12;
    uVar12 = *(undefined4 *)(param_1 + 0x78);
    *puVar13 = 0;
    *puVar1 = uVar12;
    *(undefined4 **)(param_1 + 0x78) = puVar13;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    fVar15 = FUN_004626d0();
    fVar3 = *(float *)(param_1 + 100);
    fVar4 = *(float *)(param_1 + 0x60);
    fVar16 = FUN_004626d0();
    pfVar2 = (float *)(puVar13 + 8);
    FUN_004626f0((float)(fVar16 * (float10)*(float *)(param_1 + 0x6c) +
                        (float10)*(float *)(param_1 + 0x68)),
                 (float)(fVar15 * (float10)fVar3 + (float10)fVar4),pfVar2);
    fVar15 = FUN_004626d0();
    fVar15 = fVar15 * (float10)*(float *)(param_1 + 0x74) + (float10)*(float *)(param_1 + 0x70);
    *pfVar2 = (float)(fVar15 * (float10)*pfVar2);
    puVar13[9] = (float)(fVar15 * (float10)(float)puVar13[9]);
    puVar13[10] = (float)(fVar15 * (float10)(float)puVar13[10]);
    fVar15 = FUN_004626d0();
    fVar3 = (float)(fVar15 * (float10)*(float *)(param_1 + 0xa0) +
                   (float10)*(float *)(param_1 + 0x94));
    fVar15 = FUN_004626d0();
    fVar4 = (float)(fVar15 * (float10)*(float *)(param_1 + 0xa4) +
                   (float10)*(float *)(param_1 + 0x98));
    fVar15 = FUN_004626d0();
    fVar5 = (float)(fVar15 * (float10)*(float *)(param_1 + 0xa8) +
                   (float10)*(float *)(param_1 + 0x9c));
    fVar15 = FUN_004626d0();
    fVar6 = *(float *)(param_1 + 0xb8);
    fVar7 = *(float *)(param_1 + 0xac);
    fVar16 = FUN_004626d0();
    fVar8 = *(float *)(param_1 + 0xbc);
    fVar9 = *(float *)(param_1 + 0xb0);
    fVar17 = FUN_004626d0();
    fVar10 = *(float *)(param_1 + 0xc0);
    fVar11 = *(float *)(param_1 + 0xb4);
    puVar13[0xc] = fVar3;
    puVar13[0xd] = fVar4;
    puVar13[0xe] = fVar5;
    FUN_004626d0();
    lVar18 = __ftol();
    iVar14 = (int)lVar18 + *(int *)(param_1 + 0x8c);
    puVar13[0xb] = iVar14;
    puVar13[0x12] = ((float)(fVar15 * (float10)fVar6 + (float10)fVar7) - fVar3) / (float)iVar14;
    puVar13[0x13] =
         ((float)(fVar16 * (float10)fVar8 + (float10)fVar9) - fVar4) / (float)(int)puVar13[0xb];
    puVar13[0x14] =
         ((float)(fVar17 * (float10)fVar10 + (float10)fVar11) - fVar5) / (float)(int)puVar13[0xb];
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    return 1;
  }
  return 0;
}


