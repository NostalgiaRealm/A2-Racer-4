
/* ==== Unwind@00570d00 @ 00570d00 ==== 
 * signature: undefined __stdcall Unwind@00570d00(void)
 * body: 00570d00-00570d26
 */

void Unwind_00570d00(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_004da4d0(*(int *)(unaff_EBP + -0x18));
  return;
}


