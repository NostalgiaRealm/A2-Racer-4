
/* ==== FUN_004291ac @ 004291ac ==== 
 * signature: undefined4 __register FUN_004291ac(int param_1)
 * body: 004291ac-004291bc
 */

undefined4 FUN_004291ac(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x140) + 8);
  }
  return 0;
}


