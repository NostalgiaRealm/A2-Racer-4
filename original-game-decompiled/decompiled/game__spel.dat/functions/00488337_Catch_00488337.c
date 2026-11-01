
/* ==== Catch@00488337 @ 00488337 ==== 
 * signature: undefined4 __stdcall Catch@00488337(void)
 * body: 00488337-0048834b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0048834c-00488354
 */

undefined4 Catch_00488337(void)

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


