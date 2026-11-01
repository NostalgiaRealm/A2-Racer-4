
/* ==== FUN_0052be80 @ 0052be80 ==== 
 * signature: undefined __cdecl FUN_0052be80(double * param_1, int param_2, int param_3, int * param_4)
 * body: 0052be80-0052bf32
 */

void __cdecl FUN_0052be80(double *param_1,int param_2,int param_3,int *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  int *piVar8;
  double *pdVar9;
  double *pdVar10;
  
  iVar5 = param_3;
  pdVar9 = param_1;
  pdVar10 = (double *)0x0;
  if (0 < DAT_0074be68) {
    FUN_0052b7c0(DAT_0074c5ec,s_qh_rotatepoints__rotate_points_b_005c29e4,param_4,param_3,param_3);
  }
  if (param_2 != 0) {
    param_1 = (double *)param_2;
    do {
      pdVar6 = (double *)param_4[iVar5];
      piVar8 = param_4;
      param_3 = iVar5;
      iVar4 = iVar5;
      if (0 < iVar5) {
        do {
          dVar3 = 0.0;
          pdVar10 = pdVar9;
          if (iVar5 != 0) {
            iVar7 = iVar5;
            do {
              pdVar1 = (double *)((*piVar8 - (int)pdVar9) + (int)pdVar10);
              dVar2 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              iVar7 = iVar7 + -1;
              dVar3 = *pdVar1 * dVar2 + dVar3;
            } while (iVar7 != 0);
          }
          *pdVar6 = dVar3;
          pdVar6 = pdVar6 + 1;
          param_3 = param_3 + -1;
          piVar8 = piVar8 + 1;
        } while (param_3 != 0);
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)(pdVar10 + -1) = *(undefined4 *)(pdVar6 + -1);
        *(undefined4 *)((int)pdVar10 + -4) = *(undefined4 *)((int)pdVar6 + -4);
        pdVar6 = pdVar6 + -1;
        pdVar10 = pdVar10 + -1;
      }
      pdVar9 = pdVar9 + iVar5;
      param_1 = (double *)((int)param_1 + -1);
    } while (param_1 != (double *)0x0);
  }
  return;
}


