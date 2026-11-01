
/* ==== FUN_0052ea40 @ 0052ea40 ==== 
 * signature: undefined __cdecl FUN_0052ea40(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 0052ea40-0052f676
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0052ea40(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  char *pcVar11;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  DAT_0074c6b8 = 0;
  FUN_0052cd70(param_3,param_4,param_5,&local_28,&local_18,&local_10,&local_14,local_c);
  switch(param_2) {
  case 0:
    goto switchD_0052ea94_caseD_0;
  case 3:
  case 8:
    FUN_00558953(param_1,&DAT_005c3290);
    return;
  case 4:
    if (DAT_0074c65c == 0) {
      FUN_00518040(2);
    }
LAB_0052f61a:
    FUN_00558953(param_1,(byte *)s__d__d_005c3350);
    return;
  case 5:
  case 6:
    if (param_3 == 0) {
      return;
    }
    FUN_00533360(param_1,s_Vertices_and_facets__005c35c0,param_3,param_4,param_5);
    return;
  case 7:
    if ((DAT_0074c03c < 5) && ((DAT_0074c018 == 0 || (DAT_0074c03c < 4)))) {
      if (DAT_0074c03c == 2) {
        if ((DAT_0074bf78 != 0) || (DAT_0074be44 != 0)) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__output_for_ridges_005c3574);
          goto LAB_0052eb51;
        }
LAB_0052eb8c:
        if (DAT_0074bee4 != 4) goto LAB_0052ebdf;
LAB_0052eb94:
        if ((DAT_0074bf7c != 0) &&
           (FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__output_for_vertic_005c34e4),
           DAT_0074bee4 != 4)) goto LAB_0052ebdf;
        if ((DAT_0074be44 != 0) && (DAT_0074bef8 != 0)) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning___Gnh__generates_n_005c34b0);
          goto LAB_0052ebdf;
        }
      }
      else {
LAB_0052eb51:
        if (DAT_0074c03c != 4) goto LAB_0052eb8c;
        if ((DAT_0074bef0 != 0) || (DAT_0074bf00 != 0)) {
LAB_0052eb78:
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__output_for_outer__005c3520);
          goto LAB_0052eb8c;
        }
        if (DAT_0074bee4 == 4) {
          if (DAT_0074bedc != 0) goto LAB_0052eb78;
          goto LAB_0052eb94;
        }
LAB_0052ebdf:
        if (DAT_0074bee4 == 2) {
          FUN_00558953(param_1,(byte *)s__appearance__linewidth_3__LIST___005c3484);
          goto LAB_0052ecd2;
        }
        if (DAT_0074bee4 == 3) {
          FUN_00558953(param_1,(byte *)s__appearance___edge__evert_linewi_005c344c);
          goto LAB_0052ecd2;
        }
        if (DAT_0074bee4 != 4) goto LAB_0052ecd2;
      }
      DAT_0074c6d0 = DAT_0074c6d0 + 1;
      local_24 = 0;
      for (iVar7 = param_3; (iVar7 != 0 && (*(int *)(iVar7 + 0x30) != 0));
          iVar7 = *(int *)(iVar7 + 0x30)) {
        FUN_0052fcd0((int *)0x0,iVar7,&local_24,param_5);
      }
      if (param_4 != 0) {
        iVar7 = *(int *)(param_4 + 4);
        piVar8 = (int *)(param_4 + 8);
        while (iVar7 != 0) {
          FUN_0052fcd0((int *)0x0,iVar7,&local_24,param_5);
          iVar7 = *piVar8;
          piVar8 = piVar8 + 1;
        }
      }
      DAT_0074c73c = local_24;
      DAT_0074c6b4 = 0;
      FUN_00558953(param_1,(byte *)s_LIST____s____s_005c343c);
LAB_0052ecd2:
      if (DAT_0074bee8 != 0) {
        DAT_0074c6b8 = DAT_0074c6b8 + 1;
        local_24 = FUN_00514af0(DAT_0074c6ec);
        local_24 = local_24 + DAT_0074c044;
        if ((DAT_0074be40 != 0) && (DAT_0074be18 != 0)) {
          local_24 = local_24 + -1;
        }
        if (DAT_0074bee4 == 4) {
          pcVar11 = s_4VECT__d__d_1_005c342c;
        }
        else {
          pcVar11 = s_VECT__d__d_1_005c341c;
        }
        FUN_00558953(param_1,(byte *)pcVar11);
        iVar7 = local_24;
        while (iVar7 != 0) {
          iVar7 = iVar7 + -1;
          if (iVar7 % 0x14 == 0) {
            FUN_00558953(param_1,&DAT_005ae60c);
          }
          FUN_00558953(param_1,&DAT_005c3210);
        }
        FUN_00558953(param_1,(byte *)s___1_point_per_line_1_005c3404);
        iVar7 = local_24 + -2;
        if (local_24 != 1) {
          do {
            if (iVar7 % 0x14 == 0) {
              FUN_00558953(param_1,&DAT_005ae60c);
            }
            FUN_00558953(param_1,&DAT_005c3400);
            bVar10 = iVar7 != 0;
            iVar7 = iVar7 + -1;
          } while (bVar10);
        }
        FUN_00558953(param_1,(byte *)s___1_color_for_all_005c33ec);
        puVar9 = DAT_0074c048 + DAT_0074c044 * DAT_0074c03c * 2;
        for (puVar1 = DAT_0074c048; puVar1 < puVar9; puVar1 = puVar1 + DAT_0074c03c * 2) {
          if (((DAT_0074be40 == 0) || (DAT_0074be18 == 0)) ||
             (iVar7 = FUN_005164c0((uint)puVar1), iVar7 != DAT_0074c044 + -1)) {
            if (DAT_0074bee4 == 4) {
              FUN_00532a00(param_1,(char *)0x0,(uint)puVar1);
            }
            else {
              FUN_00532ae0(param_1,puVar1);
            }
          }
        }
        if (DAT_0074c6ec != (int *)0x0) {
          puVar9 = (undefined4 *)DAT_0074c6ec[1];
          piVar8 = DAT_0074c6ec + 2;
          while (puVar9 != (undefined4 *)0x0) {
            if (DAT_0074bee4 == 4) {
              FUN_00532a00(param_1,(char *)0x0,(uint)puVar9);
            }
            else {
              FUN_00532ae0(param_1,puVar9);
            }
            puVar9 = (undefined4 *)*piVar8;
            piVar8 = piVar8 + 1;
          }
        }
        FUN_00558953(param_1,(byte *)s_0_1_1_1___color_of_points_005c33d0);
      }
      if ((DAT_0074bee4 == 4) && (DAT_0074bef8 == 0)) {
        FUN_00558953(param_1,(byte *)s_4OFF__d__d_1_005c33c0);
      }
      _DAT_0074c6a0 = _DAT_0074c490 + _DAT_0074c490;
      dVar3 = _DAT_0074bea0;
      if (((DAT_0074bed8 != 0) || (dVar3 = _DAT_0074bea8, DAT_0074bed4 != 0)) &&
         (_DAT_0074c6a0 < dVar3 + _DAT_0074c490)) {
        _DAT_0074c6a0 = dVar3 + _DAT_0074c490;
      }
      _DAT_0074c6a8 = _DAT_0074c6a0;
      if ((DAT_0074bee0 + DAT_0074bf7c != 0) && (_DAT_0074c6a0 < _DAT_0074c498 * 0.02)) {
        _DAT_0074c6a8 = _DAT_0074c498 * 0.02;
      }
      dVar3 = _DAT_0074be30;
      if (((_DAT_0074be30 < 8.988465674311579e+307) ||
          (((DAT_0074bed8 == 0 && (DAT_0074bed4 != 0)) &&
           (dVar3 = _DAT_0074be38, _DAT_0074be38 < 8.988465674311579e+307)))) &&
         (dVar3 = (1.0 - dVar3) * _DAT_0074c498, _DAT_0074c6a8 < dVar3)) {
        _DAT_0074c6a8 = dVar3;
      }
      if (_DAT_0074c6a8 < (double)CONCAT44(DAT_0074bebc,DAT_0074beb8)) {
        _DAT_0074c6a8 = (double)CONCAT44(DAT_0074bebc,DAT_0074beb8);
      }
      if (_DAT_0074c668 < 8.988465674311579e+307) {
        _DAT_0074c6a8 = SQRT((double)DAT_0074c03c) * _DAT_0074c668 + _DAT_0074c6a8;
      }
      if ((DAT_0074bee4 != 4) &&
         (((DAT_0074bee0 != 0 || (DAT_0074bf7c != 0)) || (DAT_0074bedc != 0)))) {
        local_1c = FUN_0052db00(param_3,param_4,param_5);
        if ((DAT_0074bf7c != 0) && (DAT_0074bee4 < 4)) {
          FUN_00533020(param_1,local_1c);
        }
        if ((DAT_0074bee0 != 0) || (DAT_0074bedc != 0)) {
          DAT_0074c710 = 1;
          if ((DAT_0074bee0 != 0) && ((DAT_0074bf7c == 0 && (local_1c != 0)))) {
            piVar8 = (int *)(local_1c + 4);
            iVar7 = *(int *)(local_1c + 4);
            dVar3 = _DAT_0074c6a8;
            while (_DAT_0074c6a8 = dVar3, iVar7 != 0) {
              piVar8 = piVar8 + 1;
              DAT_0074c6ac = (undefined4)((ulonglong)dVar3 >> 0x20);
              uVar4 = DAT_0074c6ac;
              DAT_0074c6a8 = SUB84(dVar3,0);
              uVar5 = DAT_0074c6a8;
              FUN_00532ec0(param_1,*(undefined4 **)(iVar7 + 8),0,DAT_0074c5f0,uVar5,uVar4);
              dVar3 = _DAT_0074c6a8;
              iVar7 = *piVar8;
            }
          }
          for (; (param_3 != 0 && (*(int *)(param_3 + 0x30) != 0));
              param_3 = *(int *)(param_3 + 0x30)) {
            if (((param_5 != 0) || (uVar6 = FUN_00533dd0(param_3), uVar6 == 0)) &&
               (*(int *)(param_3 + 0x18) != 0)) {
              if ((DAT_0074bedc != 0) && (DAT_0074bee4 < 4)) {
                FUN_0052f850(param_1,param_3,DAT_0074c6a0,DAT_0074c6a4);
              }
              if (DAT_0074bee0 != 0) {
                iVar7 = *(int *)(param_3 + 0x44);
                if (iVar7 != 0) {
                  puVar9 = (undefined4 *)(iVar7 + 4);
                  puVar1 = *(undefined4 **)(iVar7 + 4);
                  dVar3 = _DAT_0074c6a8;
                  while (_DAT_0074c6a8 = dVar3, puVar1 != (undefined4 *)0x0) {
                    puVar9 = puVar9 + 1;
                    DAT_0074c6ac = (undefined4)((ulonglong)dVar3 >> 0x20);
                    uVar4 = DAT_0074c6ac;
                    DAT_0074c6a8 = SUB84(dVar3,0);
                    uVar5 = DAT_0074c6a8;
                    FUN_00532ec0(param_1,puVar1,*(int *)(param_3 + 0x18),0,uVar5,uVar4);
                    dVar3 = _DAT_0074c6a8;
                    puVar1 = (undefined4 *)*puVar9;
                  }
                }
                iVar7 = *(int *)(param_3 + 0x40);
                if (iVar7 != 0) {
                  puVar9 = (undefined4 *)(iVar7 + 4);
                  puVar1 = *(undefined4 **)(iVar7 + 4);
                  dVar3 = _DAT_0074c6a8;
                  while (_DAT_0074c6a8 = dVar3, puVar1 != (undefined4 *)0x0) {
                    puVar9 = puVar9 + 1;
                    DAT_0074c6ac = (undefined4)((ulonglong)dVar3 >> 0x20);
                    uVar4 = DAT_0074c6ac;
                    DAT_0074c6a8 = SUB84(dVar3,0);
                    uVar5 = DAT_0074c6a8;
                    FUN_00532ec0(param_1,puVar1,*(int *)(param_3 + 0x18),0,uVar5,uVar4);
                    dVar3 = _DAT_0074c6a8;
                    puVar1 = (undefined4 *)*puVar9;
                  }
                }
              }
            }
          }
          if (param_4 != 0) {
            iVar7 = *(int *)(param_4 + 4);
            local_20 = (int *)(param_4 + 8);
            while (iVar7 != 0) {
              if (((param_5 != 0) || (uVar6 = FUN_00533dd0(iVar7), uVar6 == 0)) &&
                 (*(int *)(iVar7 + 0x18) != 0)) {
                if ((DAT_0074bedc != 0) && (DAT_0074bee4 < 4)) {
                  FUN_0052f850(param_1,iVar7,DAT_0074c6a0,DAT_0074c6a4);
                }
                if (DAT_0074bee0 != 0) {
                  iVar2 = *(int *)(iVar7 + 0x44);
                  if (iVar2 != 0) {
                    puVar9 = (undefined4 *)(iVar2 + 4);
                    puVar1 = *(undefined4 **)(iVar2 + 4);
                    dVar3 = _DAT_0074c6a8;
                    while (_DAT_0074c6a8 = dVar3, puVar1 != (undefined4 *)0x0) {
                      puVar9 = puVar9 + 1;
                      DAT_0074c6ac = (undefined4)((ulonglong)dVar3 >> 0x20);
                      uVar4 = DAT_0074c6ac;
                      DAT_0074c6a8 = SUB84(dVar3,0);
                      uVar5 = DAT_0074c6a8;
                      FUN_00532ec0(param_1,puVar1,*(int *)(iVar7 + 0x18),0,uVar5,uVar4);
                      dVar3 = _DAT_0074c6a8;
                      puVar1 = (undefined4 *)*puVar9;
                    }
                  }
                  iVar2 = *(int *)(iVar7 + 0x40);
                  if (iVar2 != 0) {
                    puVar9 = (undefined4 *)(iVar2 + 4);
                    puVar1 = *(undefined4 **)(iVar2 + 4);
                    dVar3 = _DAT_0074c6a8;
                    while (_DAT_0074c6a8 = dVar3, puVar1 != (undefined4 *)0x0) {
                      puVar9 = puVar9 + 1;
                      DAT_0074c6ac = (undefined4)((ulonglong)dVar3 >> 0x20);
                      uVar4 = DAT_0074c6ac;
                      DAT_0074c6a8 = SUB84(dVar3,0);
                      uVar5 = DAT_0074c6a8;
                      FUN_00532ec0(param_1,puVar1,*(int *)(iVar7 + 0x18),0,uVar5,uVar4);
                      dVar3 = _DAT_0074c6a8;
                      puVar1 = (undefined4 *)*puVar9;
                    }
                  }
                }
              }
              iVar7 = *local_20;
              local_20 = local_20 + 1;
            }
          }
        }
        FUN_00514ba0(&local_1c);
      }
      DAT_0074c6d0 = DAT_0074c6d0 + 1;
      return;
    }
    break;
  case 9:
  case 0xb:
  case 0xc:
    if (DAT_0074be28 == 0) {
      FUN_00558953(param_1,(byte *)s__d__d_005c3350);
      return;
    }
    FUN_00558953(param_1,(byte *)s__s____s_begin__d__d_real_005c3358);
    return;
  case 0xd:
    if (DAT_0074c018 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__writing_Delaunay__005c3378);
    }
    DAT_0074c6b4 = DAT_0074c64c;
    if (3 < DAT_0074c03c) goto LAB_0052f334;
  case 1:
  case 10:
LAB_0052f334:
    FUN_00558953(param_1,&DAT_005c3290);
    return;
  case 0xe:
    if (DAT_0074c03c < 4) {
      if (DAT_0074c018 != 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__output_is_the_Del_005c3318);
      }
      FUN_00558953(param_1,&DAT_005c3314);
      DAT_0074c6b4 = 0;
      return;
    }
    break;
  case 0xf:
  case 0x19:
    FUN_00558953(param_1,&DAT_005c3290);
    return;
  case 0x10:
  case 0x18:
    if (DAT_0074c018 == 0) {
      local_24 = DAT_0074c03c;
      if ((param_2 == 0x10) || (DAT_0074c03c == 2)) {
        FUN_00514af0(DAT_0074c6ec);
      }
      else {
        iVar7 = FUN_00514af0(DAT_0074c6ec);
        DAT_0074c6b4 = iVar7 + DAT_0074c044;
        if (DAT_0074be40 != 0) {
          local_24 = local_24 + -1;
        }
      }
      FUN_00558953(param_1,(byte *)s__d__d__d__d_005c3304);
      puVar9 = DAT_0074c048 + DAT_0074c044 * DAT_0074c03c * 2;
      for (puVar1 = DAT_0074c048; puVar1 < puVar9; puVar1 = puVar1 + DAT_0074c03c * 2) {
        FUN_00532a30(DAT_0074c5e8,(char *)0x0,local_24,(int)puVar1,-1);
      }
      if (DAT_0074c6ec != (int *)0x0) {
        iVar7 = DAT_0074c6ec[1];
        piVar8 = DAT_0074c6ec + 2;
        while (iVar7 != 0) {
          FUN_00532a30(DAT_0074c5e8,(char *)0x0,local_24,iVar7,-1);
          iVar7 = *piVar8;
          piVar8 = piVar8 + 1;
        }
      }
      if (param_2 != 0x18) {
        return;
      }
      if (DAT_0074c03c < 3) {
        return;
      }
      iVar7 = DAT_0074c600;
      if (DAT_0074c600 == 0) {
        return;
      }
      do {
        if (*(int *)(iVar7 + 0x30) == 0) {
          return;
        }
        if (((*(uint *)(iVar7 + 0x50) & 0x1000) == 0) && (*(int *)(iVar7 + 0x48) != 0)) {
          FUN_0052f6e0(DAT_0074c5e8,0x18,(byte *)0x0,iVar7);
        }
        piVar8 = (int *)(iVar7 + 0x30);
        iVar7 = *piVar8;
      } while (*piVar8 != 0);
      return;
    }
    break;
  case 0x12:
    FUN_00558953(param_1,(byte *)s__d__d_005c3350);
    return;
  case 0x13:
    FUN_00558953(param_1,&DAT_005c3290);
    return;
  case 0x14:
    if (DAT_0074c018 != 0) {
      if (DAT_0074be28 != 0) {
        FUN_00558953(param_1,(byte *)s__s____s_begin__d__d_real_005c32e8);
        return;
      }
      goto LAB_0052f61a;
    }
  }
  FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_printbe_005c3298);
  FUN_0051e8e0(5,(int *)0x0);
switchD_0052ea94_caseD_0:
  return;
}


