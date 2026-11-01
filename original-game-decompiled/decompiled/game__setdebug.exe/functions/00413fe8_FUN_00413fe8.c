
/* ==== FUN_00413fe8 @ 00413fe8 ==== 
 * signature: undefined4 __register FUN_00413fe8(int param_1)
 * body: 00413fe8-00413ff5
 */

undefined4 FUN_00413fe8(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  return 0;
}


