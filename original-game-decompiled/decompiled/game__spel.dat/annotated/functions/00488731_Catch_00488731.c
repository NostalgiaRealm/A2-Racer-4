
/* ==== Catch@00488731 @ 00488731 ==== 
 * signature: undefined4 __stdcall Catch@00488731(void)
 * body: 00488731-00488745
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00488746-0048874e
 */

undefined4 Catch_00488731(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(*(int *)(unaff_EBP + -0x24) + 0x10);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal(pbVar1);
}


