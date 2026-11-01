
/* ==== FUN_0044df70 @ 0044df70 ==== 
 * signature: int __cdecl FUN_0044df70(int param_1)
 * body: 0044df70-0044e0a7
 */

int __cdecl FUN_0044df70(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  pfVar1 = (float *)(DAT_00715f00 + 0x58 + DAT_006c356c * 0x994);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  iVar10 = DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  fVar5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar8 = *(float *)(iVar10 + 0x54) - *(float *)(iVar10 + 8);
  fVar9 = *(float *)(iVar10 + 0x58) - *(float *)(iVar10 + 0xc);
  fVar7 = *(float *)(iVar10 + 0x5c) - *(float *)(iVar10 + 0x10);
  fVar6 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
  fVar2 = (fVar8 / fVar6) * (fVar2 / fVar5) +
          (fVar9 / fVar6) * (fVar3 / fVar5) + (fVar7 / fVar6) * (fVar4 / fVar5);
  if (fVar2 <= 0.0) {
    if (fVar2 < -0.5736) {
      iVar10 = (DAT_006c356c - DAT_006fb8b0) + param_1;
      goto LAB_0044e094;
    }
LAB_0044e088:
    param_1 = DAT_006fb8b0 / 2;
  }
  else if (fVar2 <= 0.5736) goto LAB_0044e088;
  iVar10 = DAT_006c356c - param_1;
LAB_0044e094:
  if (iVar10 < 0) {
    iVar10 = iVar10 + -1 + DAT_00715258;
  }
  return iVar10;
}


