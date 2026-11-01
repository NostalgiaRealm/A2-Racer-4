
/* ==== FUN_00480428 @ 00480428 ==== 
 * signature: undefined4 __register FUN_00480428(int param_1)
 * body: 00480428-00480445
 */

undefined4 FUN_00480428(int param_1)

{
  if (*(int *)(param_1 + 0xc0) == 0) {
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 0x30) + 0x10);
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x18) + 0x10);
}


