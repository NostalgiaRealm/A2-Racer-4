
/* ==== FUN_004a6a70 @ 004a6a70 ==== 
 * signature: undefined4 __register FUN_004a6a70(int param_1)
 * body: 004a6a70-004a6a7d
 */

undefined4 FUN_004a6a70(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\x03') {
    return *(undefined4 *)(param_1 + 0x2c);
  }
  return *(undefined4 *)(param_1 + 0x28);
}


