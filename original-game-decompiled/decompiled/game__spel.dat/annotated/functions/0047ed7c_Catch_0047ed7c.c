
/* ==== Catch@0047ed7c @ 0047ed7c ==== 
 * signature: undefined4 __stdcall Catch@0047ed7c(void)
 * body: 0047ed7c-0047ed90
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0047ed91-0047ed99
 */

undefined4 Catch_0047ed7c(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(*(int *)(unaff_EBP + -0x14) + 0x10);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


