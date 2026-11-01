
/* ==== FUN_005447c0 @ 005447c0 ==== 
 * signature: undefined __fastcall FUN_005447c0(double * param_1)
 * body: 005447c0-00544819
 */

void __fastcall FUN_005447c0(double *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x54)) {
    do {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar3 * 4);
      puVar1 = (undefined4 *)(*(int *)((int)param_1 + 0x2c) + iVar2 * 8);
      if (*(double *)(*(int *)((int)param_1 + 0x2c) + iVar2 * 8) < *param_1) {
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_00544c90(param_1,iVar3,*(int *)((int)param_1 + 0x54) + -1);
        *(int *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + -1;
        FUN_005445f0(param_1,iVar3);
        iVar3 = iVar3 + -1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)param_1 + 0x54));
  }
  return;
}


