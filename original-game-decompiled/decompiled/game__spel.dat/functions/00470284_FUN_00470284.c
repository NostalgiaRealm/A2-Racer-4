
/* ==== FUN_00470284 @ 00470284 ==== 
 * signature: undefined __stdcall FUN_00470284(void)
 * body: 00470284-004702b9
 */

void FUN_00470284(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  float10 in_ST0;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(float *)(unaff_EBP + -0x20) = (float)in_ST0;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *puVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puVar1[1] = *(undefined4 *)(unaff_EBP + -0x20);
  puVar1[2] = *(undefined4 *)(unaff_EBP + -0x1c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


