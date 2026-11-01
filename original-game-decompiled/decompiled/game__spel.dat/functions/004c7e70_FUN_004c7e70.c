
/* ==== FUN_004c7e70 @ 004c7e70 ==== 
 * signature: undefined4 __cdecl FUN_004c7e70(int param_1)
 * body: 004c7e70-004c7ea2;004c7ea6-004c7eb8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7ea3-004c7ea5
 */

undefined4 __cdecl FUN_004c7e70(int param_1)

{
  if (DAT_00740950 == 0) {
    return 0xffffffff;
  }
  if ((-1 < param_1) && (param_1 <= DAT_00740928)) {
    return *(undefined4 *)(DAT_00740934 + 0x40 + param_1 * 0x44);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____sound_buffer_index_ille_005b5394);
}


