
/* ==== Catch@00471c28 @ 00471c28 ==== 
 * signature: undefined4 __stdcall Catch@00471c28(void)
 * body: 00471c28-00471c3f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00471c40-00471c81
 */

undefined4 Catch_00471c28(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(pbVar1);
}


