
/* ==== FUN_005208e0 @ 005208e0 ==== 
 * signature: char * __fastcall FUN_005208e0(int param_1)
 * body: 005208e0-00520e2e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __fastcall FUN_005208e0(int param_1)

{
  double *pdVar1;
  double *pdVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  LPVOID pvVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar12;
  int *piVar13;
  float10 fVar14;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_28;
  int local_24;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00574068;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00520850();
  FUN_0050f950(&local_28,0x10);
  piVar13 = *(int **)(param_1 + 8);
  local_c = 0;
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  iVar9 = 0;
  if (piVar13 != (int *)0x0) {
LAB_00520947:
    if (100 < iVar9) {
      for (puVar12 = *(undefined4 **)(param_1 + 8); puVar12 != (undefined4 *)0x0;
          puVar12 = (undefined4 *)*puVar12) {
        FUN_0055ab10((byte *)s__f__f__f_005beae4);
      }
      local_c = 0xffffffff;
      FUN_0050f9a0(&local_28);
      ExceptionList = local_14;
      return s_Cannot_convert_005bead4;
    }
    while ((*(int *)(local_24 + 4) != 0 && (*(int *)(*(int *)(local_24 + 4) + 0x14) != 0))) {
      FUN_0050fc30(&local_28);
    }
    pdVar1 = (double *)piVar13[2];
    pdVar2 = (double *)piVar13[3];
    for (puVar12 = *(undefined4 **)(param_1 + 8); puVar12 != (undefined4 *)0x0;
        puVar12 = (undefined4 *)*puVar12) {
      fVar14 = (float10)FUN_00520880();
      FUN_0050fb10(&local_28,(int)puVar12,SUB84((double)fVar14,0),
                   (int)((ulonglong)(double)fVar14 >> 0x20));
    }
    if (*(int *)(local_24 + 4) != 0) {
      piVar3 = *(int **)(*(int *)(local_24 + 4) + 0x14);
      while (piVar3 != (int *)0x0) {
        if (((piVar3 != piVar13) && (pdVar4 = (double *)piVar3[2], pdVar4 != (double *)piVar13[3]))
           && (iVar10 = FUN_0051ff40(piVar13,pdVar4), iVar10 != 0)) {
          if (local_3c != (undefined4 *)0x0) {
            FUN_0051ed40();
            FUN_0054b339(local_3c);
          }
          pvVar11 = operator_new(0x20);
          if (pvVar11 == (void *)0x0) {
            local_3c = (undefined4 *)0x0;
          }
          else {
            local_3c = FUN_0051ff00(pvVar11,pdVar4,pdVar1);
          }
          if (local_38 != (undefined4 *)0x0) {
            FUN_0051ed40();
            FUN_0054b339(local_38);
          }
          pvVar11 = operator_new(0x20);
          if (pvVar11 == (void *)0x0) {
            local_38 = (undefined4 *)0x0;
          }
          else {
            local_38 = FUN_0051ff00(pvVar11,pdVar2,pdVar4);
          }
          for (puVar12 = *(undefined4 **)(param_1 + 8); puVar12 != (undefined4 *)0x0;
              puVar12 = (undefined4 *)*puVar12) {
            iVar10 = FUN_0051ff80(puVar12,(int)pdVar4,(int)pdVar1);
            if (((iVar10 == 0) &&
                (bVar8 = FUN_005202f0(puVar12,local_3c), CONCAT31(extraout_var,bVar8) != 0)) ||
               ((iVar10 = FUN_0051ff80(puVar12,(int)pdVar2,(int)pdVar4), iVar10 == 0 &&
                (bVar8 = FUN_005202f0(puVar12,local_38), CONCAT31(extraout_var_00,bVar8) != 0)))) {
              if (*(int *)(local_24 + 4) == 0) goto LAB_00520b19;
              iVar10 = *(int *)(*(int *)(local_24 + 4) + 0x14);
              goto joined_r0x00520b0c;
            }
          }
          puVar12 = *(undefined4 **)(param_1 + 8);
          while( true ) {
            if (puVar12 == (undefined4 *)0x0) {
              pvVar11 = operator_new(0x14);
              bVar8 = false;
              if (pvVar11 == (void *)0x0) {
                puVar12 = (undefined4 *)0x0;
              }
              else {
                puVar12 = (undefined4 *)
                          FUN_0051feb0(pvVar11,*(undefined4 *)(pdVar1 + 4),
                                       *(undefined4 *)(pdVar4 + 4),*(undefined4 *)(pdVar2 + 4));
              }
              *puVar12 = *(undefined4 *)(param_1 + 0x10);
              if (*(int *)(param_1 + 0x10) != 0) {
                *(undefined4 **)(*(int *)(param_1 + 0x10) + 4) = puVar12;
              }
              puVar12[1] = 0;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined4 **)(param_1 + 0x10) = puVar12;
              if ((int *)piVar13[1] == (int *)0x0) {
                *(int *)(param_1 + 8) = *piVar13;
              }
              else {
                *(int *)piVar13[1] = *piVar13;
              }
              if (*piVar13 != 0) {
                *(int *)(*piVar13 + 4) = piVar13[1];
              }
              *piVar13 = -1;
              *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
              bVar7 = false;
              if (piVar13 != (int *)0x0) {
                FUN_0051ed40();
                FUN_0054b339(piVar13);
              }
              piVar13 = *(int **)(param_1 + 8);
              if (*(int **)(param_1 + 8) != (int *)0x0) goto LAB_00520c0a;
              goto LAB_00520cc1;
            }
            pdVar5 = (double *)puVar12[2];
            iVar10 = FUN_0051ff40(piVar13,pdVar5);
            if (((iVar10 != 0) && (iVar10 = FUN_0051ff40(local_38,pdVar5), iVar10 != 0)) &&
               (iVar10 = FUN_0051ff40(local_3c,pdVar5), iVar10 != 0)) break;
            puVar12 = (undefined4 *)*puVar12;
          }
          iVar10 = *piVar3;
joined_r0x00520b0c:
          if (iVar10 == 0) {
LAB_00520b19:
            FUN_0055ab10((byte *)s_Couldn_t_find_a_matching_point_t_005beaf0);
            _DAT_00000000 = 0;
          }
        }
        FUN_0050fc30(&local_28);
        if (*(int *)(local_24 + 4) == 0) break;
        piVar3 = *(int **)(*(int *)(local_24 + 4) + 0x14);
      }
    }
    goto LAB_00520d47;
  }
LAB_00520d86:
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x24);
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    pvVar6 = *(LPVOID *)(*(int *)(param_1 + 0x1c) + iVar9 * 4);
    if (pvVar6 != (LPVOID)0x0) {
      FUN_0051ed40();
      FUN_0054b339(pvVar6);
    }
  }
  local_c = 0xffffffff;
  FUN_0050f9a0(&local_28);
  ExceptionList = local_14;
  return (char *)0x0;
LAB_00520c0a:
  do {
    piVar3 = (int *)*piVar13;
    iVar10 = FUN_0051ff80(piVar13,(int)pdVar4,(int)pdVar1);
    if (iVar10 == 0) {
      if ((piVar13 != (int *)0x0) &&
         (iVar10 = FUN_0051ff80(piVar13,(int)pdVar4,(int)pdVar2), iVar10 != 0)) {
        if ((int *)piVar13[1] == (int *)0x0) {
          *(int *)(param_1 + 8) = *piVar13;
        }
        else {
          *(int *)piVar13[1] = *piVar13;
        }
        if (*piVar13 != 0) {
          *(int *)(*piVar13 + 4) = piVar13[1];
        }
        *piVar13 = -1;
        bVar7 = true;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        goto LAB_00520ca3;
      }
    }
    else {
      if ((int *)piVar13[1] == (int *)0x0) {
        *(int *)(param_1 + 8) = *piVar13;
      }
      else {
        *(int *)piVar13[1] = *piVar13;
      }
      if (*piVar13 != 0) {
        *(int *)(*piVar13 + 4) = piVar13[1];
      }
      *piVar13 = -1;
      bVar8 = true;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      if (piVar13 != (int *)0x0) {
LAB_00520ca3:
        FUN_0051ed40();
        FUN_0054b339(piVar13);
      }
    }
    piVar13 = piVar3;
  } while (piVar3 != (int *)0x0);
  if (!bVar8) {
LAB_00520cc1:
    pvVar11 = operator_new(0x20);
    if (pvVar11 == (void *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = FUN_0051ff00(pvVar11,pdVar1,pdVar4);
    }
    *puVar12 = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 **)(*(int *)(param_1 + 8) + 4) = puVar12;
    }
    puVar12[1] = 0;
    *(undefined4 **)(param_1 + 8) = puVar12;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  if (!bVar7) {
    pvVar11 = operator_new(0x20);
    if (pvVar11 == (void *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = FUN_0051ff00(pvVar11,pdVar4,pdVar2);
    }
    *puVar12 = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 **)(*(int *)(param_1 + 8) + 4) = puVar12;
    }
    puVar12[1] = 0;
    *(undefined4 **)(param_1 + 8) = puVar12;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
LAB_00520d47:
  piVar13 = *(int **)(param_1 + 8);
  iVar9 = iVar9 + 1;
  if (piVar13 == (int *)0x0) goto code_r0x00520d56;
  goto LAB_00520947;
code_r0x00520d56:
  if (local_3c != (undefined4 *)0x0) {
    FUN_0051ed40();
    FUN_0054b339(local_3c);
  }
  if (local_38 != (undefined4 *)0x0) {
    FUN_0051ed40();
    FUN_0054b339(local_38);
  }
  goto LAB_00520d86;
}


