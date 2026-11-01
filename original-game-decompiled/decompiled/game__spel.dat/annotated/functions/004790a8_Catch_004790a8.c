
/* ==== Catch@004790a8 @ 004790a8 ==== 
 * signature: undefined4 __stdcall Catch@004790a8(void)
 * body: 004790a8-004790e0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004790e1-00479129
 */

undefined4 Catch_004790a8(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_Runtime_error_RE__d__s_in___s__s_005a9830);
}


