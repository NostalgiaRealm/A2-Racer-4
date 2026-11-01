
/* ==== Catch@0046fdf5 @ 0046fdf5 ==== 
 * signature: undefined4 __stdcall Catch@0046fdf5(void)
 * body: 0046fdf5-0046fe0c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046fe0d-0046fe4e
 */

undefined4 Catch_0046fdf5(void)

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


