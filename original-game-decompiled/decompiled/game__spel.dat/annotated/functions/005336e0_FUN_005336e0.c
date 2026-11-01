
/* ==== FUN_005336e0 @ 005336e0 ==== 
 * signature: undefined __cdecl FUN_005336e0(int * param_1, int param_2, int param_3, int param_4, int * param_5)
 * body: 005336e0-00533b1e
 */

void __cdecl FUN_005336e0(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  code *pcVar11;
  int local_c;
  int local_8;
  uint local_4;
  
  piVar3 = param_1;
  uVar2 = DAT_0074c634;
  param_5 = FUN_0052df80(param_3,param_4,(int)param_5,&local_4,&local_8);
  if (param_5 != (int *)0x0) {
    iVar5 = param_5[1];
    local_c = FUN_00514af0(param_5);
    if (0 < local_c) {
      iVar7 = 4;
      do {
        if (iVar5 != 0) {
          iVar5 = *(int *)(iVar5 + 0xc);
          bVar1 = false;
          iVar8 = 0;
          if (iVar5 != 0) {
            piVar6 = (int *)(iVar5 + 4);
            iVar5 = *(int *)(iVar5 + 4);
            if (iVar5 != 0) {
              do {
                piVar6 = piVar6 + 1;
                if (*(uint *)(iVar5 + 0x48) == 0) {
                  bVar1 = true;
                }
                else if (*(uint *)(iVar5 + 0x48) < uVar2) {
                  iVar8 = iVar8 + 1;
                }
                iVar5 = *piVar6;
              } while (iVar5 != 0);
              if ((bVar1) && (iVar8 == 0)) {
                *(undefined4 *)((int)param_5 + iVar7) = 0;
              }
            }
          }
        }
        iVar5 = *(int *)((int)param_5 + iVar7 + 4);
        iVar7 = iVar7 + 4;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  if (param_2 == 7) {
    FUN_00558953(param_1,(byte *)s__appearance___edge__face__OFF__d_005c5410);
    iVar5 = DAT_0074c03c;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
    }
    pcVar10 = s_0___infinity_not_used_005c53e0;
  }
  else {
    FUN_00514af0(param_5);
    FUN_00558953(param_1,(byte *)s__d__d__d_1_005c5404);
    iVar5 = DAT_0074c03c;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
    }
    pcVar10 = &DAT_005ae60c;
  }
  FUN_00558953(param_1,(byte *)pcVar10);
  for (; (param_3 != 0 && (*(int *)(param_3 + 0x30) != 0)); param_3 = *(int *)(param_3 + 0x30)) {
    if ((*(uint *)(param_3 + 0x48) != 0) && (*(uint *)(param_3 + 0x48) < uVar2)) {
      if (param_2 == 7) {
        FUN_00558953(param_1,(byte *)s____d_f_d_005c53f8);
      }
      FUN_0052f6e0(param_1,param_2,(byte *)0x0,param_3);
    }
  }
  if (param_4 != 0) {
    iVar5 = *(int *)(param_4 + 4);
    piVar6 = (int *)(param_4 + 8);
    while (iVar5 != 0) {
      if ((*(uint *)(iVar5 + 0x48) != 0) && (*(uint *)(iVar5 + 0x48) < uVar2)) {
        if (param_2 == 7) {
          FUN_00558953(param_1,(byte *)s____d_f_d_005c53f8);
        }
        FUN_0052f6e0(param_1,param_2,(byte *)0x0,iVar5);
      }
      iVar5 = *piVar6;
      piVar6 = piVar6 + 1;
    }
  }
  if (param_5 != (int *)0x0) {
    iVar5 = param_5[1];
    param_3 = 0;
    iVar7 = FUN_00514af0(param_5);
    if (0 < iVar7) {
      param_1 = (int *)0x4;
      do {
        bVar1 = false;
        if (iVar5 != 0) {
          if (DAT_0074c03c == 3) {
            FUN_0052e160(iVar5);
          }
          else if (3 < DAT_0074c03c) {
            pcVar11 = FUN_0052d610;
            uVar9 = 4;
            puVar4 = (undefined4 *)FUN_00514af0(*(int **)(iVar5 + 0xc));
            FUN_00558d5b((int *)(*(int *)(iVar5 + 0xc) + 4),puVar4,uVar9,pcVar11);
          }
          iVar8 = *(int *)(iVar5 + 0xc);
          if (iVar8 != 0) {
            piVar6 = (int *)(iVar8 + 4);
            iVar8 = *(int *)(iVar8 + 4);
            while (iVar8 != 0) {
              piVar6 = piVar6 + 1;
              if (*(int *)(iVar8 + 0x48) == 0) {
                bVar1 = true;
              }
              iVar8 = *piVar6;
            }
          }
        }
        if (param_2 == 7) {
          if (iVar5 == 0) {
            FUN_00558953(piVar3,(byte *)s___p_d_is_coplanar_or_isolated_005c53b0);
          }
          else {
            FUN_00558953(piVar3,&DAT_005aeedc);
            iVar5 = *(int *)(iVar5 + 0xc);
            if (iVar5 != 0) {
              iVar8 = *(int *)(iVar5 + 4);
              piVar6 = (int *)(iVar5 + 8);
              while (iVar8 != 0) {
                if ((*(uint *)(iVar8 + 0x48) != 0) && (*(uint *)(iVar8 + 0x48) < uVar2)) {
                  FUN_00558953(piVar3,(byte *)&PTR_DAT_005bc6dc);
                }
                iVar8 = *piVar6;
                piVar6 = piVar6 + 1;
              }
            }
            FUN_00558953(piVar3,(byte *)s___p_d__v_d__005c53d0);
          }
        }
        else {
          FUN_00558953(piVar3,&DAT_005aeedc);
          if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0xc), iVar5 != 0)) {
            iVar8 = *(int *)(iVar5 + 4);
            piVar6 = (int *)(iVar5 + 8);
            while (iVar8 != 0) {
              if (*(uint *)(iVar8 + 0x48) == 0) {
                if (bVar1) {
                  bVar1 = false;
LAB_00533aa7:
                  FUN_00558953(piVar3,(byte *)&PTR_DAT_005bc6dc);
                }
              }
              else if (*(uint *)(iVar8 + 0x48) < uVar2) goto LAB_00533aa7;
              iVar8 = *piVar6;
              piVar6 = piVar6 + 1;
            }
          }
          FUN_00558953(piVar3,&DAT_005ae60c);
        }
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        iVar5 = *(int *)((int)param_1 + (int)param_5);
      } while (param_3 < iVar7);
    }
  }
  if (param_2 == 7) {
    FUN_00558953(piVar3,&DAT_005b2640);
  }
  FUN_00514ba0((int *)&param_5);
  return;
}


