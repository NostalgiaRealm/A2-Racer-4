
/* ==== FUN_00544090 @ 00544090 ==== 
 * signature: undefined __fastcall FUN_00544090(int param_1)
 * body: 00544090-005440e3
 */

void __fastcall FUN_00544090(int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      dVar3 = 0.0;
      if (-1 < iVar5 + -1) {
        pdVar4 = (double *)(*(int *)(param_1 + 0x2c) + (iVar5 + -1) * 8);
        do {
          pdVar1 = (double *)
                   (((*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x50) * iVar6 * 8) -
                    *(int *)(param_1 + 0x2c)) + (int)pdVar4);
          dVar2 = *pdVar4;
          pdVar4 = pdVar4 + -1;
          iVar5 = iVar5 + -1;
          dVar3 = *pdVar1 * dVar2 + dVar3;
        } while (iVar5 != 0);
      }
      iVar5 = iVar6 * 8;
      iVar6 = iVar6 + 1;
      *(double *)(*(int *)(param_1 + 0x28) + -8 + iVar6 * 8) =
           dVar3 - *(double *)(*(int *)(param_1 + 0x24) + iVar5);
      iVar5 = *(int *)(param_1 + 0x4c);
    } while (iVar6 < iVar5);
  }
  return;
}


