
/* ==== FUN_004c2a50 @ 004c2a50 ==== 
 * signature: int __stdcall FUN_004c2a50(void)
 * body: 004c2a50-004c2a83;004c2a87-004c2aae;004c2ab2-004c2ad7;004c2adb-004c2aef
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c2a84-004c2a86 004c2aaf-004c2ab1 004c2ad8-004c2ada
 */

int FUN_004c2a50(void)

{
  if (DAT_0073b7e4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((-1 < DAT_0073b82e) && (DAT_0073b82e < DAT_0073b7dc)) {
    if (*(char *)(DAT_0073b7e8 + DAT_0073b82e) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    return DAT_0073b82e * 0xb0 + 0x48 + DAT_0073b7d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


