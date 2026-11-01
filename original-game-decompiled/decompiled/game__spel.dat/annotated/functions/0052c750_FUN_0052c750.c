
/* ==== FUN_0052c750 @ 0052c750 ==== 
 * signature: double * __cdecl FUN_0052c750(double * param_1, int param_2, double * param_3, undefined4 param_4, double * param_5, double * param_6)
 * body: 0052c750-0052c81c
 */

double * __cdecl
FUN_0052c750(double *param_1,int param_2,double *param_3,undefined4 param_4,double *param_5,
            double *param_6)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_0074be68 != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_sethalfspace_all__compute_dua_005c2d88);
  }
  iVar2 = param_2;
  iVar1 = (int)param_1 + -1;
  pdVar3 = _malloc(iVar1 * param_2 * 8);
  if (pdVar3 == (double *)0x0) {
    param_1 = pdVar3;
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__insufficient_memory_005c2d44);
    FUN_0051e8e0(4,(int *)0x0);
  }
  iVar6 = 0;
  pdVar4 = param_5;
  param_1 = pdVar3;
  if (0 < iVar2) {
    do {
      iVar5 = FUN_0052c4b0(iVar1,param_1,&param_1,pdVar4,pdVar4 + iVar1,param_6);
      if (iVar5 == 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_The_halfspace_was_at_index__d_005c2d24);
        FUN_0051e8e0(1,(int *)0x0);
      }
      iVar6 = iVar6 + 1;
      pdVar4 = pdVar4 + iVar1 + 1;
    } while (iVar6 < iVar2);
    return param_3;
  }
  return pdVar3;
}


