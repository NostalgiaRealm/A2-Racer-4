
/* ==== FUN_0052e290 @ 0052e290 ==== 
 * signature: undefined __cdecl FUN_0052e290(int * param_1, int param_2, int * param_3, int param_4)
 * body: 0052e290-0052e9d3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0052e290(int *param_1,int param_2,int *param_3,int param_4)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  uint *puVar4;
  uint uVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  int iStack_5c;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  double local_30;
  double local_28 [4];
  
  if ((param_4 == 0) && (uVar5 = FUN_00533dd0((int)param_3), uVar5 != 0)) {
    return;
  }
  iVar7 = DAT_0074c6b4;
  if ((((param_3[0x14] & 0x400U) != 0) && (DAT_0074c690 != 0)) && (param_2 != 5)) {
    return;
  }
  DAT_0074c6b8 = DAT_0074c6b8 + 1;
  switch(param_2) {
  case 1:
    if ((param_3[0x14] & 0x80000U) == 0) {
      FUN_00558953(param_1,&DAT_005c3294);
      return;
    }
    FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
    FUN_00558953(param_1,&DAT_005ae60c);
    return;
  default:
    goto switchD_0052e2ed_caseD_2;
  case 3:
    FUN_00514af0((int *)param_3[0x11]);
    FUN_00558953(param_1,&DAT_005aeedc);
    iVar7 = param_3[0x11];
    if (iVar7 != 0) {
      uVar5 = *(uint *)(iVar7 + 4);
      puVar4 = (uint *)(iVar7 + 8);
      while (uVar5 != 0) {
        FUN_005164c0(uVar5);
        FUN_00558953(param_1,(byte *)&PTR_DAT_005bc6dc);
        uVar5 = *puVar4;
        puVar4 = puVar4 + 1;
      }
    }
    break;
  case 4:
    FUN_0052f6e0(param_1,param_2,(byte *)0x0,(int)param_3);
    return;
  case 5:
    FUN_00530290(param_1,(int)param_3);
    return;
  case 6:
    FUN_00531490(param_1,(int)param_3);
    return;
  case 7:
    iVar7 = param_3[6];
    if (iVar7 == 0) {
      return;
    }
    if (DAT_0074c03c != 0) {
      pdVar8 = local_28 + DAT_0074c03c + -1;
      iVar9 = DAT_0074c03c;
      do {
        dVar1 = (*(double *)((iVar7 - (int)local_28) + (int)pdVar8) + 1.0) * 0.5;
        *pdVar8 = dVar1;
        if (dVar1 < -1.0) {
          *(undefined4 *)pdVar8 = 0;
          *(undefined4 *)((int)pdVar8 + 4) = 0xbff00000;
        }
        if (1.0 < *pdVar8) {
          *(undefined4 *)pdVar8 = 0;
          *(undefined4 *)((int)pdVar8 + 4) = 0x3ff00000;
        }
        iVar9 = iVar9 + -1;
        pdVar8 = pdVar8 + -1;
      } while (iVar9 != 0);
    }
    FUN_00533c70((undefined4 *)local_28,(undefined4 *)local_28);
    if (DAT_0074bee4 != DAT_0074c03c) {
      FUN_005285e0(local_28,3,1,(double *)0x0,(undefined4 *)0x0);
    }
    if (DAT_0074c03c < 3) {
      FUN_005302c0(param_1,(int)param_3,(int)local_28);
      return;
    }
    if (DAT_0074c03c != 3) {
      if ((param_3[0x14] & 0x1000U) == 0) {
        FUN_00530e90(param_1,(int)param_3);
        return;
      }
      FUN_005310a0(param_1,(int)param_3);
      return;
    }
    if ((param_3[0x14] & 0x1000U) == 0) {
      FUN_00530580(param_1,(int)param_3,(int)local_28);
      return;
    }
    FUN_00530a00(param_1,(int)param_3,(int)local_28);
    return;
  case 8:
    goto LAB_0052e5b6;
  case 9:
    FUN_0052b650((int)param_3,(double *)0x0,&local_38);
    goto LAB_0052e5fa;
  case 10:
    FUN_00514af0((int *)param_3[0xf]);
    FUN_00558953(param_1,&DAT_005aeedc);
    iVar7 = param_3[0xf];
    if (iVar7 != 0) {
      iVar9 = *(int *)(iVar7 + 4);
      piVar10 = (int *)(iVar7 + 8);
      while (iVar9 != 0) {
        FUN_00558953(param_1,(byte *)&PTR_DAT_005bc6dc);
        iVar9 = *piVar10;
        piVar10 = piVar10 + 1;
      }
    }
    break;
  case 0xb:
    goto LAB_0052e5fa;
  case 0xc:
    FUN_0052b650((int)param_3,&local_30,(double *)0x0);
LAB_0052e5fa:
    if (param_3[6] != 0) {
      if (DAT_0074be28 != 0) {
        FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
      }
      iVar7 = 0;
      if (0 < DAT_0074c03c) {
        do {
          FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
          iVar7 = iVar7 + 1;
        } while (iVar7 < DAT_0074c03c);
      }
      if (DAT_0074be28 == 0) {
        FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
      }
      FUN_00558953(param_1,&DAT_005ae60c);
      return;
    }
    FUN_00558953(param_1,(byte *)s_no_normal_for_facet_f_d_005c3274);
    return;
  case 0xd:
  case 0x10:
  case 0x18:
    if ((DAT_0074c03c == 3) && (param_2 != 0x18)) {
      FUN_00530e00(param_1,param_3,param_2);
      return;
    }
    if ((((param_3[0x14] & 0x1000U) == 0) && (DAT_0074c03c != 2)) && (param_2 != 0x10)) {
      DAT_0074c6b4 = DAT_0074c6b4 + 1;
      FUN_00531270(param_1,(int)param_3,iVar7,param_2);
      return;
    }
    FUN_00531390(param_1,(int)param_3,param_2);
    return;
  case 0xe:
    if (DAT_0074c03c != 2) {
      DAT_0074c6b4 = DAT_0074c6b4 + 1;
      FUN_00530c80(param_1,(int)param_3,iVar7);
      return;
    }
    DAT_0074c6b4 = DAT_0074c6b4 + 1;
    FUN_005304e0(param_1,param_3,iVar7);
    return;
  case 0xf:
LAB_0052e5b6:
    FUN_00558953(param_1,&DAT_005c3290);
    return;
  case 0x12:
    if (DAT_0074c030 == (double *)0x0) {
      FUN_00558953(param_1,(byte *)s_qhull_input_error__qh_printaface_005c3228);
      FUN_0051e8e0(1,(int *)0x0);
    }
    iVar7 = DAT_0074c03c;
    if (*(double *)(param_3 + 4) <= 0.0) {
      pdVar6 = FUN_0051e110(DAT_0074c5f4);
      pdVar8 = (double *)param_3[6];
      pdVar2 = pdVar6;
      pdVar3 = DAT_0074c030;
      iStack_5c = DAT_0074c03c;
      iVar7 = DAT_0074c03c;
      if (-_DAT_0074c4c0 <= *(double *)(param_3 + 4)) {
        while (iStack_5c != 0) {
          iStack_5c = iStack_5c + -1;
          uStack_48 = *(undefined4 *)pdVar8;
          uStack_44 = *(undefined4 *)((int)pdVar8 + 4);
          dVar1 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          fVar11 = FUN_0052a0c0(dVar1,*(double *)(param_3 + 4),
                                (double)CONCAT44(DAT_0074c4bc,DAT_0074c4b8),&iStack_4c);
          *pdVar2 = (double)(fVar11 + (float10)*pdVar3);
          if (iStack_4c != 0) {
            FUN_0051e2b0((undefined4 *)pdVar6,DAT_0074c5f4);
            iVar7 = DAT_0074c03c;
            goto joined_r0x0052e8a8;
          }
          iStack_4c = 0;
          pdVar2 = pdVar2 + 1;
          pdVar3 = pdVar3 + 1;
        }
      }
      else {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          dVar1 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          *pdVar2 = -(dVar1 / *(double *)(param_3 + 4)) + *pdVar3;
          pdVar2 = pdVar2 + 1;
          pdVar3 = pdVar3 + 1;
        }
      }
      FUN_00532a00(param_1,(char *)0x0,(uint)pdVar6);
      FUN_0051e2b0((undefined4 *)pdVar6,DAT_0074c5f4);
      return;
    }
joined_r0x0052e8a8:
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
    }
    break;
  case 0x13:
    iVar7 = param_3[0x11];
    if (iVar7 == 0) {
      return;
    }
    pdVar8 = *(double **)(iVar7 + 4);
    piVar10 = (int *)(iVar7 + 8);
    if (pdVar8 == (double *)0x0) {
      return;
    }
    do {
      iVar7 = FUN_00519d60((int)param_3,pdVar8,&local_40);
      FUN_005164c0(*(uint *)(iVar7 + 8));
      FUN_005164c0((uint)pdVar8);
      FUN_00558953(param_1,(byte *)s__d__d__d__6_16g_005c3214);
      pdVar8 = (double *)*piVar10;
      piVar10 = piVar10 + 1;
    } while (pdVar8 != (double *)0x0);
    return;
  case 0x14:
    if (DAT_0074be28 != 0) {
      FUN_00558953(param_1,&DAT_005c3210);
    }
    FUN_0052f6e0(param_1,param_2,(byte *)0x0,(int)param_3);
    return;
  case 0x19:
    FUN_00514af0((int *)param_3[0xd]);
    FUN_00558953(param_1,&DAT_005aeedc);
    iVar7 = param_3[0xd];
    if (iVar7 != 0) {
      iVar9 = *(int *)(iVar7 + 4);
      piVar10 = (int *)(iVar7 + 8);
      while (iVar9 != 0) {
        FUN_005164c0(*(uint *)(iVar9 + 8));
        FUN_00558953(param_1,(byte *)&PTR_DAT_005bc6dc);
        iVar9 = *piVar10;
        piVar10 = piVar10 + 1;
      }
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
switchD_0052e2ed_caseD_2:
  return;
}


