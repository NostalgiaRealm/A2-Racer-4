
/* ==== FUN_005440f0 @ 005440f0 ==== 
 * signature: undefined4 __fastcall FUN_005440f0(int param_1)
 * body: 005440f0-00544165
 */

undefined4 __fastcall FUN_005440f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00544090(param_1);
  iVar1 = *(int *)(param_1 + 0x54);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(param_1 + 0x44);
    do {
      if (*(double *)(param_1 + 0x10) < ABS(*(double *)(*(int *)(param_1 + 0x28) + *piVar2 * 8))) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  if (iVar1 < *(int *)(param_1 + 0x4c)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x44) + iVar1 * 4);
    do {
      if (*(double *)(param_1 + 0x10) <
          ABS(*(double *)(*piVar2 * 8 + *(int *)(param_1 + 0x28)) -
              *(double *)(*piVar2 * 8 + *(int *)(param_1 + 0x34)))) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return 1;
}


