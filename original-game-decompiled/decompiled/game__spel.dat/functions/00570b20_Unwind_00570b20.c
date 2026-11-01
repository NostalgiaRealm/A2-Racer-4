
/* ==== Unwind@00570b20 @ 00570b20 ==== 
 * signature: undefined __stdcall Unwind@00570b20(void)
 * body: 00570b20-00570b46
 */

void Unwind_00570b20(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_004da4d0(*(int *)(unaff_EBP + -0x20));
  return;
}


