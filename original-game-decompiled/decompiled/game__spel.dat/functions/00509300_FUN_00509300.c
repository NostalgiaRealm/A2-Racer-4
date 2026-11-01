
/* ==== FUN_00509300 @ 00509300 ==== 
 * signature: undefined __cdecl FUN_00509300(float * param_1, int param_2, int param_3, double * param_4)
 * body: 00509300-00509411
 */

void __cdecl FUN_00509300(float *param_1,int param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (double)*param_1;
  dVar1 = (double)param_1[1];
  iVar3 = *(int *)(param_2 + 8);
  dVar2 = (double)param_1[2];
  iVar4 = *(int *)(param_3 + 8);
  dVar6 = (*(double *)(iVar3 + 0x40) * dVar2 +
           *(double *)(iVar3 + 0x38) * dVar1 + *(double *)(iVar3 + 0x30) * dVar5 +
          *(double *)(iVar3 + 0x90)) - *(double *)(iVar4 + 0x90);
  dVar7 = (*(double *)(iVar3 + 0x60) * dVar2 +
           *(double *)(iVar3 + 0x58) * dVar1 + *(double *)(iVar3 + 0x50) * dVar5 +
          *(double *)(iVar3 + 0x98)) - *(double *)(iVar4 + 0x98);
  dVar1 = (*(double *)(iVar3 + 0x80) * dVar2 +
           *(double *)(iVar3 + 0x78) * dVar1 + dVar5 * *(double *)(iVar3 + 0x70) +
          *(double *)(iVar3 + 0xa0)) - *(double *)(iVar4 + 0xa0);
  *param_4 = *(double *)(iVar4 + 0x30) * dVar6 +
             *(double *)(iVar4 + 0x50) * dVar7 + *(double *)(iVar4 + 0x70) * dVar1;
  param_4[1] = *(double *)(iVar4 + 0x38) * dVar6 +
               *(double *)(iVar4 + 0x58) * dVar7 + *(double *)(iVar4 + 0x78) * dVar1;
  param_4[2] = *(double *)(iVar4 + 0x40) * dVar6 +
               *(double *)(iVar4 + 0x60) * dVar7 + *(double *)(iVar4 + 0x80) * dVar1;
  return;
}


