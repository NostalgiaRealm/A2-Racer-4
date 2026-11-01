
/* ==== Catch@004883dc @ 004883dc ==== 
 * signature: undefined4 __stdcall Catch@004883dc(void)
 * body: 004883dc-004883f0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004883f1-004883f9
 */

undefined4 Catch_004883dc(void)

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


