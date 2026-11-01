
/* ==== Catch@00478eea @ 00478eea ==== 
 * signature: undefined4 __stdcall Catch@00478eea(void)
 * body: 00478eea-00478f06
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00478f07-00478f34
 */

undefined4 Catch_00478eea(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a97a4);
}


