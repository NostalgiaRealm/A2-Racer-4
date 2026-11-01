
/* ==== FUN_00404c4d @ 00404c4d ==== 
 * signature: undefined4 __stdcall FUN_00404c4d(void)
 * body: 00404c4d-00404c66
 */

undefined4 FUN_00404c4d(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}


