
/* ==== Catch@00478a6a @ 00478a6a ==== 
 * signature: undefined4 __stdcall Catch@00478a6a(void)
 * body: 00478a6a-00478a86
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00478a87-00478ab4
 */

undefined4 Catch_00478a6a(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a9648);
}


