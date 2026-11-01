
/* ==== FUN_004088c8 @ 004088c8 ==== 
 * signature: undefined __register FUN_004088c8(int param_1)
 * body: 004088c8-004088e1
 */

void FUN_004088c8(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}


