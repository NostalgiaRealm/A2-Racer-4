
/* ==== FUN_1000634d @ 1000634d ==== 
 * signature: undefined4 __stdcall FUN_1000634d(void)
 * body: 1000634d-10006366
 */

undefined4 FUN_1000634d(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}


