
/* ==== Catch@004759da @ 004759da ==== 
 * signature: undefined4 __stdcall Catch@004759da(void)
 * body: 004759da-004759f4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004759f5-00475a0b
 */

undefined4 Catch_004759da(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 6;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a8ec8);
}


