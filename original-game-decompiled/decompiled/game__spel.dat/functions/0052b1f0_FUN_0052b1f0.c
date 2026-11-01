
/* ==== FUN_0052b1f0 @ 0052b1f0 ==== 
 * signature: undefined __cdecl FUN_0052b1f0(int param_1, int * param_2, double * param_3, int param_4, int * param_5)
 * body: 0052b1f0-0052b5d7
 */

void __cdecl FUN_0052b1f0(int param_1,int *param_2,double *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int *piVar6;
  float10 fVar7;
  uint uVar8;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10;
  undefined4 uStack_c;
  double dVar9;
  
  pdVar5 = (double *)0x0;
  pdVar4 = (double *)0x0;
  local_18 = -1;
  iStack_14 = 0x7fefffff;
  local_10 = 0xffffffff;
  uStack_c = 0xffefffff;
  local_1c = FUN_00514af0((int *)*param_5);
  if (local_1c < 2) {
    iVar1 = FUN_00514af0(param_2);
    if (iVar1 < 2) {
      for (pdVar3 = param_3; pdVar3 < param_3 + DAT_0074c03c * param_4;
          pdVar3 = pdVar3 + DAT_0074c03c) {
        if (pdVar3 != DAT_0074be54) {
          if ((double)CONCAT44(uStack_c,local_10) < *pdVar3) {
            uStack_c = *(undefined4 *)((int)pdVar3 + 4);
            local_10 = *(int *)pdVar3;
            pdVar5 = pdVar3;
          }
          if (*pdVar3 < (double)CONCAT44(iStack_14,local_18)) {
            iStack_14 = *(int *)((int)pdVar3 + 4);
            local_18 = *(int *)pdVar3;
            pdVar4 = pdVar3;
          }
        }
      }
    }
    else if (param_2 != (int *)0x0) {
      piVar6 = param_2 + 1;
      pdVar3 = (double *)param_2[1];
      while (pdVar3 != (double *)0x0) {
        piVar6 = piVar6 + 1;
        if ((double)CONCAT44(uStack_c,local_10) < *pdVar3) {
          local_10 = *(int *)pdVar3;
          uStack_c = *(undefined4 *)((int)pdVar3 + 4);
          pdVar5 = pdVar3;
        }
        if (*pdVar3 < (double)CONCAT44(iStack_14,local_18)) {
          local_18 = *(int *)pdVar3;
          iStack_14 = *(int *)((int)pdVar3 + 4);
          pdVar4 = pdVar3;
        }
        pdVar3 = (double *)*piVar6;
      }
    }
    FUN_00514d90(param_5,(int)pdVar4);
    iVar1 = FUN_00514af0((int *)*param_5);
    if (iVar1 < 2) {
      FUN_00514d90(param_5,(int)pdVar5);
    }
    local_1c = FUN_00514af0((int *)*param_5);
    if (local_1c < 2) {
      FUN_00526a20();
      if (DAT_0074c03c + 1 < DAT_0074cd30) {
        if (DAT_0074c5ec != (int *)0x0) {
          FUN_00514af0(param_2);
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__qh_maxsim_005c27bc);
        }
        uVar8 = 3;
      }
      else {
        if (DAT_0074c5ec != (int *)0x0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__input_is_less_005c2760);
        }
        uVar8 = 1;
      }
      FUN_0051e8e0(uVar8,(int *)0x0);
    }
  }
  local_10 = param_1 + 1;
  if (local_1c < local_10) {
    do {
      pdVar5 = (double *)0x0;
      dVar9 = -1.79769313486232e+308;
      if (param_2 == (int *)0x0) {
LAB_0052b46a:
        DAT_0074cd28 = DAT_0074cd28 + 1;
        if (pdVar5 == (double *)0x0) {
          if (DAT_0074be68 != 0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maxsimplex__searching_all_poi_005c2720);
          }
        }
        else if (DAT_0074be68 != 0) {
          FUN_005164c0((uint)pdVar5);
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maxsimplex__searching_all_poi_005c26c4);
        }
        iVar1 = DAT_0074c03c * param_4;
        for (pdVar4 = param_3; pdVar4 < param_3 + iVar1; pdVar4 = pdVar4 + DAT_0074c03c) {
          if ((pdVar4 != DAT_0074be54) && (iVar2 = FUN_00514680(*param_5,(int)pdVar4), iVar2 == 0))
          {
            fVar7 = FUN_00529ef0((uint)pdVar4,*param_5,local_1c,&local_18);
            if (fVar7 < (float10)0.0) {
              fVar7 = -fVar7;
            }
            if ((float10)dVar9 < fVar7) {
              dVar9 = (double)fVar7;
              iStack_14 = local_18;
              pdVar5 = pdVar4;
            }
          }
        }
      }
      else {
        pdVar4 = (double *)param_2[1];
        piVar6 = param_2 + 2;
        if (pdVar4 == (double *)0x0) goto LAB_0052b46a;
        do {
          iVar1 = FUN_00514680(*param_5,(int)pdVar4);
          if (iVar1 == 0) {
            fVar7 = FUN_00529ef0((uint)pdVar4,*param_5,local_1c,&local_18);
            if (fVar7 < (float10)0.0) {
              fVar7 = -fVar7;
            }
            if ((float10)dVar9 < fVar7) {
              dVar9 = (double)fVar7;
              iStack_14 = local_18;
              pdVar5 = pdVar4;
            }
          }
          pdVar4 = (double *)*piVar6;
          piVar6 = piVar6 + 1;
        } while (pdVar4 != (double *)0x0);
        if ((pdVar5 == (double *)0x0) || (iStack_14 != 0)) goto LAB_0052b46a;
      }
      if (pdVar5 == (double *)0x0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_maxsimp_005c2680);
        FUN_0051e8e0(5,(int *)0x0);
      }
      FUN_00514020(param_5,(int)pdVar5);
      if (0 < DAT_0074be68) {
        FUN_005164c0((uint)pdVar5);
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maxsimplex__selected_point_p__005c2638);
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_10);
  }
  return;
}


