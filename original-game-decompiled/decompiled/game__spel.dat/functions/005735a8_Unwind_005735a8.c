
/* ==== Unwind@005735a8 @ 005735a8 ==== 
 * signature: undefined __stdcall Unwind@005735a8(void)
 * body: 005735a8-005735ce
 */

void Unwind_005735a8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0xc) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_004f72b0(*(undefined4 **)(unaff_EBP + -0xc));
  return;
}


