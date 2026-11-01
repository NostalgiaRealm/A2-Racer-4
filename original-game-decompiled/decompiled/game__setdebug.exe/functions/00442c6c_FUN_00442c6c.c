
/* ==== FUN_00442c6c @ 00442c6c ==== 
 * signature: undefined __register FUN_00442c6c(int param_1)
 * body: 00442c6c-00442ca6
 */

void FUN_00442c6c(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    bVar1 = FUN_0042abb0(*(int *)(param_1 + 0x74));
    if (bVar1) {
      pHVar2 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x74));
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x74));
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  return;
}


