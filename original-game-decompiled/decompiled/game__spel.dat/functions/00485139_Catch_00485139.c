
/* ==== Catch@00485139 @ 00485139 ==== 
 * signature: undefined4 __stdcall Catch@00485139(void)
 * body: 00485139-0048514d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0048514e-00485156
 */

undefined4 Catch_00485139(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(*(int *)(unaff_EBP + -0x44) + 0x10);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(pbVar1);
}


