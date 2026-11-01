
/* ==== Catch@0046efa2 @ 0046efa2 ==== 
 * signature: undefined4 __stdcall Catch@0046efa2(void)
 * body: 0046efa2-0046efb9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046efba-0046effb
 */

undefined4 Catch_0046efa2(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


