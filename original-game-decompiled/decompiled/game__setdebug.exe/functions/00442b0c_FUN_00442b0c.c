
/* ==== FUN_00442b0c @ 00442b0c ==== 
 * signature: undefined __register FUN_00442b0c(int param_1)
 * body: 00442b0c-00442b2a
 */

void FUN_00442b0c(int param_1)

{
  if (*(ushort *)(param_1 + 0x7a) != 0) {
    KillTimer((HWND)0x0,(uint)*(ushort *)(param_1 + 0x7a));
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  return;
}


