
/* ==== FUN_004fe580 @ 004fe580 ==== 
 * signature: undefined __fastcall FUN_004fe580(undefined4 * param_1)
 * body: 004fe580-004fe7d5
 */

void __fastcall FUN_004fe580(undefined4 *param_1)

{
  double *this;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double *pdVar26;
  double dVar27;
  int iVar28;
  undefined4 *puVar29;
  double *pdVar30;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  this = (double *)(param_1 + 4);
  iVar23 = *(int *)(param_1[2] + 0x18);
  dVar5 = *(double *)(iVar23 + 0x120);
  *param_1 = *(undefined4 *)(iVar23 + 0x138);
  iVar23 = *(int *)(param_1[2] + 0xa4);
  if (dVar5 - *(double *)(iVar23 + 0x68) == 0.0) {
    puVar29 = (undefined4 *)(iVar23 + 0xe8);
    pdVar30 = this;
    for (iVar28 = 8; iVar28 != 0; iVar28 = iVar28 + -1) {
      *(undefined4 *)pdVar30 = *puVar29;
      puVar29 = puVar29 + 1;
      pdVar30 = (double *)((int)pdVar30 + 4);
    }
    uVar3 = *(undefined8 *)(iVar23 + 0xc0);
    uVar24 = *(undefined4 *)(iVar23 + 200);
    uVar25 = *(undefined4 *)(iVar23 + 0xcc);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(iVar23 + 0xb8);
    param_1[0x28] = uVar24;
    param_1[0x29] = uVar25;
    *(undefined8 *)(param_1 + 0x26) = uVar3;
    uVar3 = *(undefined8 *)(iVar23 + 0xc0);
    uVar4 = *(undefined8 *)(iVar23 + 0xb8);
    uVar24 = *(undefined4 *)(iVar23 + 0xcc);
    param_1[0x30] = *(undefined4 *)(iVar23 + 200);
    *(undefined8 *)(param_1 + 0x2c) = uVar4;
    *(undefined8 *)(param_1 + 0x2e) = uVar3;
    param_1[0x31] = uVar24;
  }
  else {
    FUN_004f8d60(this,(double *)(iVar23 + 0xe8),(double *)(iVar23 + 0x108),
                 (dVar5 - *(double *)(iVar23 + 0x68)) * (double)*(float *)(iVar23 + 0x70));
    iVar23 = *(int *)(param_1[2] + 0xa4);
    dVar5 = dVar5 - *(double *)(iVar23 + 0x68);
    fVar1 = *(float *)(iVar23 + 0xdc);
    dVar6 = *(double *)(iVar23 + 0xc0);
    dVar8 = (double)*(float *)(iVar23 + 0xe0) * dVar5 + *(double *)(iVar23 + 200);
    fVar2 = *(float *)(iVar23 + 0xd8);
    dVar7 = *(double *)(iVar23 + 0xb8);
    uStack_14 = (undefined4)((ulonglong)dVar8 >> 0x20);
    *(double *)(param_1 + 0x28) = dVar8;
    *(double *)(param_1 + 0x24) = (double)fVar2 * dVar5 + dVar7;
    *(double *)(param_1 + 0x26) = (double)fVar1 * dVar5 + dVar6;
    *(double *)(param_1 + 0x2c) = *(double *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x26);
    param_1[0x30] = param_1[0x28];
    param_1[0x31] = uStack_14;
  }
  pdVar30 = (double *)(param_1 + 0xc);
  FUN_004f8b00(this,pdVar30);
  if ((*(uint *)(param_1[2] + 0x80) & 0xc00) == 0) {
    FUN_004fadc0(pdVar30,(float *)(param_1[2] + 0x30),(double *)(param_1 + 0x24));
  }
  pdVar26 = *(double **)(param_1[2] + 0x2c);
  if (pdVar26 != (double *)0x0) {
    dVar5 = pdVar26[1];
    dVar6 = *(double *)(param_1 + 10);
    dVar7 = *pdVar26;
    dVar8 = *(double *)(param_1 + 8);
    dVar9 = pdVar26[3];
    dVar10 = pdVar26[2];
    dVar11 = *this;
    dVar12 = pdVar26[2];
    dVar13 = *(double *)(param_1 + 10);
    dVar14 = pdVar26[1];
    dVar15 = pdVar26[3];
    dVar16 = *pdVar26;
    dVar27 = ((pdVar26[3] * *(double *)(param_1 + 10) - *this * *pdVar26) -
             *(double *)(param_1 + 6) * pdVar26[1]) - pdVar26[2] * *(double *)(param_1 + 8);
    dVar17 = pdVar26[2];
    dVar18 = *pdVar26;
    dVar19 = *(double *)(param_1 + 10);
    local_10 = SUB84(dVar27,0);
    dVar20 = pdVar26[3];
    dVar21 = pdVar26[1];
    dVar22 = *(double *)(param_1 + 8);
    param_1[10] = local_10;
    uStack_c = (undefined4)((ulonglong)dVar27 >> 0x20);
    *(double *)(param_1 + 8) =
         (dVar15 * *(double *)(param_1 + 8) + dVar14 * *this + dVar12 * dVar13) -
         *(double *)(param_1 + 6) * dVar16;
    param_1[0xb] = uStack_c;
    *this = (dVar20 * *this + dVar18 * dVar19 + dVar17 * *(double *)(param_1 + 6)) - dVar21 * dVar22
    ;
    *(double *)(param_1 + 6) =
         (dVar9 * *(double *)(param_1 + 6) + dVar7 * dVar8 + dVar5 * dVar6) - dVar10 * dVar11;
    FUN_004f8b00(this,pdVar30);
  }
  return;
}


