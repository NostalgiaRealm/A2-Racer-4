
/* ==== Catch@00477f52 @ 00477f52 ==== 
 * signature: undefined4 __stdcall Catch@00477f52(void)
 * body: 00477f52-00477f90
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00477f91-00478000
 */

undefined4 Catch_00477f52(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_Runtime_error_RE__d__s_in___s____005a9430);
}


