
/* ==== FUN_005094e0 @ 005094e0 ==== 
 * signature: undefined __cdecl FUN_005094e0(int * param_1, uint param_2, double * param_3, int param_4)
 * body: 005094e0-00509668
 */

void __cdecl FUN_005094e0(int *param_1,uint param_2,double *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  
  uVar12 = param_2 & 0xfffffff0;
  iVar1 = *param_1;
  iVar14 = (*(uint *)(uVar12 + 4) & 0xffff) * 0x10 + iVar1;
  pfVar13 = (float *)((*(uint *)(uVar12 + 8) & 0xffff) * 0x10 + iVar1 + (int)param_1);
  uVar16 = (int)param_2 >> 2 & 3;
  fVar2 = *(float *)(iVar14 + (int)param_1) - *pfVar13;
  fVar6 = *(float *)((int)param_1 + iVar14 + 4) - pfVar13[1];
  fVar5 = *(float *)((int)param_1 + iVar14 + 8) - pfVar13[2];
  pfVar15 = (float *)((*(uint *)(uVar12 + 0xc) & 0xffff) * 0x10 + iVar1 + (int)param_1);
  fVar8 = *pfVar15 - *pfVar13;
  fVar10 = pfVar15[1] - pfVar13[1];
  fVar9 = pfVar15[2] - pfVar13[2];
  fVar4 = fVar6 * fVar6 + fVar2 * fVar2 + fVar5 * fVar5;
  fVar7 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar3 = fVar8 * fVar2 + fVar10 * fVar6 + fVar9 * fVar5;
  fVar11 = fVar7 * fVar4 - fVar3 * fVar3;
  fVar2 = ((float)*param_3 - *pfVar13) * fVar2 +
          ((float)param_3[1] - pfVar13[1]) * fVar6 + ((float)param_3[2] - pfVar13[2]) * fVar5;
  fVar5 = ((float)*param_3 - *pfVar13) * fVar8 +
          ((float)param_3[1] - pfVar13[1]) * fVar10 + ((float)param_3[2] - pfVar13[2]) * fVar9;
  fVar6 = fVar2 * fVar7 - fVar5 * fVar3;
  fVar2 = fVar5 * fVar4 - fVar2 * fVar3;
  *(float *)(param_4 + 0xc) = fVar11;
  *(float *)((char)(&DAT_005b9793)[uVar16] + param_4) = fVar2;
  *(float *)((char)(&DAT_005b9794)[uVar16] + param_4) = (fVar11 - fVar6) - fVar2;
  *(float *)((char)(&DAT_005b9795)[uVar16] + param_4) = fVar6;
  return;
}


