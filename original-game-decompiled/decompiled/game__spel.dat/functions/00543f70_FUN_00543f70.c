
/* ==== FUN_00543f70 @ 00543f70 ==== 
 * signature: undefined __fastcall FUN_00543f70(int param_1)
 * body: 00543f70-00543fb4
 */

void __fastcall FUN_00543f70(int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      dVar3 = 0.0;
      pdVar4 = (double *)(*(int *)(param_1 + 0x10) + iVar7 * *(int *)(param_1 + 0xc) * 8);
      if (0 < iVar5) {
        iVar6 = *(int *)(param_1 + 0x14) - (int)pdVar4;
        do {
          pdVar1 = (double *)(iVar6 + (int)pdVar4);
          dVar2 = *pdVar4;
          pdVar4 = pdVar4 + 1;
          iVar5 = iVar5 + -1;
          dVar3 = *pdVar1 * dVar2 + dVar3;
        } while (iVar5 != 0);
      }
      iVar7 = iVar7 + 1;
      *(double *)(*(int *)(param_1 + 0x18) + -8 + iVar7 * 8) = dVar3;
      iVar5 = *(int *)(param_1 + 8);
    } while (iVar7 < iVar5);
  }
  return;
}


