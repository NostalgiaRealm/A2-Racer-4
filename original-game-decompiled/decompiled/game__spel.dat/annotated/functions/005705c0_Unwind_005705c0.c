
/* ==== Unwind@005705c0 @ 005705c0 ==== 
 * signature: undefined __stdcall Unwind@005705c0(void)
 * body: 005705c0-005705e6
 */

void Unwind_005705c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_004da4d0(*(int *)(unaff_EBP + -0x44));
  return;
}


