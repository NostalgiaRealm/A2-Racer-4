
/* ==== FUN_004a6c00 @ 004a6c00 ==== 
 * signature: undefined4 __cdecl FUN_004a6c00(int param_1)
 * body: 004a6c00-004a6c25;004a6c29-004a6c31
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6c26-004a6c28
 */

undefined4 __cdecl FUN_004a6c00(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x101)) {
    return (&DAT_00715300)[param_1 * 2];
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Trying_to_get_an_illegal_005af89c);
}


