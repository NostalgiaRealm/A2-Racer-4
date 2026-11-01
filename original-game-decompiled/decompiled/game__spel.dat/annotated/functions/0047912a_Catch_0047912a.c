
/* ==== Catch@0047912a @ 0047912a ==== 
 * signature: undefined4 __stdcall Catch@0047912a(void)
 * body: 0047912a-00479146
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00479147-00479174
 */

undefined4 Catch_0047912a(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a9854);
}


