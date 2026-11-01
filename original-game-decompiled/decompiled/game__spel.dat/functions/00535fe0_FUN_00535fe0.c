
/* ==== FUN_00535fe0 @ 00535fe0 ==== 
 * signature: undefined __cdecl FUN_00535fe0(int param_1)
 * body: 00535fe0-0053619a
 */

void __cdecl FUN_00535fe0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  local_8 = 0;
  local_4 = 0x40140000;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maydropneighbor__test_f_d_for_005c5edc);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    piVar2 = (int *)(iVar3 + 8);
    while (iVar1 != 0) {
      *(int *)(*(int *)(iVar1 + 4) + 0x48) = DAT_0074c6d0;
      *(int *)(*(int *)(iVar1 + 8) + 0x48) = DAT_0074c6d0;
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    piVar2 = (int *)(iVar3 + 4);
    while (iVar1 != 0) {
      piVar4 = piVar2 + 1;
      if (*(int *)(iVar1 + 0x48) != DAT_0074c6d0) {
        if (DAT_0074be68 != 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maydropneighbor__facets_f_d_a_005c5e90);
        }
        DAT_0074c9f0 = DAT_0074c9f0 + 1;
        FUN_00514280(*(int **)(param_1 + 0x3c),iVar1);
        FUN_00514280(*(int **)(iVar1 + 0x3c),param_1);
        iVar3 = FUN_00514af0(*(int **)(iVar1 + 0x3c));
        piVar4 = piVar2;
        if (iVar3 < DAT_0074c03c) {
          DAT_0074c9e8 = DAT_0074c9e8 + 1;
          FUN_005344e0(iVar1,iVar1,6,&local_8);
          if (1 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maydropneighbors__f_d_is_dege_005c5e64);
          }
        }
      }
      piVar2 = piVar4;
      iVar1 = *piVar4;
    }
  }
  iVar3 = FUN_00514af0(*(int **)(param_1 + 0x3c));
  if (iVar3 < DAT_0074c03c) {
    DAT_0074c9e8 = DAT_0074c9e8 + 1;
    FUN_005344e0(param_1,param_1,6,&local_8);
    if (1 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maydropneighbors__f_d_is_dege_005c5e64);
    }
  }
  return;
}


