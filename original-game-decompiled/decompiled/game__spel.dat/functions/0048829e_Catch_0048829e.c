
/* ==== Catch@0048829e @ 0048829e ==== 
 * signature: undefined4 __stdcall Catch@0048829e(void)
 * body: 0048829e-004882b2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004882b3-004882bb
 */

undefined4 Catch_0048829e(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(*(int *)(unaff_EBP + -0x14) + 0x10);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(pbVar1);
}


