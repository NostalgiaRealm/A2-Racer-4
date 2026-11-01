
/* ==== FUN_00509420 @ 00509420 ==== 
 * signature: undefined __cdecl FUN_00509420(int * param_1, uint * param_2, double * param_3, float * param_4)
 * body: 00509420-005094d6
 */

void __cdecl FUN_00509420(int *param_1,uint *param_2,double *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float *pfVar13;
  float *pfVar14;
  
  pfVar13 = (float *)((*param_2 & 0xffff) * 0x10 + *param_1 + (int)param_1);
  pfVar14 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2) &
                      0xffff) * 0x10 + *param_1 + (int)param_1);
  fVar1 = *pfVar14;
  fVar2 = *pfVar13;
  fVar3 = pfVar14[1];
  fVar4 = pfVar13[1];
  fVar5 = pfVar14[2];
  fVar6 = pfVar13[2];
  fVar7 = *pfVar14;
  dVar10 = *param_3;
  fVar8 = pfVar14[1];
  dVar11 = param_3[1];
  fVar9 = pfVar14[2];
  dVar12 = param_3[2];
  *param_4 = -((*pfVar13 - (float)*param_3) * (fVar1 - fVar2) +
              (fVar3 - fVar4) * (pfVar13[1] - (float)param_3[1]) +
              (fVar5 - fVar6) * (pfVar13[2] - (float)param_3[2]));
  param_4[1] = (fVar7 - (float)dVar10) * (fVar1 - fVar2) +
               (fVar3 - fVar4) * (fVar8 - (float)dVar11) + (fVar5 - fVar6) * (fVar9 - (float)dVar12)
  ;
  return;
}


