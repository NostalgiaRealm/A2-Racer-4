
/* ==== FUN_004cd330 @ 004cd330 ==== 
 * signature: undefined4 __cdecl FUN_004cd330(int param_1)
 * body: 004cd330-004cd351;004cd355-004cd360
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cd352-004cd354
 */

undefined4 __cdecl FUN_004cd330(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x14)) {
    return *(undefined4 *)(&DAT_005b37c0 + param_1 * 0x14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____illegal_mode_index__und_005b6538);
}


