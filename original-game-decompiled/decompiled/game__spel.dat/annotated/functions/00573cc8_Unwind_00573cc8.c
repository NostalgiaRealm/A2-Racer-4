
/* ==== Unwind@00573cc8 @ 00573cc8 ==== 
 * signature: undefined __stdcall Unwind@00573cc8(void)
 * body: 00573cc8-00573cee
 */

void Unwind_00573cc8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x14;
  }
  FUN_00510350(*(undefined4 **)(unaff_EBP + -0x18));
  return;
}


