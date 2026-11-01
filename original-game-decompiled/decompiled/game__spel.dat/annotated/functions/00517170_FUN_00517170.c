
/* ==== FUN_00517170 @ 00517170 ==== 
 * signature: undefined __cdecl FUN_00517170(int * param_1, undefined4 param_2, uint * param_3, int param_4, undefined4 * param_5)
 * body: 00517170-00517a1c
 */

void __cdecl
FUN_00517170(int *param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint *puVar13;
  int *piVar14;
  int *piVar15;
  int *piStack_8;
  int *piStack_4;
  
  piVar5 = param_1;
  bVar3 = false;
  if ((param_1[0x14] & 0x400U) != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb5e0);
    FUN_0051e8e0(5,piVar5);
  }
  if (piVar5[6] == 0) {
    if (DAT_0074c5ec != (int *)0x0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb594);
    }
    bVar3 = true;
  }
  FUN_00514160((int *)piVar5[0xd]);
  FUN_00514160((int *)piVar5[0xe]);
  FUN_00514160((int *)piVar5[0x10]);
  FUN_00514160((int *)piVar5[0x11]);
  FUN_00514160((int *)piVar5[0xf]);
  iVar9 = piVar5[0xd];
  if (iVar9 != 0) {
    piVar14 = (int *)(iVar9 + 4);
    iVar9 = *(int *)(iVar9 + 4);
    uVar1 = 0x7fffffff;
    while (iVar9 != 0) {
      piVar14 = piVar14 + 1;
      if ((*(uint *)(iVar9 + 0x14) & 0x8000000) != 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb4f8);
        FUN_0051eb30(s_ERRONEOUS_005b9f2c,0,0,(int *)0x0,iVar9);
        bVar3 = true;
      }
      uVar8 = *(uint *)(iVar9 + 0x14) & 0xffffff;
      if (uVar1 <= uVar8) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb498);
        bVar3 = true;
        break;
      }
      uVar1 = uVar8;
      iVar9 = *piVar14;
    }
  }
  iVar9 = FUN_00514af0((int *)piVar5[0xf]);
  iVar10 = FUN_00514af0((int *)piVar5[0xd]);
  iVar11 = FUN_00514af0((int *)piVar5[0xe]);
  uVar1 = piVar5[0x14];
  if ((uVar1 & 0x1000) == 0) {
    if ((param_4 == 0) &&
       (((iVar10 < DAT_0074c03c || (iVar9 < DAT_0074c03c)) && ((uVar1 & 0x60000000) == 0)))) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb3c4);
      bVar3 = true;
    }
    if (iVar9 <= iVar11) {
      if (DAT_0074c03c == 3) {
        if ((iVar10 == iVar11) || (DAT_0074c690 != 0)) goto LAB_005173ef;
      }
      else if ((DAT_0074c03c != 2) || (iVar10 + iVar9 + iVar11 == 6)) goto LAB_005173ef;
    }
    if ((piVar5[0x14] & 0x60000000U) != 0) goto LAB_005173ef;
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb344);
  }
  else {
    if ((iVar10 + iVar9 == DAT_0074c03c * 2) || ((uVar1 & 0x60000000) != 0)) goto LAB_005173ef;
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb428);
    FUN_005149f0(DAT_0074c5ec,&DAT_00712694,(int *)piVar5[0xf]);
  }
  bVar3 = true;
LAB_005173ef:
  iVar9 = piVar5[0xf];
  if (iVar9 != 0) {
    iVar10 = *(int *)(iVar9 + 4);
    piVar14 = (int *)(iVar9 + 8);
    while (iVar10 != 0) {
      if ((iVar10 == 2) || (iVar10 == 1)) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb2f0);
        FUN_0051e8e0(5,piVar5);
      }
      *(uint *)(iVar10 + 0x50) = *(uint *)(iVar10 + 0x50) | 0x2000;
      iVar10 = *piVar14;
      piVar14 = piVar14 + 1;
    }
  }
  iVar9 = piVar5[0xf];
  if (iVar9 != 0) {
    piVar14 = *(int **)(iVar9 + 4);
    puVar13 = (uint *)(iVar9 + 8);
    while (piVar14 != (int *)0x0) {
      iVar9 = FUN_00514680(piVar14[0xf],(int)piVar5);
      if (iVar9 == 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb288);
        bVar3 = true;
        piStack_4 = piVar14;
      }
      if ((piVar14[0x14] & 0x2000U) == 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb238);
        bVar3 = true;
        piStack_4 = piVar14;
      }
      piVar14[0x14] = piVar14[0x14] & 0xffffdfff;
      piVar14 = (int *)*puVar13;
      puVar13 = puVar13 + 1;
    }
  }
  iVar9 = piVar5[0xe];
  if (iVar9 != 0) {
    puVar2 = *(undefined4 **)(iVar9 + 4);
    puVar4 = (undefined4 *)(iVar9 + 8);
    while (puVar2 != (undefined4 *)0x0) {
      FUN_00514160((int *)*puVar2);
      puVar2[3] = puVar2[3] & 0xfeffffff;
      puVar2 = (undefined4 *)*puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  iVar9 = piVar5[0xe];
  if (iVar9 != 0) {
    piVar14 = *(int **)(iVar9 + 4);
    puVar2 = (undefined4 *)(iVar9 + 8);
    while (piVar14 != (int *)0x0) {
      if ((piVar14[3] & 0x1000000U) != 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb1dc);
        bVar3 = true;
        piStack_8 = piVar14;
      }
      piVar14[3] = piVar14[3] | 0x1000000;
      iVar9 = FUN_00514af0((int *)*piVar14);
      if (iVar9 != DAT_0074c03c + -1) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb188);
        bVar3 = true;
        piStack_8 = piVar14;
      }
      piVar15 = (int *)piVar14[1];
      if (piVar15 == piVar5) {
        piVar15 = (int *)piVar14[2];
      }
      piVar15[0x14] = piVar15[0x14] | 0x2000;
      iVar9 = FUN_00514680(piVar5[0xf],(int)piVar15);
      if (iVar9 == 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb128);
        bVar3 = true;
        piStack_8 = piVar14;
      }
      piVar14 = (int *)*puVar2;
      puVar2 = puVar2 + 1;
    }
  }
  iVar9 = piVar5[0xf];
  if ((piVar5[0x14] & 0x1000U) == 0) {
    if (iVar9 != 0) {
      piVar14 = *(int **)(iVar9 + 4);
      param_3 = (uint *)(iVar9 + 8);
      while (piVar14 != (int *)0x0) {
        if ((piVar14[0x14] & 0x2000U) == 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb0d0);
          bVar3 = true;
          piStack_4 = piVar14;
        }
        param_1 = (int *)FUN_0051a6d0(piVar5[0xd],piVar14[0xd]);
        FUN_00514ce0(param_1);
        iVar9 = piVar5[0xd];
        if (iVar9 != 0) {
          iVar10 = *(int *)(iVar9 + 4);
          piVar15 = (int *)(iVar9 + 8);
          while (iVar10 != 0) {
            *(uint *)(iVar10 + 0x14) = *(uint *)(iVar10 + 0x14) & 0xfcffffff;
            iVar10 = *piVar15;
            piVar15 = piVar15 + 1;
          }
        }
        if (param_1 != (int *)0x0) {
          iVar9 = param_1[1];
          piVar15 = param_1 + 2;
          while (iVar9 != 0) {
            *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) | 0x1000000;
            iVar9 = *piVar15;
            piVar15 = piVar15 + 1;
          }
        }
        iVar9 = piVar5[0xe];
        if (iVar9 != 0) {
          piVar15 = *(int **)(iVar9 + 4);
          puVar2 = (undefined4 *)(iVar9 + 8);
          while (piVar15 != (int *)0x0) {
            piVar12 = (int *)piVar15[1];
            if (piVar12 == piVar5) {
              piVar12 = (int *)piVar15[2];
            }
            if ((piVar14 == piVar12) && (iVar9 = *piVar15, iVar9 != 0)) {
              iVar10 = *(int *)(iVar9 + 4);
              piVar15 = (int *)(iVar9 + 8);
              while (iVar10 != 0) {
                if ((*(uint *)(iVar10 + 0x14) & 0x1000000) == 0) {
                  FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005bb07c);
                  FUN_0051e8e0(5,piVar5);
                }
                *(uint *)(iVar10 + 0x14) = *(uint *)(iVar10 + 0x14) | 0x2000000;
                iVar10 = *piVar15;
                piVar15 = piVar15 + 1;
              }
            }
            piVar15 = (int *)*puVar2;
            puVar2 = puVar2 + 1;
          }
        }
        if ((param_4 == 0) && (param_1 != (int *)0x0)) {
          iVar9 = param_1[1];
          piVar15 = param_1 + 2;
          while (iVar9 != 0) {
            if (((*(uint *)(iVar9 + 0x14) & 0x2000000) == 0) &&
               ((((2 < DAT_0074be68 || (DAT_0074be98 == 0)) &&
                 (FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__qh_checkf_005baff0),
                 DAT_0074be4c == 0)) &&
                ((DAT_0074be98 == 0 &&
                 (FUN_0051eb30(s_ERRONEOUS_005b9f2c,(uint)piVar5,(uint)piVar14,(int *)0x0,iVar9),
                 DAT_0074be98 == 0)))))) {
              FUN_0051e8e0(5,(int *)0x0);
            }
            iVar9 = *piVar15;
            piVar15 = piVar15 + 1;
          }
        }
        FUN_00514ba0((int *)&param_1);
        piVar14 = (int *)*param_3;
        param_3 = param_3 + 1;
      }
    }
  }
  else if (iVar9 != 0) {
    piVar14 = *(int **)(iVar9 + 4);
    param_3 = (uint *)(iVar9 + 8);
    while (piVar14 != (int *)0x0) {
      if ((piVar14[0x14] & 0x1000U) != 0) {
        iVar10 = (int)param_3 + (-8 - piVar5[0xf]);
        iVar9 = FUN_005146b0((int *)piVar14[0xf],(int)piVar5);
        bVar6 = FUN_00514590((int *)piVar5[0xd],iVar10 >> 2,(int *)piVar14[0xd],iVar9);
        if (CONCAT31(extraout_var,bVar6) == 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkfa_005baf90);
          bVar3 = true;
          piStack_4 = piVar14;
        }
      }
      piVar14 = (int *)*param_3;
      param_3 = param_3 + 1;
    }
  }
  if (((DAT_0074c03c < 5) && ((2 < DAT_0074be68 || (DAT_0074be2c != 0)))) &&
     (piVar14 = (int *)piVar5[0xe], piVar14 != (int *)0x0)) {
    piVar15 = (int *)piVar14[1];
    iVar9 = FUN_00514af0(piVar14);
    if (0 < iVar9) {
      param_3 = (uint *)0x1;
      do {
        if ((int)param_3 < iVar9) {
          param_4 = iVar9 - (int)param_3;
          iVar10 = (int)param_3 * 4;
          do {
            iVar10 = iVar10 + 4;
            uVar7 = FUN_005144c0((int *)*piVar15,(int *)**(undefined4 **)(piVar5[0xe] + iVar10));
            if (CONCAT31(extraout_var_00,uVar7) != 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkfacet__ridges_r_d_and_r__005baf54);
              bVar3 = true;
              piStack_8 = piVar15;
            }
            param_4 = param_4 + -1;
          } while (param_4 != 0);
          param_4 = 0;
        }
        puVar13 = (uint *)((int)param_3 + 1);
        piVar15 = *(int **)(piVar5[0xe] + (int)puVar13 * 4);
        bVar6 = (int)param_3 < iVar9;
        param_3 = puVar13;
      } while (bVar6);
    }
  }
  if (bVar3) {
    FUN_0051eb30(s_ERRONEOUS_005b9f2c,(uint)piVar5,(uint)piStack_4,piStack_8,0);
    *param_5 = 1;
  }
  return;
}


