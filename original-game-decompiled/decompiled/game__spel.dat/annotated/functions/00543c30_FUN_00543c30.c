
/* ==== FUN_00543c30 @ 00543c30 ==== 
 * signature: undefined __fastcall FUN_00543c30(double * param_1)
 * body: 00543c30-00543cd1
 */

void __fastcall FUN_00543c30(double *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    do {
      FUN_00543b10(param_1,iVar3);
      dVar1 = *(double *)(*(int *)(param_1 + 2) + (*(int *)((int)param_1 + 0xc) + 1) * iVar3 * 8);
      if (*param_1 <= ABS(dVar1)) {
        iVar4 = iVar3 + 1;
        if (iVar4 < *(int *)(param_1 + 1)) {
          do {
            dVar2 = *(double *)
                     (*(int *)(param_1 + 2) + (iVar4 * *(int *)((int)param_1 + 0xc) + iVar3) * 8);
            if (*param_1 < ABS(dVar2)) {
              FUN_00543a50(param_1,iVar3,iVar4,dVar2 * (-1.0 / dVar1));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 1));
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 1));
  }
  return;
}


