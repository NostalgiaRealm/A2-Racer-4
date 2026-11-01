
/* ==== FUN_00535190 @ 00535190 ==== 
 * signature: int __cdecl FUN_00535190(int * param_1, double * param_2, double * param_3, double * param_4, double * param_5)
 * body: 00535190-00535346
 */

int __cdecl
FUN_00535190(int *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_retaddr;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  local_4 = 1;
  local_8 = 0;
  iVar1 = FUN_00514af0((int *)param_1[0xd]);
  *(undefined4 *)param_2 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 4) = 0x7fefffff;
  if (DAT_0074c03c * 2 + 0x14 < iVar1) {
    local_8 = 1;
    DAT_0074c848 = DAT_0074c848 + 1;
    if (param_1[10] == 0) {
      iVar2 = FUN_00528400((int)param_1);
      param_1[10] = iVar2;
    }
  }
  if ((DAT_0074c03c + 0xf < iVar1) && (iVar1 = param_1[0xe], iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar4 = (int *)(iVar1 + 8);
    while (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0xc) & 0x4000000) != 0) {
        piVar3 = *(int **)(iVar2 + 4);
        if (piVar3 == param_1) {
          piVar3 = *(int **)(iVar2 + 8);
        }
        FUN_005350d0(local_8,(int)param_1,(int)piVar3,&local_c,param_2,param_3,param_4);
      }
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
    }
  }
  iVar1 = local_c;
  if (local_c == 0) {
    iVar1 = param_1[0xf];
    local_4 = local_c;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      piVar4 = (int *)(iVar1 + 8);
      if (iVar2 != 0) {
        do {
          FUN_005350d0(local_8,(int)param_1,iVar2,&local_c,param_2,param_3,param_4);
          iVar2 = *piVar4;
          piVar4 = piVar4 + 1;
        } while (iVar2 != 0);
        iVar1 = local_c;
        if (local_c != 0) goto LAB_005352d3;
      }
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_findbes_005c5b40);
    FUN_0051e8e0(5,param_1);
    iVar1 = local_4;
  }
LAB_005352d3:
  if (unaff_retaddr != 0) {
    FUN_00528490((int)param_1,iVar1,param_5,param_4);
    iVar1 = local_4;
  }
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findbestneighbor__f_d_is_best_005c5ad0);
    iVar1 = local_4;
  }
  return iVar1;
}


