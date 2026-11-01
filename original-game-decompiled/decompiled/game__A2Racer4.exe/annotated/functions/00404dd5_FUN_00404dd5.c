
/* ==== FUN_00404dd5 @ 00404dd5 ==== 
 * signature: undefined4 __stdcall FUN_00404dd5(void)
 * body: 00404dd5-00404dea
 */

undefined4 FUN_00404dd5(void)

{
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  return *(undefined4 *)(unaff_EBP + 8);
}


