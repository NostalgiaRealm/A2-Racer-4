
/* ==== FUN_00440a7c @ 00440a7c ==== 
 * signature: undefined4 __register FUN_00440a7c(int param_1)
 * body: 00440a7c-00440a93
 */

undefined4 FUN_00440a7c(int param_1)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)(param_1 + 0x24) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


