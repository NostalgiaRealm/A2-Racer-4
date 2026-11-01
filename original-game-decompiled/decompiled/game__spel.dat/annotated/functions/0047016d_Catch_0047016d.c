
/* ==== Catch@0047016d @ 0047016d ==== 
 * signature: undefined4 __stdcall Catch@0047016d(void)
 * body: 0047016d-00470184
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00470185-004701c6
 */

undefined4 Catch_0047016d(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


