
/* ==== FUN_00544010 @ 00544010 ==== 
 * signature: undefined __fastcall FUN_00544010(int param_1)
 * body: 00544010-0054408b
 */

void __fastcall FUN_00544010(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x54);
  if (iVar7 < *(int *)(param_1 + 0x4c)) {
    do {
      piVar3 = *(int **)(param_1 + 0x44);
      piVar1 = piVar3 + iVar7;
      dVar5 = 0.0;
      iVar2 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0x50) * *piVar1 * 8;
      iVar8 = *(int *)(param_1 + 0x54);
      if (0 < iVar8) {
        piVar6 = piVar3;
        do {
          iVar4 = *piVar6;
          piVar6 = piVar6 + 1;
          iVar8 = iVar8 + -1;
          dVar5 = *(double *)(*(int *)(param_1 + 0x30) + iVar4 * 8) * *(double *)(iVar2 + iVar4 * 8)
                  + dVar5;
        } while (iVar8 != 0);
      }
      iVar7 = iVar7 + 1;
      *(double *)(*(int *)(param_1 + 0x38) + *piVar1 * 8) =
           dVar5 + *(double *)(iVar2 + piVar3[*(int *)(param_1 + 0x5c)] * 8);
    } while (iVar7 < *(int *)(param_1 + 0x4c));
  }
  return;
}


