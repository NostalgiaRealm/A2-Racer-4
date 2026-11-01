
/* ==== FUN_00482750 @ 00482750 ==== 
 * signature: undefined FUN_00482750(void)
 * body: 00482750-00482765
 */

undefined4 FUN_00482750(int param_1)

{
  if ((*(char *)(param_1 + 0x20) != '\0') && (*PTR_DAT_004ab5d8 != '\0')) {
    return CONCAT31((int3)((uint)PTR_DAT_004ab5d8 >> 8),1);
  }
  return 0;
}


