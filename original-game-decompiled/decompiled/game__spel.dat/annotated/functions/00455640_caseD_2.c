
/* ==== switchD_00455619::caseD_2 @ 00455640 ==== 
 * signature: undefined4 __fastcall caseD_2(int param_1)
 * body: 00455640-00455662
 */

undefined4 __fastcall switchD_00455619::caseD_2(int param_1)

{
  char cVar1;
  int unaff_EDI;
  
  cVar1 = FUN_004a1f10(*(int *)(unaff_EDI + 0x10 + param_1));
  if (cVar1 == '\0') {
    *(undefined4 *)(unaff_EDI + 0x2c + DAT_00715e50) = 3;
    return 1;
  }
  return 1;
}


