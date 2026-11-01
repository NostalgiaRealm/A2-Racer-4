
/* ==== Catch@0047882a @ 0047882a ==== 
 * signature: undefined4 __stdcall Catch@0047882a(void)
 * body: 0047882a-00478846
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00478847-00478874
 */

undefined4 Catch_0047882a(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_DaviScript_error__s_005a959c);
}


