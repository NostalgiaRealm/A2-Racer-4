
/* ==== FUN_0042e0b0 @ 0042e0b0 ==== 
 * signature: undefined __register FUN_0042e0b0(int param_1, undefined4 param_2, undefined4 * param_3)
 * body: 0042e0b0-0042e10c
 */

void FUN_0042e0b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  HDC pHVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = param_2;
  pHVar3 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x14));
  FUN_0042ea0c(DAT_0044773c,pHVar3);
  pHVar3 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x14));
  *(HWND *)(param_1 + 0x5c) = pHVar3;
  pHVar4 = GetDCEx(pHVar3,(HRGN)0x0,0x412);
  *(HDC *)(param_1 + 0x58) = pHVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_0042e1c0(param_1);
  return;
}


