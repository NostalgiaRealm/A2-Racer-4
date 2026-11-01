
/* ==== FUN_00545460 @ 00545460 ==== 
 * signature: int __fastcall FUN_00545460(double * param_1)
 * body: 00545460-00545525
 */

int __fastcall FUN_00545460(double *param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)((int)param_1 + 0x54)) {
    do {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4);
      pdVar1 = (double *)(*(int *)((int)param_1 + 0x2c) + iVar2 * 8);
      if (*(double *)(*(int *)((int)param_1 + 0x2c) + iVar2 * 8) < *param_1) {
        if (*pdVar1 <= -*param_1) {
          FUN_00545430(param_1,iVar4);
          iVar3 = iVar3 + 1;
          *(int *)((int)param_1 + 0x5c) = *(int *)((int)param_1 + 0x5c) + -1;
        }
        else {
          *(undefined4 *)pdVar1 = 0;
          *(undefined4 *)((int)pdVar1 + 4) = 0;
          FUN_00544c90(param_1,iVar4,*(int *)((int)param_1 + 0x54) + -1);
        }
        iVar4 = iVar4 + -1;
        *(int *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0xac) = *(int *)((int)param_1 + 0xac) + -1;
        *(undefined4 *)(param_1 + 0xf) = 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_1 + 0x54));
  }
  iVar4 = *(int *)((int)param_1 + 0x54);
  if (iVar4 < *(int *)((int)param_1 + 0x5c)) {
    do {
      if (*(double *)
           (*(int *)((int)param_1 + 0x34) + *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4) * 8)
          < 0.0) {
        FUN_00545430(param_1,iVar4);
        iVar4 = iVar4 + -1;
        *(int *)((int)param_1 + 0x5c) = *(int *)((int)param_1 + 0x5c) + -1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_1 + 0x5c));
  }
  return iVar3;
}


