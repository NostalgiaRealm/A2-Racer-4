
/* ==== FUN_004c2af0 @ 004c2af0 ==== 
 * signature: undefined4 __stdcall FUN_004c2af0(void)
 * body: 004c2af0-004c2b23;004c2b27-004c2b4e;004c2b52-004c2b77;004c2b7b-004c2b8f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c2b24-004c2b26 004c2b4f-004c2b51 004c2b78-004c2b7a
 */

undefined4 FUN_004c2af0(void)

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
    return *(undefined4 *)(DAT_0073b82e * 0xb0 + 0x6c + DAT_0073b7d8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


