
/* ==== FUN_005464b0 @ 005464b0 ==== 
 * signature: undefined __fastcall FUN_005464b0(int param_1)
 * body: 005464b0-00546504
 */

void __fastcall FUN_005464b0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  
  iVar6 = *(int *)(param_1 + 0x2c) + -1;
  while (-1 < iVar6) {
    dVar3 = 0.0;
    iVar4 = *(int *)(param_1 + 0x2c) + -1;
    if (iVar6 < iVar4) {
      pdVar8 = (double *)(*(int *)(param_1 + 0x20) + iVar4 * 8);
      iVar5 = iVar4 - iVar6;
      pdVar7 = (double *)(*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 0x28) * iVar6 + iVar4) * 8);
      do {
        dVar1 = *pdVar8;
        dVar2 = *pdVar7;
        pdVar7 = pdVar7 + -1;
        pdVar8 = pdVar8 + -1;
        iVar5 = iVar5 + -1;
        dVar3 = dVar1 * dVar2 + dVar3;
      } while (iVar5 != 0);
    }
    dVar3 = *(double *)(*(int *)(param_1 + 0x20) + iVar6 * 8) - dVar3;
    iVar4 = iVar6 * 8;
    iVar6 = iVar6 + -1;
    *(double *)(*(int *)(param_1 + 0x20) + iVar4) = dVar3;
    *(double *)(*(int *)(param_1 + 0x1c) + 8 + iVar6 * 8) = dVar3;
  }
  return;
}


