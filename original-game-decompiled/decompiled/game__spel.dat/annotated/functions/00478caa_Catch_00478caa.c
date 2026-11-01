
/* ==== Catch@00478caa @ 00478caa ==== 
 * signature: undefined4 __stdcall Catch@00478caa(void)
 * body: 00478caa-00478cc6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00478cc7-00478cf4
 */

undefined4 Catch_00478caa(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a96f8);
}


