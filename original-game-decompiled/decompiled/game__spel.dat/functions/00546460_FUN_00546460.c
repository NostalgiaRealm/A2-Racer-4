
/* ==== FUN_00546460 @ 00546460 ==== 
 * signature: undefined __fastcall FUN_00546460(int param_1)
 * body: 00546460-005464a4
 */

void __fastcall FUN_00546460(int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x2c) + -1;
  while (-1 < iVar6) {
    dVar3 = 0.0;
    iVar5 = *(int *)(param_1 + 0x2c);
    if (-1 < iVar5 + -1) {
      pdVar4 = (double *)(*(int *)(param_1 + 0x24) + (iVar5 + -1) * 8);
      do {
        pdVar1 = (double *)
                 (((*(int *)(param_1 + 8) + iVar6 * *(int *)(param_1 + 0x28) * 8) -
                  *(int *)(param_1 + 0x24)) + (int)pdVar4);
        dVar2 = *pdVar4;
        pdVar4 = pdVar4 + -1;
        iVar5 = iVar5 + -1;
        dVar3 = *pdVar1 * dVar2 + dVar3;
      } while (iVar5 != 0);
    }
    iVar6 = iVar6 + -1;
    *(double *)(*(int *)(param_1 + 0x20) + 8 + iVar6 * 8) = dVar3;
  }
  return;
}


