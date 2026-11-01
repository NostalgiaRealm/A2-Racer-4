
/* ==== Unwind@00573d48 @ 00573d48 ==== 
 * signature: undefined __stdcall Unwind@00573d48(void)
 * body: 00573d48-00573d70
 */

void Unwind_00573d48(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -8) = 0;
  }
  else {
    *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -0x10) + 0x88;
  }
  FUN_00510350(*(undefined4 **)(unaff_EBP + -8));
  return;
}


