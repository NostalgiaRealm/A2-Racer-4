
/* ==== FUN_0042f0d0 @ 0042f0d0 ==== 
 * signature: undefined __fastcall FUN_0042f0d0(int param_1)
 * body: 0042f0d0-0042f116
 */

void __fastcall FUN_0042f0d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 8) != -1) {
      iVar1 = FUN_0049eb50(&DAT_006fbb5c,*(int *)(param_1 + 8));
      FUN_0049e570(iVar1);
    }
    if (*(int *)(param_1 + 0xc) != -1) {
      iVar1 = FUN_0049eb50(&DAT_006fbb5c,*(int *)(param_1 + 0xc));
      FUN_0049e570(iVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


