
/* ==== Catch@00479376 @ 00479376 ==== 
 * signature: undefined4 __stdcall Catch@00479376(void)
 * body: 00479376-00479392
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00479393-004793c0
 */

undefined4 Catch_00479376(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a9904);
}


