
/* ==== Catch@00478172 @ 00478172 ==== 
 * signature: undefined4 __stdcall Catch@00478172(void)
 * body: 00478172-004781b0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004781b1-00478220
 */

undefined4 Catch_00478172(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_Runtime_error_RE__d__s_in___s____005a946c);
}


