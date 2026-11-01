
/* ==== FUN_004c3ec0 @ 004c3ec0 ==== 
 * signature: undefined __cdecl FUN_004c3ec0(int param_1)
 * body: 004c3ec0-004c3ee7;004c3eeb-004c3f02
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3ee8-004c3eea
 */

void __cdecl FUN_004c3ec0(int param_1)

{
  if ((-1 < param_1) && (param_1 <= DAT_00740820)) {
    FUN_0055933d(&DAT_0073b8d0 + param_1 * 0x32,(byte *)(&DAT_0073b8d0 + param_1 * 0x32));
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__get_ini_argument_value___s__d____005b36c8);
}


