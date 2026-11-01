
/* ==== FUN_004a6bb0 @ 004a6bb0 ==== 
 * signature: undefined __cdecl FUN_004a6bb0(int param_1, undefined4 param_2)
 * body: 004a6bb0-004a6bd5;004a6be6-004a6bf2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6bd6-004a6be5
 */

void __cdecl FUN_004a6bb0(int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x101)) {
    (&DAT_00715300)[param_1 * 2] = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Trying_to_set_an_illegal_005af840);
}


