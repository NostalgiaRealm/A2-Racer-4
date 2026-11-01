
/* ==== FUN_00509220 @ 00509220 ==== 
 * signature: undefined __cdecl FUN_00509220(double * param_1, int param_2, int param_3, double * param_4)
 * body: 00509220-005092f9
 */

void __cdecl FUN_00509220(double *param_1,int param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar4 = *(int *)(param_2 + 8);
  dVar6 = *(double *)(iVar4 + 0x30) * *param_1 +
          *(double *)(iVar4 + 0x38) * param_1[1] + *(double *)(iVar4 + 0x40) * param_1[2];
  dVar8 = *(double *)(iVar4 + 0x50) * *param_1 +
          *(double *)(iVar4 + 0x58) * param_1[1] + *(double *)(iVar4 + 0x60) * param_1[2];
  iVar5 = *(int *)(param_3 + 8);
  dVar7 = *(double *)(iVar4 + 0x70) * *param_1 +
          *(double *)(iVar4 + 0x78) * param_1[1] + *(double *)(iVar4 + 0x80) * param_1[2];
  dVar1 = *(double *)(iVar5 + 0x38);
  dVar2 = *(double *)(iVar5 + 0x58);
  dVar3 = *(double *)(iVar5 + 0x78);
  dVar11 = *(double *)(iVar5 + 0x40);
  dVar10 = *(double *)(iVar5 + 0x60);
  dVar9 = *(double *)(iVar5 + 0x80);
  *param_4 = *(double *)(iVar5 + 0x30) * dVar6 +
             *(double *)(iVar5 + 0x50) * dVar8 + *(double *)(iVar5 + 0x70) * dVar7;
  param_4[1] = dVar1 * dVar6 + dVar2 * dVar8 + dVar7 * dVar3;
  param_4[2] = dVar11 * dVar6 + dVar10 * dVar8 + dVar7 * dVar9;
  return;
}


