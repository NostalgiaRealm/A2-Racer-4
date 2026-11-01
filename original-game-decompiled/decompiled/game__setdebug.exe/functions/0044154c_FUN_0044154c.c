
/* ==== FUN_0044154c @ 0044154c ==== 
 * signature: undefined4 __register FUN_0044154c(int param_1)
 * body: 0044154c-00441563
 */

undefined4 FUN_0044154c(int param_1)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


