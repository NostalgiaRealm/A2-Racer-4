
/* ==== FUN_004a6c40 @ 004a6c40 ==== 
 * signature: undefined __cdecl FUN_004a6c40(int param_1, undefined4 param_2)
 * body: 004a6c40-004a6c65;004a6c76-004a6c82
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6c66-004a6c75
 */

void __cdecl FUN_004a6c40(int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x101)) {
    (&DAT_00714e48)[param_1] = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Trying_to_set_an_illegal_005af8d8);
}


