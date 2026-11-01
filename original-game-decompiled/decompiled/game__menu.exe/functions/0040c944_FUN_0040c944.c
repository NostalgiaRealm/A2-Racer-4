
/* ==== FUN_0040c944 @ 0040c944 ==== 
 * signature: undefined __register FUN_0040c944(int param_1)
 * body: 0040c944-0040c965
 */

void FUN_0040c944(int param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}


