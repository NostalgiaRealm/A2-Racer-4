
/* ==== FUN_00543ce0 @ 00543ce0 ==== 
 * signature: undefined4 __fastcall FUN_00543ce0(double * param_1)
 * body: 00543ce0-00543d8e
 */

undefined4 __fastcall FUN_00543ce0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  
  iVar6 = *(int *)(param_1 + 1);
  while( true ) {
    while( true ) {
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 1)) {
          do {
            iVar4 = *(int *)((int)param_1 + 0x14);
            iVar5 = *(int *)(param_1 + 3);
            *(undefined4 *)(iVar5 + iVar6 * 8) = *(undefined4 *)(iVar4 + iVar6 * 8);
            *(undefined4 *)(iVar5 + 4 + iVar6 * 8) = *(undefined4 *)(iVar4 + 4 + iVar6 * 8);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 1));
        }
        return 1;
      }
      iVar4 = *(int *)((int)param_1 + 0x14);
      iVar5 = *(int *)(param_1 + 1) + -1;
      dVar1 = *(double *)(iVar4 + iVar6 * 8);
      pdVar7 = (double *)
               (*(int *)(param_1 + 2) + -8 +
               (*(int *)((int)param_1 + 0xc) * iVar6 + *(int *)(param_1 + 1)) * 8);
      if (iVar6 < iVar5) {
        pdVar8 = (double *)(iVar4 + iVar5 * 8);
        iVar5 = iVar5 - iVar6;
        do {
          dVar2 = *pdVar8;
          dVar3 = *pdVar7;
          pdVar7 = pdVar7 + -1;
          pdVar8 = pdVar8 + -1;
          iVar5 = iVar5 + -1;
          dVar1 = dVar1 - dVar2 * dVar3;
        } while (iVar5 != 0);
      }
      if (ABS(*pdVar7) < *param_1) break;
      *(double *)(iVar4 + iVar6 * 8) = dVar1 / *pdVar7;
    }
    if (*param_1 * 1000.0 <= ABS(dVar1)) break;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 0;
    *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = 0;
  }
  return 0;
}


