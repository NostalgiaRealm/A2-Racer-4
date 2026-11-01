
/* ==== Catch@00478c28 @ 00478c28 ==== 
 * signature: undefined4 __stdcall Catch@00478c28(void)
 * body: 00478c28-00478c60
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00478c61-00478ca9
 */

undefined4 Catch_00478c28(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_Runtime_error_RE__d__s_in___s__s_005a96d4);
}


