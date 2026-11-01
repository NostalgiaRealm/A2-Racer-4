
/* ==== FUN_00509120 @ 00509120 ==== 
 * signature: undefined __cdecl FUN_00509120(uint * param_1, int * param_2, int param_3, double * param_4)
 * body: 00509120-0050921f
 */

void __cdecl FUN_00509120(uint *param_1,int *param_2,int param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float *pfVar9;
  
  iVar4 = param_2[2];
  pfVar9 = (float *)((*param_1 & 0xffff) * 0x10 + *param_2);
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  fVar3 = pfVar9[2];
  iVar5 = *(int *)(param_3 + 8);
  dVar6 = (double)((float)*(double *)(iVar4 + 0x40) * fVar3 +
                   (float)*(double *)(iVar4 + 0x38) * fVar2 +
                   (float)*(double *)(iVar4 + 0x30) * fVar1 + (float)*(double *)(iVar4 + 0x90)) -
          *(double *)(iVar5 + 0x90);
  dVar8 = (double)((float)*(double *)(iVar4 + 0x60) * fVar3 +
                   (float)*(double *)(iVar4 + 0x58) * fVar2 +
                   (float)*(double *)(iVar4 + 0x50) * fVar1 + (float)*(double *)(iVar4 + 0x98)) -
          *(double *)(iVar5 + 0x98);
  dVar7 = (double)((float)*(double *)(iVar4 + 0x80) * fVar3 +
                   (float)*(double *)(iVar4 + 0x78) * fVar2 +
                   fVar1 * (float)*(double *)(iVar4 + 0x70) + (float)*(double *)(iVar4 + 0xa0)) -
          *(double *)(iVar5 + 0xa0);
  *param_4 = *(double *)(iVar5 + 0x30) * dVar6 +
             *(double *)(iVar5 + 0x50) * dVar8 + *(double *)(iVar5 + 0x70) * dVar7;
  param_4[1] = *(double *)(iVar5 + 0x38) * dVar6 +
               *(double *)(iVar5 + 0x58) * dVar8 + *(double *)(iVar5 + 0x78) * dVar7;
  param_4[2] = *(double *)(iVar5 + 0x40) * dVar6 +
               *(double *)(iVar5 + 0x60) * dVar8 + *(double *)(iVar5 + 0x80) * dVar7;
  return;
}


