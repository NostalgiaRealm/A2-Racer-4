
/* ==== FUN_00509d60 @ 00509d60 ==== 
 * signature: float10 __cdecl FUN_00509d60(int * param_1, uint * param_2, double * param_3)
 * body: 00509d60-00509e82
 */

float10 __cdecl FUN_00509d60(int *param_1,uint *param_2,double *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  pfVar7 = (float *)((*param_2 & 0xffff) * 0x10 + *param_1 + (int)param_1);
  pfVar8 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2) &
                     0xffff) * 0x10 + *param_1 + (int)param_1);
  fVar2 = *pfVar8 - *pfVar7;
  fVar4 = pfVar8[1] - pfVar7[1];
  fVar5 = pfVar8[2] - pfVar7[2];
  fVar3 = (float)*param_3 - *pfVar7;
  dVar6 = param_3[1] - (double)pfVar7[1];
  fVar9 = (float10)param_3[2] - (float10)pfVar7[2];
  dVar1 = (double)((float10)dVar6 * (float10)fVar5 - fVar9 * (float10)fVar4);
  fVar10 = fVar9 * (float10)fVar2 - (float10)fVar3 * (float10)fVar5;
  fVar9 = (float10)((double)fVar3 * (double)fVar4 - dVar6 * (double)fVar2);
  return ((float10)dVar1 * (float10)dVar1 + fVar10 * fVar10 + fVar9 * fVar9) *
         ((float10)1.0 /
         ((float10)(pfVar7[1] - pfVar8[1]) * (float10)(pfVar7[1] - pfVar8[1]) +
         (float10)(*pfVar7 - *pfVar8) * (float10)(*pfVar7 - *pfVar8) +
         (float10)(pfVar7[2] - pfVar8[2]) * (float10)(pfVar7[2] - pfVar8[2])));
}


