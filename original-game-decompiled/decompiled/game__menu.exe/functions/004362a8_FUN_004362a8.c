
/* ==== FUN_004362a8 @ 004362a8 ==== 
 * signature: undefined __register FUN_004362a8(int param_1)
 * body: 004362a8-004362cb
 */

void FUN_004362a8(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (*(int *)(param_1 + 100) != 0)) {
    ImageList_DragLeave(*(HWND *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


