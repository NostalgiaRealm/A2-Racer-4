
/* ==== FUN_00509870 @ 00509870 ==== 
 * signature: undefined4 __cdecl FUN_00509870(undefined4 * param_1, float * param_2)
 * body: 00509870-00509c1c
 */

undefined4 __cdecl FUN_00509870(undefined4 *param_1,float *param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  int local_c0;
  int local_b8;
  double local_b0;
  float local_a4;
  float local_a0;
  double local_9c;
  double local_94;
  double local_8c;
  float local_7c [13];
  double local_48 [4];
  double local_28 [4];
  
  if (*(double *)(param_1 + 0x2a) * *(double *)(param_1 + 0x2a) +
      *(double *)(param_1 + 0x28) * *(double *)(param_1 + 0x28) +
      *(double *)(param_1 + 0x26) * *(double *)(param_1 + 0x26) <= 9.999999999999999e-19) {
    local_b0 = 1e+101;
    piVar2 = *(int **)(param_1[0x25] + 4);
    local_7c[0] = -1.0;
    local_7c[1] = 0.5;
    local_7c[2] = 2.0;
    local_7c[3] = 0.0;
    local_7c[4] = 1.0;
    local_7c[5] = -0.001;
    local_7c[6] = 0.001;
    local_7c[7] = 0.999;
    local_7c[8] = 1.001;
    local_7c[9] = -1e-06;
    local_7c[10] = 1e-06;
    local_7c[0xb] = 0.999999;
    local_7c[0xc] = 1.000001;
    pfVar7 = local_7c;
    local_b8 = 0xb;
    do {
      fVar3 = *pfVar7;
      FUN_004f9360(&local_9c,(double *)(param_1 + 2),(double *)(param_1 + 10),(double)fVar3);
      fVar8 = FUN_00509d60(piVar2,(uint *)param_1[0x23],&local_9c);
      if (fVar8 < (float10)local_b0) {
        local_b0 = (double)fVar8;
        *param_2 = fVar3;
        param_2[1] = 1.0 - fVar3;
        FUN_00509420(piVar2,(uint *)param_1[0x23],&local_9c,&local_a4);
        param_2[2] = local_a4;
        param_2[3] = local_a0;
      }
      pfVar7 = pfVar7 + 1;
      local_b8 = local_b8 + -1;
    } while (local_b8 != 0);
    FUN_00509300((float *)*param_1,param_1[0x25],param_1[0x24],local_48);
    FUN_00509300((float *)param_1[1],param_1[0x25],param_1[0x24],local_28);
    pfVar7 = local_7c;
    local_c0 = 9;
    piVar2 = *(int **)(param_1[0x24] + 4);
    do {
      fVar3 = *pfVar7;
      FUN_004f9360(&local_9c,local_48,local_28,(double)fVar3);
      fVar8 = FUN_00509d60(piVar2,(uint *)param_1[0x22],&local_9c);
      if (fVar8 < (float10)local_b0) {
        local_b0 = (double)fVar8;
        param_2[2] = fVar3;
        param_2[3] = 1.0 - fVar3;
        FUN_00509420(piVar2,(uint *)param_1[0x22],&local_9c,&local_a4);
        *param_2 = local_a4;
        param_2[1] = local_a0;
      }
      pfVar7 = pfVar7 + 1;
      local_c0 = local_c0 + -1;
    } while (local_c0 != 0);
    return 0;
  }
  FUN_004f99d0(local_7c,(double *)(param_1 + 0x12),(double *)(param_1 + 0x26));
  FUN_004f99d0(&local_9c,(double *)(param_1 + 0x1a),(double *)(param_1 + 0x26));
  pfVar7 = (float *)*param_1;
  pfVar1 = (float *)param_1[1];
  fVar3 = *pfVar7 * (float)(double)CONCAT44(local_7c[1],local_7c[0]) +
          pfVar7[2] * (float)(double)CONCAT44(local_7c[5],local_7c[4]) +
          pfVar7[1] * (float)(double)CONCAT44(local_7c[3],local_7c[2]);
  fVar5 = *pfVar1 * (float)(double)CONCAT44(local_7c[1],local_7c[0]) +
          pfVar1[2] * (float)(double)CONCAT44(local_7c[5],local_7c[4]) +
          pfVar1[1] * (float)(double)CONCAT44(local_7c[3],local_7c[2]);
  dVar6 = (double)CONCAT44(local_7c[1],local_7c[0]) * *(double *)(param_1 + 2) +
          (double)CONCAT44(local_7c[5],local_7c[4]) * *(double *)(param_1 + 6) +
          (double)CONCAT44(local_7c[3],local_7c[2]) * *(double *)(param_1 + 4);
  fVar4 = fVar3 - fVar5;
  param_2[2] = (fVar3 - (float)dVar6) * fVar4;
  param_2[3] = ((float)dVar6 - fVar5) * fVar4;
  fVar8 = (float10)local_9c * (float10)*(double *)(param_1 + 2) +
          (float10)local_8c * (float10)*(double *)(param_1 + 6) +
          (float10)local_94 * (float10)*(double *)(param_1 + 4);
  pfVar7 = (float *)*param_1;
  fVar9 = (float10)local_9c * (float10)*(double *)(param_1 + 10) +
          (float10)local_8c * (float10)*(double *)(param_1 + 0xe) +
          (float10)local_94 * (float10)*(double *)(param_1 + 0xc);
  fVar3 = *pfVar7 * (float)local_9c + pfVar7[2] * (float)local_8c + pfVar7[1] * (float)local_94;
  fVar4 = (float)(fVar8 - fVar9);
  *param_2 = (float)((fVar8 - (float10)fVar3) * (float10)fVar4);
  param_2[1] = (fVar3 - (float)fVar9) * fVar4;
  return 1;
}


