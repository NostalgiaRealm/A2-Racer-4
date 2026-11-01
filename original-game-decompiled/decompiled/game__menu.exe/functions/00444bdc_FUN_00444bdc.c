
/* ==== FUN_00444bdc @ 00444bdc ==== 
 * signature: bool __register FUN_00444bdc(short param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00444bdc-00444c0d
 */

bool FUN_00444bdc(short param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  int nIndex;
  
  uVar2 = 0x100000;
  if (param_1 == 1) {
    uVar2 = 0x200000;
  }
  nIndex = -0x10;
  hWnd = (HWND)FUN_004349e0(*(int **)(*(int *)(param_4 + -4) + 4));
  uVar1 = GetWindowLongA(hWnd,nIndex);
  return (uVar1 & uVar2) != 0;
}


