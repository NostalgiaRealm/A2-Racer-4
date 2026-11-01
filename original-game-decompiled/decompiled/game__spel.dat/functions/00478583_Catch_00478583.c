
/* ==== Catch@00478583 @ 00478583 ==== 
 * signature: undefined4 __stdcall Catch@00478583(void)
 * body: 00478583-004785c1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004785c2-00478631
 */

undefined4 Catch_00478583(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s_Runtime_error_RE__d__s_in___s____005a94e4);
}


