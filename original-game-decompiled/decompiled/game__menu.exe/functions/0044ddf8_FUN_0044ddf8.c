
/* ==== FUN_0044ddf8 @ 0044ddf8 ==== 
 * signature: undefined __register FUN_0044ddf8(int param_1)
 * body: 0044ddf8-0044de32
 */

void FUN_0044ddf8(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    bVar1 = FUN_00434cdc(*(int *)(param_1 + 0x74));
    if (bVar1) {
      pHVar2 = (HWND)FUN_004349e0(*(int **)(param_1 + 0x74));
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_004349e0(*(int **)(param_1 + 0x74));
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  return;
}


