
/* ==== Unwind@00570f70 @ 00570f70 ==== 
 * signature: undefined __stdcall Unwind@00570f70(void)
 * body: 00570f70-00570f86
 */

void Unwind_00570f70(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    FUN_004d29b0(*(int *)(unaff_EBP + 4));
    return;
  }
  return;
}


