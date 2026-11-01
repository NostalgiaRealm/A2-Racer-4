
/* ==== Catch@00409cc3 @ 00409cc3 ==== 
 * signature: undefined4 __stdcall Catch@00409cc3(void)
 * body: 00409cc3-00409cda
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00409cdb-00409d1c
 */

undefined4 Catch_00409cc3(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(pbVar1);
}


