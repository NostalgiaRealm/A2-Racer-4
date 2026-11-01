
/* ==== Catch@0046fd54 @ 0046fd54 ==== 
 * signature: undefined4 __stdcall Catch@0046fd54(void)
 * body: 0046fd54-0046fd6b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046fd6c-0046fdad
 */

undefined4 Catch_0046fd54(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


