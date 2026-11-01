
/* ==== Catch@00475a0c @ 00475a0c ==== 
 * signature: undefined4 __stdcall Catch@00475a0c(void)
 * body: 00475a0c-00475a46
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00475a47-00475a79
 */

undefined4 Catch_00475a0c(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 7;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_Runtime_error_RE__d__s_in___s____005a8ee0);
}


