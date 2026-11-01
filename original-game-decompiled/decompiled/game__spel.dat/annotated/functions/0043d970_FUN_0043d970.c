
/* ==== FUN_0043d970 @ 0043d970 ==== 
 * signature: undefined __cdecl FUN_0043d970(int param_1)
 * body: 0043d970-0043da78
 */

void __cdecl FUN_0043d970(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  
  iVar9 = param_1 * 300;
  pfVar1 = (float *)(&DAT_006c4308 + iVar9);
  fVar5 = *pfVar1;
  fVar6 = *(float *)(&DAT_006c430c + iVar9);
  fVar7 = *(float *)(&DAT_006c4310 + iVar9);
  fVar12 = FUN_004a6800(0x7128b0);
  fVar12 = fVar12 * (float10)10.0;
  fVar13 = FUN_004a6800(0x7128b0);
  fVar13 = fVar13 * (float10)20.0;
  if ((float10)0.99 < fVar13) {
    fVar13 = (float10)0.99;
  }
  *pfVar1 = (float)(fVar13 * (float10)*pfVar1);
  *(float *)(&DAT_006c430c + iVar9) = (float)(fVar13 * (float10)*(float *)(&DAT_006c430c + iVar9));
  *(float *)(&DAT_006c4310 + iVar9) = (float)(fVar13 * (float10)*(float *)(&DAT_006c4310 + iVar9));
  fVar2 = *(float *)(&DAT_006c4238 + iVar9);
  fVar3 = *(float *)(&DAT_006c423c + iVar9);
  fVar4 = *(float *)(&DAT_006c4240 + iVar9);
  puVar10 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar11 = &DAT_006c4208 + param_1 * 0x4b;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(float *)(&DAT_006c4238 + iVar9) = (float)(fVar12 * (float10)fVar5) + fVar2;
  *(float *)(&DAT_006c423c + iVar9) = (float)(fVar12 * (float10)fVar6) + fVar3;
  *(float *)(&DAT_006c4240 + iVar9) = (float)(fVar12 * (float10)fVar7) + fVar4;
  return;
}


