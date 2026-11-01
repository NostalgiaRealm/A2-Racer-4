
/* ==== Catch@0040a157 @ 0040a157 ==== 
 * signature: undefined4 __stdcall Catch@0040a157(void)
 * body: 0040a157-0040a16e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040a16f-0040a1b0
 */

undefined4 Catch_0040a157(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


