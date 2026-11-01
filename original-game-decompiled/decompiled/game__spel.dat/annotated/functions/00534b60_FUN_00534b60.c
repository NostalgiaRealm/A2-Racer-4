
/* ==== FUN_00534b60 @ 00534b60 ==== 
 * signature: undefined __cdecl FUN_00534b60(int param_1, int param_2)
 * body: 00534b60-00534d22
 */

void __cdecl FUN_00534b60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_degen_redundant_neighbors__te_005c5978);
  }
  iVar1 = FUN_00514af0(*(int **)(param_1 + 0x3c));
  if ((iVar1 < DAT_0074c03c) &&
     (FUN_005344e0(param_1,param_1,6,(undefined4 *)0x0), 1 < DAT_0074be68)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_degen_redundant_neighbors__f__005c5934);
  }
  if (param_2 == 0) {
    param_2 = param_1;
  }
  DAT_0074c6d4 = DAT_0074c6d4 + 1;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar4 = (int *)(iVar1 + 8);
    while (iVar2 != 0) {
      *(int *)(iVar2 + 0x10) = DAT_0074c6d4;
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 != 0) {
    piVar4 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      if (iVar1 != param_1) {
        iVar2 = *(int *)(iVar1 + 0x34);
        if (iVar2 != 0) {
          piVar3 = (int *)(iVar2 + 4);
          iVar2 = *(int *)(iVar2 + 4);
          while (iVar2 != 0) {
            piVar3 = piVar3 + 1;
            if (*(int *)(iVar2 + 0x10) != DAT_0074c6d4) {
              if (iVar2 != 0) goto LAB_00534ca5;
              break;
            }
            iVar2 = *piVar3;
          }
        }
        FUN_005344e0(iVar1,param_1,7,(undefined4 *)0x0);
        if (1 < DAT_0074be68) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_degen_redundant_neighbors__f__005c58f4);
        }
      }
LAB_00534ca5:
      iVar1 = *piVar4;
    }
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 != 0) {
    piVar4 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      if (((iVar1 != param_1) &&
          (iVar2 = FUN_00514af0(*(int **)(iVar1 + 0x3c)), iVar2 < DAT_0074c03c)) &&
         (FUN_005344e0(iVar1,iVar1,6,(undefined4 *)0x0), 1 < DAT_0074be68)) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_degen_redundant_neighbors__f__005c589c);
      }
      iVar1 = *piVar4;
    }
  }
  return;
}


