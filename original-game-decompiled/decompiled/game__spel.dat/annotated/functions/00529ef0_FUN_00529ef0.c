
/* ==== FUN_00529ef0 @ 00529ef0 ==== 
 * signature: float10 __cdecl FUN_00529ef0(uint param_1, int param_2, int param_3, undefined4 * param_4)
 * body: 00529ef0-00529fed
 */

float10 __cdecl FUN_00529ef0(uint param_1,int param_2,int param_3,undefined4 *param_4)

{
  double *pdVar1;
  double dVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  undefined4 *in_stack_00000018;
  
  piVar3 = DAT_0074c6f8;
  iVar10 = 0;
  DAT_0074c948 = DAT_0074c948 + 1;
  if (param_2 != 0) {
    pdVar4 = *(double **)(param_2 + 4);
    puVar7 = (undefined4 *)(param_2 + 8);
    pdVar6 = DAT_0074c6f4;
    piVar9 = DAT_0074c6f8;
    while ((pdVar4 != (double *)0x0 && (iVar10 != param_3))) {
      *piVar9 = (int)pdVar6;
      iVar10 = iVar10 + 1;
      piVar9 = piVar9 + 1;
      if (param_3 != 0) {
        iVar8 = param_1 - (int)pdVar4;
        pdVar5 = pdVar6;
        iVar11 = param_3;
        do {
          dVar2 = *pdVar4;
          pdVar1 = (double *)(iVar8 + (int)pdVar4);
          pdVar6 = pdVar5 + 1;
          pdVar4 = pdVar4 + 1;
          iVar11 = iVar11 + -1;
          *pdVar5 = dVar2 - *pdVar1;
          pdVar5 = pdVar6;
        } while (iVar11 != 0);
      }
      pdVar4 = (double *)*puVar7;
      puVar7 = puVar7 + 1;
    }
  }
  if (iVar10 < param_3) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_detsimp_005c2284);
    FUN_0051e8e0(5,(int *)0x0);
  }
  fVar12 = FUN_005295d0(piVar3,param_3,in_stack_00000018);
  if (1 < DAT_0074be68) {
    FUN_005164c0(param_3);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_detsimplex__det__2_2g_for_poi_005c2244);
    fVar12 = (float10)(double)fVar12;
  }
  return fVar12;
}


