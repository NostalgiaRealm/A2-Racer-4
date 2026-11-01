
/* ==== FUN_0042c0f4 @ 0042c0f4 ==== 
 * signature: undefined __register FUN_0042c0f4(int param_1)
 * body: 0042c0f4-0042c117
 */

void FUN_0042c0f4(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00430128(param_1);
  if ((bVar1) && (*(int *)(param_1 + 100) != 0)) {
    ImageList_DragLeave(*(HWND *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


