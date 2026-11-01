
/* ==== Catch@00458386 @ 00458386 ==== 
 * signature: undefined4 __stdcall Catch@00458386(void)
 * body: 00458386-004583a2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004583a3-004583e4
 */

undefined4 Catch_00458386(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____s_005a41b0);
}


