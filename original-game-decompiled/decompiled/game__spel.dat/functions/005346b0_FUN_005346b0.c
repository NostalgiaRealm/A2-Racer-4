
/* ==== FUN_005346b0 @ 005346b0 ==== 
 * signature: undefined4 __cdecl FUN_005346b0(int param_1)
 * body: 005346b0-005349af
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_005346b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar2 = DAT_0074c60c;
  iVar4 = DAT_0074c600;
  if (param_1 == 0) {
    while ((iVar2 != 0 && (*(int *)(iVar2 + 0x30) != 0))) {
      if (((*(uint *)(*(int *)(*(int *)(iVar2 + 0x3c) + 4) + 0x50) & 0x1000) == 0) ||
         (((*(uint *)(iVar2 + 0x50) & 0x108000) != 0 ||
          (piVar1 = (int *)(iVar2 + 0x18), iVar2 = *(int *)(iVar2 + 0x30), *piVar1 == 0)))) {
        DAT_0074c6d8 = 0;
        if (1 < DAT_0074be68) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkzero__facet_f_d_needs_pr_005c574c);
        }
        return 0;
      }
    }
    iVar4 = DAT_0074c60c;
    if ((DAT_0074be90 != 0) && (DAT_0074c6d8 != 0)) {
      if (DAT_0074be68 < 2) {
        return 1;
      }
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkzero__skip_convexity_che_005c5778);
      return 1;
    }
  }
  do {
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x30) == 0)) {
      if (1 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkzero__testall__d__facets_005c56e4);
      }
      return 1;
    }
    iVar5 = 0;
    DAT_0074c6d4 = DAT_0074c6d4 + 1;
    local_14 = 0;
    iVar2 = *(int *)(iVar4 + 0x3c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 4);
      piVar1 = (int *)(iVar2 + 8);
      while (iVar3 != 0) {
        if ((iVar5 == 0) && (param_1 == 0)) {
          iVar5 = 1;
          local_14 = iVar3;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar4 + 0x34) + 4 + iVar5 * 4);
          iVar5 = iVar5 + 1;
          *(int *)(iVar2 + 0x10) = DAT_0074c6d4;
          DAT_0074c988 = DAT_0074c988 + 1;
          FUN_005273a0(*(double **)(iVar2 + 8),iVar3,(double *)&local_10);
          if ((-_DAT_0074c490 <= (double)CONCAT44(uStack_c,local_10)) &&
             (((DAT_0074c6d8 = 0, DAT_0074be90 == 0 || (param_1 != 0)) ||
              (_DAT_0074c490 < (double)CONCAT44(uStack_c,local_10))))) goto LAB_0053496b;
        }
        iVar3 = *piVar1;
        piVar1 = piVar1 + 1;
      }
    }
    if ((param_1 == 0) && (iVar2 = *(int *)(local_14 + 0x34), iVar2 != 0)) {
      iVar5 = *(int *)(iVar2 + 4);
      piVar1 = (int *)(iVar2 + 8);
      while (iVar5 != 0) {
        if (*(int *)(iVar5 + 0x10) != DAT_0074c6d4) {
          DAT_0074c988 = DAT_0074c988 + 1;
          FUN_005273a0(*(double **)(iVar5 + 8),iVar4,(double *)&local_10);
          if ((-_DAT_0074c490 <= (double)CONCAT44(uStack_c,local_10)) &&
             ((DAT_0074c6d8 = 0, DAT_0074be90 == 0 ||
              (_DAT_0074c490 < (double)CONCAT44(uStack_c,local_10))))) {
LAB_0053496b:
            DAT_0074c6d8 = 0;
            if (1 < DAT_0074be68) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkzero__facet_f_d_and_f_d_a_005c569c);
            }
            return 0;
          }
          break;
        }
        iVar5 = *piVar1;
        piVar1 = piVar1 + 1;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x30);
  } while( true );
}


