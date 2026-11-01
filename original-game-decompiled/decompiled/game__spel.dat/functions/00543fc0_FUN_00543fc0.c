
/* ==== FUN_00543fc0 @ 00543fc0 ==== 
 * signature: undefined __fastcall FUN_00543fc0(int param_1)
 * body: 00543fc0-00544005
 */

void __fastcall FUN_00543fc0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      dVar3 = 0.0;
      if (0 < iVar4) {
        pdVar6 = *(double **)(param_1 + 0x14);
        pdVar5 = (double *)(*(int *)(param_1 + 0x10) + iVar4 * iVar7 * 8);
        do {
          dVar1 = *pdVar5;
          dVar2 = *pdVar6;
          pdVar5 = pdVar5 + 1;
          pdVar6 = pdVar6 + 1;
          iVar4 = iVar4 + -1;
          dVar3 = dVar1 * dVar2 + dVar3;
        } while (iVar4 != 0);
      }
      iVar7 = iVar7 + 1;
      *(double *)(*(int *)(param_1 + 0x18) + -8 + iVar7 * 8) = dVar3;
      iVar4 = *(int *)(param_1 + 8);
    } while (iVar7 < iVar4);
  }
  return;
}


