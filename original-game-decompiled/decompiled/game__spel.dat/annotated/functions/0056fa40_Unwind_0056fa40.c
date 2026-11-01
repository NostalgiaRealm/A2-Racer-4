
/* ==== Unwind@0056fa40 @ 0056fa40 ==== 
 * signature: undefined __stdcall Unwind@0056fa40(void)
 * body: 0056fa40-0056fa56
 */

void Unwind_0056fa40(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    std::locale::~locale(*(locale **)(unaff_EBP + 4));
    return;
  }
  return;
}


