
/* ==== FUN_004c7e20 @ 004c7e20 ==== 
 * signature: undefined __cdecl FUN_004c7e20(int param_1, undefined4 param_2)
 * body: 004c7e20-004c7e4e;004c7e52-004c7e68
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7e4f-004c7e51
 */

void __cdecl FUN_004c7e20(int param_1,undefined4 param_2)

{
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____sound_buffer_index_ille_005b5394);
    }
    *(undefined4 *)(DAT_00740934 + 0x40 + param_1 * 0x44) = param_2;
  }
  return;
}


