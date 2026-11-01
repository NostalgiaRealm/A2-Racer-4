
/* ==== FUN_004f5cb0 @ 004f5cb0 ==== 
 * signature: undefined __stdcall FUN_004f5cb0(int * param_1, double * param_2, undefined4 param_3, undefined4 param_4, int * param_5)
 * body: 004f5cb0-004f5e53
 */

void FUN_004f5cb0(int *param_1,double *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float10 fVar7;
  
  while( true ) {
    fVar2 = (float)param_1[2] - (float)*param_2;
    fVar5 = (float)param_1[3] - (float)param_2[1];
    fVar4 = (float)param_1[4] - (float)param_2[2];
    fVar3 = (float)param_1[5] + (float)(double)CONCAT44(param_4,param_3);
    if (fVar3 * fVar3 < fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4) {
      return;
    }
    fVar3 = (float)param_1[5] * 0.004;
    if ((float)*(byte *)(param_1 + 6) * fVar3 + (float)(double)CONCAT44(param_4,param_3) <=
        ABS(fVar2)) {
      return;
    }
    if ((double)*(byte *)((int)param_1 + 0x19) * (double)fVar3 + (double)CONCAT44(param_4,param_3)
        <= ABS((double)fVar5)) {
      return;
    }
    if ((double)*(byte *)((int)param_1 + 0x1a) * (double)fVar3 + (double)CONCAT44(param_4,param_3)
        <= ABS((double)fVar4)) break;
    if ((param_1[1] != 0) && (iVar1 = param_1[1] + (int)param_1, iVar1 != 0)) {
      if (*param_5 <= param_5[1]) {
        FUN_0050a360(param_5);
      }
      *(int *)(param_5[2] + param_5[1] * 4) = iVar1;
      param_5[1] = param_5[1] + 1;
      return;
    }
    if (*param_1 == 0) {
      piVar6 = (int *)(param_1[1] + (int)param_1);
      if (((short)piVar6[3] == 2) &&
         (fVar7 = FUN_00509e90(piVar6,(int)(piVar6 + 4),param_2),
         (float10)(double)CONCAT44(param_4,param_3) * (float10)(double)CONCAT44(param_4,param_3) <
         fVar7)) {
        return;
      }
      if (*param_5 <= param_5[1]) {
        FUN_0050a360(param_5);
      }
      *(int **)(param_5[2] + param_5[1] * 4) = piVar6;
      param_5[1] = param_5[1] + 1;
      return;
    }
    FUN_004f5cb0(param_1 + 7,param_2,param_3,param_4,param_5);
    param_1 = (int *)((int)param_1 + *param_1);
  }
  return;
}


