
/* ==== FUN_00548f70 @ 00548f70 ==== 
 * signature: undefined __fastcall FUN_00548f70(int param_1)
 * body: 00548f70-00548f87
 */

void __fastcall FUN_00548f70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    *(double *)(*(int *)(param_1 + 0x18) + iVar1 * 8) =
         *(double *)(param_1 + 0x20) * *(double *)(*(int *)(param_1 + 0x18) + iVar1 * 8);
  }
  return;
}


