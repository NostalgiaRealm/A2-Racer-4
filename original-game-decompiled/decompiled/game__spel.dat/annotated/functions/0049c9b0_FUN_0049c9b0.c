
/* ==== FUN_0049c9b0 @ 0049c9b0 ==== 
 * signature: undefined __fastcall FUN_0049c9b0(int param_1)
 * body: 0049c9b0-0049c9d6
 */

void __fastcall FUN_0049c9b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (*(int *)(param_1 + 8) == 0)) {
    if (iVar1 == 1) {
      FUN_0049cc40(param_1);
      return;
    }
    if (iVar1 == 2) {
      FUN_0049cac0(param_1);
      return;
    }
    if (iVar1 == 3) {
      FUN_0049cb30(param_1);
      return;
    }
  }
  return;
}


