
/* ==== Catch@00470227 @ 00470227 ==== 
 * signature: undefined * __stdcall Catch@00470227(void)
 * body: 00470227-0047023e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0047023f-00470280
 */

undefined * Catch_00470227(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


