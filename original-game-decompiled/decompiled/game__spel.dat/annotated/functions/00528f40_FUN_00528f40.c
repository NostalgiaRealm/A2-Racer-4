
/* ==== FUN_00528f40 @ 00528f40 ==== 
 * signature: undefined __cdecl FUN_00528f40(int param_1, int * param_2, double * param_3, int param_4, double * param_5, double * param_6, int * param_7)
 * body: 00528f40-005293ad
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00528f40(int param_1,int *param_2,double *param_3,int param_4,double *param_5,double *param_6,
            int *param_7)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  
  if (param_1 == 2) {
    *param_5 = *(double *)(param_2[1] + 8) - *(double *)(*param_2 + 8);
    param_5[1] = *(double *)*param_2 - *(double *)param_2[1];
    FUN_005285e0(param_5,2,param_4,(double *)0x0,(undefined4 *)0x0);
    *param_6 = -(*param_3 * *param_5 + param_3[1] * param_5[1]);
    *param_7 = 0;
  }
  else if (param_1 == 3) {
    iVar14 = *param_2;
    piVar15 = param_2 + 2;
    *param_5 = (*(double *)(param_2[1] + 0x10) - *(double *)(iVar14 + 0x10)) *
               (*(double *)(param_2[2] + 8) - *(double *)(iVar14 + 8)) -
               (*(double *)(param_2[1] + 8) - *(double *)(iVar14 + 8)) *
               (*(double *)(param_2[2] + 0x10) - *(double *)(iVar14 + 0x10));
    pdVar1 = (double *)*param_2;
    param_5[1] = (*(double *)param_2[1] - *pdVar1) * (((double *)*piVar15)[2] - pdVar1[2]) -
                 (*(double *)*piVar15 - *pdVar1) * (((double *)param_2[1])[2] - pdVar1[2]);
    pdVar1 = (double *)*param_2;
    param_5[2] = (*(double *)*piVar15 - *pdVar1) * (((double *)param_2[1])[1] - pdVar1[1]) -
                 (*(double *)param_2[1] - *pdVar1) * (((double *)*piVar15)[1] - pdVar1[1]);
    FUN_005285e0(param_5,3,param_4,(double *)0x0,(undefined4 *)0x0);
    dVar8 = -(*param_3 * *param_5 + param_3[1] * param_5[1] + param_3[2] * param_5[2]);
    *param_6 = dVar8;
    iVar14 = 2;
    do {
      pdVar1 = (double *)*piVar15;
      if ((pdVar1 != param_3) &&
         ((dVar9 = *param_5 * *pdVar1 + pdVar1[1] * param_5[1] + pdVar1[2] * param_5[2] + dVar8,
          _DAT_0074c490 < dVar9 || (dVar9 < -_DAT_0074c490)))) goto LAB_00529361;
      piVar15 = piVar15 + -1;
      bVar16 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar16);
  }
  else if (param_1 == 4) {
    iVar14 = param_2[3];
    iVar2 = *param_2;
    iVar3 = param_2[1];
    piVar15 = param_2 + 3;
    dVar8 = *(double *)(iVar14 + 0x18) - *(double *)(iVar2 + 0x18);
    dVar11 = *(double *)(iVar3 + 0x10) - *(double *)(iVar2 + 0x10);
    dVar9 = *(double *)(iVar3 + 0x18) - *(double *)(iVar2 + 0x18);
    iVar4 = param_2[2];
    dVar10 = *(double *)(iVar14 + 0x10) - *(double *)(iVar2 + 0x10);
    dVar12 = *(double *)(iVar4 + 0x10) - *(double *)(iVar2 + 0x10);
    dVar13 = *(double *)(iVar4 + 0x18) - *(double *)(iVar2 + 0x18);
    *param_5 = -((*(double *)(iVar14 + 8) - *(double *)(iVar2 + 8)) *
                 (dVar9 * dVar12 - dVar13 * dVar11) +
                ((*(double *)(iVar4 + 8) - *(double *)(iVar2 + 8)) *
                 (dVar8 * dVar11 - dVar10 * dVar9) -
                (*(double *)(iVar3 + 8) - *(double *)(iVar2 + 8)) *
                (dVar8 * dVar12 - dVar13 * dVar10)));
    pdVar1 = (double *)*piVar15;
    pdVar5 = (double *)*param_2;
    pdVar6 = (double *)param_2[1];
    pdVar7 = (double *)param_2[2];
    param_5[1] = (*pdVar1 - *pdVar5) *
                 ((pdVar6[3] - pdVar5[3]) * (pdVar7[2] - pdVar5[2]) -
                 (pdVar7[3] - pdVar5[3]) * (pdVar6[2] - pdVar5[2])) +
                 ((*pdVar7 - *pdVar5) *
                  ((pdVar1[3] - pdVar5[3]) * (pdVar6[2] - pdVar5[2]) -
                  (pdVar1[2] - pdVar5[2]) * (pdVar6[3] - pdVar5[3])) -
                 (*pdVar6 - *pdVar5) *
                 ((pdVar1[3] - pdVar5[3]) * (pdVar7[2] - pdVar5[2]) -
                 (pdVar7[3] - pdVar5[3]) * (pdVar1[2] - pdVar5[2])));
    pdVar1 = (double *)*piVar15;
    pdVar5 = (double *)*param_2;
    pdVar6 = (double *)param_2[1];
    pdVar7 = (double *)param_2[2];
    param_5[2] = -((*pdVar1 - *pdVar5) *
                   ((pdVar6[3] - pdVar5[3]) * (pdVar7[1] - pdVar5[1]) -
                   (pdVar7[3] - pdVar5[3]) * (pdVar6[1] - pdVar5[1])) +
                  ((*pdVar7 - *pdVar5) *
                   ((pdVar1[3] - pdVar5[3]) * (pdVar6[1] - pdVar5[1]) -
                   (pdVar1[1] - pdVar5[1]) * (pdVar6[3] - pdVar5[3])) -
                  (*pdVar6 - *pdVar5) *
                  ((pdVar1[3] - pdVar5[3]) * (pdVar7[1] - pdVar5[1]) -
                  (pdVar1[1] - pdVar5[1]) * (pdVar7[3] - pdVar5[3]))));
    pdVar1 = (double *)*piVar15;
    pdVar5 = (double *)*param_2;
    pdVar6 = (double *)param_2[1];
    pdVar7 = (double *)param_2[2];
    param_5[3] = (*pdVar1 - *pdVar5) *
                 ((pdVar7[1] - pdVar5[1]) * (pdVar6[2] - pdVar5[2]) -
                 (pdVar7[2] - pdVar5[2]) * (pdVar6[1] - pdVar5[1])) +
                 ((*pdVar7 - *pdVar5) *
                  ((pdVar1[2] - pdVar5[2]) * (pdVar6[1] - pdVar5[1]) -
                  (pdVar1[1] - pdVar5[1]) * (pdVar6[2] - pdVar5[2])) -
                 (*pdVar6 - *pdVar5) *
                 ((pdVar1[2] - pdVar5[2]) * (pdVar7[1] - pdVar5[1]) -
                 (pdVar1[1] - pdVar5[1]) * (pdVar7[2] - pdVar5[2])));
    FUN_005285e0(param_5,4,param_4,(double *)0x0,(undefined4 *)0x0);
    dVar8 = -(*param_3 * *param_5 +
             param_3[1] * param_5[1] + param_3[2] * param_5[2] + param_3[3] * param_5[3]);
    *param_6 = dVar8;
    iVar14 = 3;
    do {
      pdVar1 = (double *)*piVar15;
      if ((pdVar1 != param_3) &&
         ((dVar9 = *param_5 * *pdVar1 +
                   pdVar1[1] * param_5[1] + pdVar1[2] * param_5[2] + pdVar1[3] * param_5[3] + dVar8,
          _DAT_0074c490 < dVar9 || (dVar9 < -_DAT_0074c490)))) goto LAB_00529361;
      piVar15 = piVar15 + -1;
      bVar16 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar16);
  }
LAB_00529368:
  if (*param_7 != 0) {
    DAT_0074cb78 = DAT_0074cb78 + 1;
    if (DAT_0074be68 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_sethyperplane_det__degenerate_005c1eec);
    }
    DAT_0074cb88 = DAT_0074cb88 + 1;
  }
  return;
LAB_00529361:
  *param_7 = 1;
  goto LAB_00529368;
}


