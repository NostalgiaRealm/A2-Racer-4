
/* ==== FUN_00403750 @ 00403750 ==== 
 * signature: undefined4 __cdecl FUN_00403750(int param_1)
 * body: 00403750-00403772;00403776-0040379d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00403773-00403775
 */

undefined4 __cdecl FUN_00403750(int param_1)

{
  if ((-1 < param_1) && (param_1 < 6)) {
    if (*(float *)(&DAT_005cea84 + param_1 * 0x294) != 100.0) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058eab0);
}


