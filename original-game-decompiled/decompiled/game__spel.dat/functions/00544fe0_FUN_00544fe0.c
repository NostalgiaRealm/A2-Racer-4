
/* ==== FUN_00544fe0 @ 00544fe0 ==== 
 * signature: undefined __fastcall FUN_00544fe0(void * param_1)
 * body: 00544fe0-0054504f
 */

void __fastcall FUN_00544fe0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while (iVar2 = iVar1, iVar1 = iVar2 + 1, iVar1 < *(int *)((int)param_1 + 0x54)) {
    if (*(double *)
         (*(int *)((int)param_1 + 0x2c) + *(int *)(*(int *)((int)param_1 + 0x44) + iVar2 * 4) * 8) <
        *(double *)
         (*(int *)((int)param_1 + 0x2c) +
         *(int *)(*(int *)((int)param_1 + 0x44) + 4 + iVar2 * 4) * 8)) {
      FUN_00544c90(param_1,iVar2,iVar1);
      while ((0 < iVar2 &&
             (*(double *)
               (*(int *)((int)param_1 + 0x2c) +
               *(int *)(*(int *)((int)param_1 + 0x44) + -4 + iVar2 * 4) * 8) <
              *(double *)
               (*(int *)((int)param_1 + 0x2c) +
               *(int *)(*(int *)((int)param_1 + 0x44) + iVar2 * 4) * 8)))) {
        FUN_00544c90(param_1,iVar2,iVar2 + -1);
        iVar2 = iVar2 + -1;
      }
    }
  }
  return;
}


