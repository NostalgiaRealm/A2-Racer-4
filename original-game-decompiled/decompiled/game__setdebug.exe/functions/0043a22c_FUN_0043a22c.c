
/* ==== FUN_0043a22c @ 0043a22c ==== 
 * signature: bool __register FUN_0043a22c(short param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0043a22c-0043a25d
 */

bool FUN_0043a22c(short param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  hWnd = (HWND)FUN_0042a8b4(*(int **)(*(int *)(param_4 + -4) + 4));
  uVar1 = GetWindowLongA(hWnd,nIndex);
  return (uVar1 & uVar2) != 0;
}


