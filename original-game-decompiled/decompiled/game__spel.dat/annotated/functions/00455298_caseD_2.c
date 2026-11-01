
/* ==== switchD_00455272::caseD_2 @ 00455298 ==== 
 * signature: undefined4 __stdcall caseD_2(void)
 * body: 00455298-004552ba
 */

undefined4 switchD_00455272::caseD_2(void)

{
  char cVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  cVar1 = FUN_004a1f10(*(int *)(unaff_ESI + 0x10 + unaff_EDI));
  if (cVar1 == '\0') {
    *(undefined4 *)(unaff_ESI + 0x2c + DAT_00715e50) = 3;
    return 1;
  }
  return 1;
}


