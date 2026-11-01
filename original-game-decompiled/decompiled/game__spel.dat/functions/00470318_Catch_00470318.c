
/* ==== Catch@00470318 @ 00470318 ==== 
 * signature: undefined * __stdcall Catch@00470318(void)
 * body: 00470318-0047032f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00470330-00470371
 */

undefined * Catch_00470318(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(pbVar1);
}


