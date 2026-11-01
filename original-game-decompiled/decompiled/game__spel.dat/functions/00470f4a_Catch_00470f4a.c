
/* ==== Catch@00470f4a @ 00470f4a ==== 
 * signature: undefined4 __stdcall Catch@00470f4a(void)
 * body: 00470f4a-00470f61
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00470f62-00470fa3
 */

undefined4 Catch_00470f4a(void)

{
  byte *pbVar1;
  int unaff_EBP;
  
  pbVar1 = *(byte **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = &DAT_0057629c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(pbVar1);
}


