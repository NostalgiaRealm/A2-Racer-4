
/* ==== FUN_0044dc98 @ 0044dc98 ==== 
 * signature: undefined __register FUN_0044dc98(int param_1)
 * body: 0044dc98-0044dcb6
 */

void FUN_0044dc98(int param_1)

{
  if (*(ushort *)(param_1 + 0x7a) != 0) {
    KillTimer((HWND)0x0,(uint)*(ushort *)(param_1 + 0x7a));
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  return;
}


