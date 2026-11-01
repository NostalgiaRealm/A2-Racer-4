
/* ==== FUN_00515520 @ 00515520 ==== 
 * signature: undefined4 __cdecl FUN_00515520(int param_1, int param_2, uint * param_3, int * param_4, int param_5)
 * body: 00515520-0051568c
 */

undefined4 __cdecl FUN_00515520(int param_1,int param_2,uint *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = DAT_0074c03c;
  iVar3 = *(int *)(param_2 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar6 = 0;
  if (param_2 == *(int *)(iVar1 + 4)) {
    *param_3 = 0;
  }
  else if (param_2 == *(int *)(iVar1 + 8)) {
    *param_3 = 1;
  }
  else {
    piVar5 = (int *)(iVar1 + 0x10);
    if (param_2 == *(int *)(iVar1 + 0xc)) {
      *param_3 = 2;
    }
    else {
      uVar6 = 3;
      if (3 < DAT_0074c03c) {
        do {
          iVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          if (param_2 == iVar1) {
            *param_3 = uVar6;
            break;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < DAT_0074c03c);
      }
    }
  }
  if (param_1 == *(int *)(iVar3 + 4)) {
    iVar3 = 0;
    *param_4 = 0;
  }
  else if (param_1 == *(int *)(iVar3 + 8)) {
    iVar3 = 0;
    *param_4 = 1;
  }
  else {
    piVar5 = (int *)(iVar3 + 0x10);
    if (param_1 == *(int *)(iVar3 + 0xc)) {
      iVar3 = 0;
      *param_4 = 2;
    }
    else {
      iVar3 = 3;
      if (3 < iVar2) {
        do {
          iVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          if (param_1 == iVar1) {
            *param_4 = iVar3;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
    }
  }
  if ((iVar2 <= (int)uVar6) || (iVar2 <= iVar3)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_facetin_005ba51c);
    FUN_005258d0(5,param_1,param_2);
  }
  uVar4 = FUN_00514880(*(int **)(param_1 + 0x34),DAT_0074c03c,*param_3,param_5);
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_facetintersect__f_d_skip__d_m_005ba4e8);
  }
  return uVar4;
}


