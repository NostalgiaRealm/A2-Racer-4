
/* ==== FUN_00438264 @ 00438264 ==== 
 * signature: undefined __register FUN_00438264(int param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00438264-004382c0
 */

void FUN_00438264(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  HDC pHVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = param_2;
  pHVar3 = (HWND)FUN_004349e0(*(int **)(param_1 + 0x14));
  FUN_00438bc0(DAT_004ac74c,pHVar3);
  pHVar3 = (HWND)FUN_004349e0(*(int **)(param_1 + 0x14));
  *(HWND *)(param_1 + 0x5c) = pHVar3;
  pHVar4 = GetDCEx(pHVar3,(HRGN)0x0,0x412);
  *(HDC *)(param_1 + 0x58) = pHVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_00438374(param_1);
  return;
}


