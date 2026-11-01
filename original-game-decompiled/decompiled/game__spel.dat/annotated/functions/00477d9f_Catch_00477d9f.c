
/* ==== Catch@00477d9f @ 00477d9f ==== 
 * signature: undefined4 __stdcall Catch@00477d9f(void)
 * body: 00477d9f-00477dbb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00477dbc-00477de9
 */

undefined4 Catch_00477d9f(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a93ec);
}


