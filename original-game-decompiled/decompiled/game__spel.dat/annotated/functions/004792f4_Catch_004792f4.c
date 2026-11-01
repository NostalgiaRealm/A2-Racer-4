
/* ==== Catch@004792f4 @ 004792f4 ==== 
 * signature: undefined4 __stdcall Catch@004792f4(void)
 * body: 004792f4-0047932c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0047932d-00479375
 */

undefined4 Catch_004792f4(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_Runtime_error_RE__d__s_in___s__s_005a98e0);
}


