
/* ==== Catch@00478392 @ 00478392 ==== 
 * signature: undefined4 __stdcall Catch@00478392(void)
 * body: 00478392-004783d0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004783d1-00478440
 */

undefined4 Catch_00478392(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s_Runtime_error_RE__d__s_in___s____005a94a8);
}


