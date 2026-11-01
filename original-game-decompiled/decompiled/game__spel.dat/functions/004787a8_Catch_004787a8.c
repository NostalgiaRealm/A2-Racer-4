
/* ==== Catch@004787a8 @ 004787a8 ==== 
 * signature: undefined4 __stdcall Catch@004787a8(void)
 * body: 004787a8-004787e0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004787e1-00478829
 */

undefined4 Catch_004787a8(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s_Runtime_error_RE__d__s_in___s____005a9578);
}


