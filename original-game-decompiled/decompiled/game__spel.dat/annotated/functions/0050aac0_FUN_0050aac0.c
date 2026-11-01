
/* ==== FUN_0050aac0 @ 0050aac0 ==== 
 * signature: undefined __thiscall FUN_0050aac0(int param_1, double * param_2, double param_3)
 * body: 0050aac0-0050ab55
 */

void __thiscall FUN_0050aac0(int param_1,double *param_2,double param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  
  pdVar2 = *(double **)(param_1 + 0xc);
  pdVar1 = (double *)(*(int *)(*(int *)(param_1 + 0x24) + 0x18) + 0x120);
  dVar4 = *pdVar1;
  dVar3 = *pdVar1;
  if (pdVar2 != (double *)0x0) {
    FUN_0050e2c0(pdVar2 + 4,*(int *)(param_1 + 4));
    uVar5 = FUN_0050dfd0(pdVar2 + 4,param_1,
                         (float)(((float10)dVar3 - (float10)*pdVar2) *
                                 (float10)*(float *)(pdVar2 + 1) + (float10)*(float *)(pdVar2 + 2) +
                                (float10)param_3));
    *(uint *)(param_1 + 4) = uVar5;
    return;
  }
  *(double **)(param_1 + 0xc) = param_2;
  uVar5 = FUN_0050dfd0(param_2 + 4,param_1,
                       (float)(((float10)dVar4 - (float10)*param_2) *
                               (float10)*(float *)(param_2 + 1) + (float10)*(float *)(param_2 + 2) +
                              (float10)param_3));
  *(uint *)(param_1 + 4) = uVar5;
  return;
}


