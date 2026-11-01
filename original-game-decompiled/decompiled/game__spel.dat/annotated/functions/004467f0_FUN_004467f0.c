
/* ==== FUN_004467f0 @ 004467f0 ==== 
 * signature: undefined __cdecl FUN_004467f0(int param_1)
 * body: 004467f0-004469a4
 */

void __cdecl FUN_004467f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float10 fVar14;
  
  iVar7 = FUN_004463c0(param_1);
  fVar4 = *(float *)(&DAT_006f5190 + iVar7 * 300);
  fVar5 = *(float *)(&DAT_006f5194 + iVar7 * 300);
  fVar6 = *(float *)(&DAT_006f5198 + iVar7 * 300);
  fVar13 = FUN_004a6800(0x7128b0);
  fVar13 = fVar13 * (float10)10.0;
  fVar14 = FUN_004a6800(0x7128b0);
  fVar14 = fVar14 * (float10)15.0;
  if ((float10)0.99 < fVar14) {
    fVar14 = (float10)0.99;
  }
  fVar1 = (float)fVar14;
  iVar8 = FUN_004463c0(param_1);
  iVar7 = iVar8 * 300;
  *(float *)(&DAT_006f5190 + iVar7) = fVar1 * *(float *)(&DAT_006f5190 + iVar8 * 300);
  *(float *)(&DAT_006f5194 + iVar7) = fVar1 * *(float *)(&DAT_006f5194 + iVar7);
  *(float *)(&DAT_006f5198 + iVar7) = fVar1 * *(float *)(&DAT_006f5198 + iVar7);
  iVar7 = FUN_004463c0(param_1);
  fVar1 = *(float *)(&DAT_006f50c0 + iVar7 * 300);
  iVar7 = FUN_004463c0(param_1);
  fVar2 = *(float *)(&DAT_006f50c4 + iVar7 * 300);
  iVar7 = FUN_004463c0(param_1);
  iVar8 = (&DAT_006c3518)[DAT_006c3568];
  fVar3 = *(float *)(&DAT_006f50c8 + iVar7 * 300);
  iVar7 = DAT_00719b50 + 0x14;
  iVar9 = FUN_004463c0(param_1);
  puVar11 = (undefined4 *)(iVar7 + iVar8 * 0x178);
  puVar12 = (undefined4 *)(&DAT_006f5090 + iVar9 * 300);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  iVar7 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f50c0 + iVar7 * 300) = (float)(fVar13 * (float10)fVar4) + fVar1;
  iVar7 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f50c4 + iVar7 * 300) = (float)(fVar13 * (float10)fVar5) + fVar2;
  iVar7 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f50c8 + iVar7 * 300) = (float)(fVar13 * (float10)fVar6) + fVar3;
  return;
}


