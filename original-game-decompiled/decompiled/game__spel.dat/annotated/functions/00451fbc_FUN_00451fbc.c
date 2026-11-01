
/* ==== FUN_00451fbc @ 00451fbc ==== 
 * signature: undefined4 __stdcall FUN_00451fbc(void)
 * body: 00451fbc-00451feb
 */

undefined4 FUN_00451fbc(void)

{
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  
  FUN_00450b30(unaff_EDI,unaff_retaddr);
  FUN_00450300(100);
  DAT_0059becc = 0x33;
  *(undefined4 *)(unaff_ESI + 0x2c + DAT_00715e50) = 2;
  return 1;
}


