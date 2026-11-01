
/* ==== FUN_004332a0 @ 004332a0 ==== 
 * signature: undefined4 __register FUN_004332a0(int param_1)
 * body: 004332a0-004332b0
 */

undefined4 FUN_004332a0(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x140) + 8);
  }
  return 0;
}


