
/* ==== FUN_00548f90 @ 00548f90 ==== 
 * signature: undefined __fastcall FUN_00548f90(int param_1)
 * body: 00548f90-005490bc
 */

void __fastcall FUN_00548f90(int param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double local_10;
  
  iVar4 = *(int *)(param_1 + 8);
  dVar1 = 0.0;
  iVar6 = iVar4 + -1;
  if (iVar6 < 0) {
LAB_00548ff4:
    dVar1 = 1.0;
  }
  else {
    pdVar3 = (double *)(*(int *)(param_1 + 0x10) + (*(int *)(param_1 + 0xc) + 1) * iVar6 * 8);
    iVar5 = iVar4;
    do {
      if (dVar1 < *pdVar3) {
        dVar1 = *pdVar3;
      }
      pdVar3 = pdVar3 + (-1 - *(int *)(param_1 + 0xc));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (dVar1 <= 1e-19) goto LAB_00548ff4;
    dVar1 = 1.0 / dVar1;
  }
  *(double *)(param_1 + 0x20) = dVar1;
  dVar2 = 0.0;
  if (-1 < iVar6) {
    pdVar3 = (double *)(*(int *)(param_1 + 0x14) + iVar6 * 8);
    iVar6 = iVar4;
    do {
      if (dVar2 < ABS(*pdVar3)) {
        dVar2 = ABS(*pdVar3);
      }
      pdVar3 = pdVar3 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (1e-19 < dVar2) {
      local_10 = 1.0 / dVar2;
      goto LAB_00549060;
    }
  }
  dVar2 = 1.0;
  local_10 = 1.0;
LAB_00549060:
  iVar6 = 0;
  *(double *)(param_1 + 0x20) = dVar1 * dVar2;
  if (0 < iVar4) {
    do {
      iVar4 = 0;
      pdVar3 = (double *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * iVar6 * 8);
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          iVar4 = iVar4 + 1;
          *pdVar3 = dVar1 * *pdVar3;
          pdVar3 = pdVar3 + 1;
        } while (iVar4 < *(int *)(param_1 + 0xc));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 8));
  }
  iVar6 = *(int *)(param_1 + 8);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    *(double *)(*(int *)(param_1 + 0x14) + iVar6 * 8) =
         local_10 * *(double *)(*(int *)(param_1 + 0x14) + iVar6 * 8);
  }
  return;
}


