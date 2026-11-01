
/* ==== Catch@004881e3 @ 004881e3 ==== 
 * signature: undefined4 __stdcall Catch@004881e3(void)
 * body: 004881e3-004881f7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004881f8-00488200
 */

undefined4 Catch_004881e3(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(*(int *)(unaff_EBP + -0x18) + 0x10);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(pbVar1);
}


