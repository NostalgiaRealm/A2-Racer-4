
/* ==== Catch@0046ed9e @ 0046ed9e ==== 
 * signature: undefined4 __stdcall Catch@0046ed9e(void)
 * body: 0046ed9e-0046edb5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046edb6-0046edf7
 */

undefined4 Catch_0046ed9e(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


