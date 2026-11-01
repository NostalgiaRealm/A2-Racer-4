
/* ==== FUN_004292f8 @ 004292f8 ==== 
 * signature: undefined __register FUN_004292f8(int param_1)
 * body: 004292f8-00429323
 */

void FUN_004292f8(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) &&
     (*(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1, *(int *)(param_1 + 4) == 0)) {
    CloseClipboard();
    if (*(char *)(param_1 + 0xc) != '\0') {
      FUN_004446f0(*(HWND *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


