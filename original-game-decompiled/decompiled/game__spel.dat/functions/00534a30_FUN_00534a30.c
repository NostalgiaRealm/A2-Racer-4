
/* ==== FUN_00534a30 @ 00534a30 ==== 
 * signature: undefined __cdecl FUN_00534a30(int param_1)
 * body: 00534a30-00534b5c
 */

void __cdecl FUN_00534a30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_degen_redundant_facet__test_f_005c585c);
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 != 0) {
    piVar4 = (int *)(iVar2 + 4);
    iVar2 = *(int *)(iVar2 + 4);
    while (iVar2 != 0) {
      piVar4 = piVar4 + 1;
      DAT_0074c6d4 = DAT_0074c6d4 + 1;
      iVar1 = *(int *)(iVar2 + 0x34);
      if (iVar1 != 0) {
        piVar3 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar3 = piVar3 + 1;
          *(int *)(iVar1 + 0x10) = DAT_0074c6d4;
          iVar1 = *piVar3;
        }
      }
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
LAB_00534adb:
        FUN_005344e0(param_1,iVar2,7,(undefined4 *)0x0);
        if (DAT_0074be68 < 2) {
          return;
        }
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_degen_redundant_facet__f_d_is_005c5820);
        return;
      }
      piVar3 = (int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 4);
      while( true ) {
        if (iVar1 == 0) goto LAB_00534adb;
        piVar3 = piVar3 + 1;
        if (*(int *)(iVar1 + 0x10) != DAT_0074c6d4) break;
        iVar1 = *piVar3;
      }
      if (iVar1 == 0) goto LAB_00534adb;
      iVar2 = *piVar4;
    }
  }
  iVar2 = FUN_00514af0(*(int **)(param_1 + 0x3c));
  if ((iVar2 < DAT_0074c03c) &&
     (FUN_005344e0(param_1,param_1,6,(undefined4 *)0x0), 1 < DAT_0074be68)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_degen_redundant_neighbors__f__005c57ec);
  }
  return;
}


