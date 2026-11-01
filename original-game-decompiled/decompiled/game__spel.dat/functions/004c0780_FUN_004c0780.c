
/* ==== FUN_004c0780 @ 004c0780 ==== 
 * signature: undefined4 __stdcall FUN_004c0780(void)
 * body: 004c0780-004c07d1;004c07d5-004c07fa;004c07fe-004c081f;004c0823-004c0833
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c07d2-004c07d4 004c07fb-004c07fd 004c0820-004c0822
 */

undefined4 FUN_004c0780(void)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((DAT_0073b77c != 0) && (DAT_0073b4fd != 0)) {
    uVar1 = 3;
  }
  if (DAT_0073b784[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < DAT_0073b78c) && (DAT_0073b78c < DAT_0073b784[1])) {
    if (*(char *)(DAT_0073b784[4] + DAT_0073b78c) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    FUN_004c0f50(*(void **)(*DAT_0073b784 + DAT_0073b78c * 4),uVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


