
/* ==== FUN_005295d0 @ 005295d0 ==== 
 * signature: float10 __cdecl FUN_005295d0(int * param_1, int param_2, undefined4 * param_3)
 * body: 005295d0-00529715
 */

float10 __cdecl FUN_005295d0(int *param_1,int param_2,undefined4 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EBP;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  uint local_14 [4];
  
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[0] = 0;
  *param_3 = 0;
  if (param_2 < 2) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_determi_005c2008);
    FUN_0051e8e0(5,(int *)0x0);
    return (float10)(double)CONCAT44(unaff_EBP,local_14[3]);
  }
  if (param_2 == 2) {
    fVar9 = (float10)((double *)param_1[1])[1] * (float10)*(double *)*param_1 -
            (float10)((double *)*param_1)[1] * (float10)*(double *)param_1[1];
    fVar8 = fVar9;
    if (fVar9 < (float10)0.0) {
      fVar8 = -fVar9;
    }
    bVar7 = fVar8 < (float10)*(double *)(DAT_0074c4e4 + 8);
  }
  else {
    if (param_2 != 3) {
      FUN_00528030(param_1,param_2,param_2,local_14,param_3);
      fVar8 = (float10)1.0;
      if (param_2 != 0) {
        piVar6 = param_1 + param_2 + -1;
        iVar5 = param_2 + -1;
        do {
          iVar4 = *piVar6;
          piVar6 = piVar6 + -1;
          fVar8 = fVar8 * (float10)*(double *)(iVar4 + iVar5 * 8);
          bVar7 = iVar5 != 0;
          iVar5 = iVar5 + -1;
        } while (bVar7);
      }
      if (local_14[0] == 0) {
        return fVar8;
      }
      return -fVar8;
    }
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[2];
    pdVar3 = (double *)*param_1;
    fVar9 = ((float10)pdVar3[1] * (float10)pdVar1[2] - (float10)pdVar1[1] * (float10)pdVar3[2]) *
            (float10)*pdVar2 +
            (((float10)pdVar1[1] * (float10)pdVar2[2] - (float10)pdVar1[2] * (float10)pdVar2[1]) *
             (float10)*pdVar3 -
            ((float10)pdVar3[1] * (float10)pdVar2[2] - (float10)pdVar3[2] * (float10)pdVar2[1]) *
            (float10)*pdVar1);
    fVar8 = fVar9;
    if (fVar9 < (float10)0.0) {
      fVar8 = -fVar9;
    }
    bVar7 = fVar8 < (float10)*(double *)(DAT_0074c4e4 + 0x10);
  }
  if (!bVar7) {
    return fVar9;
  }
  *param_3 = 1;
  return fVar9;
}


