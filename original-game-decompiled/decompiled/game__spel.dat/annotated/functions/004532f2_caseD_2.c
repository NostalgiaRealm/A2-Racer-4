
/* ==== switchD_004532cd::caseD_2 @ 004532f2 ==== 
 * signature: undefined4 __fastcall caseD_2(undefined4 param_1, int param_2)
 * body: 004532f2-00453313
 */

undefined4 __fastcall switchD_004532cd::caseD_2(undefined4 param_1,int param_2)

{
  char cVar1;
  int unaff_ESI;
  
  cVar1 = FUN_004a1f10(*(int *)(unaff_ESI + 0x10 + param_2));
  if (cVar1 == '\0') {
    *(undefined4 *)(unaff_ESI + 0x2c + DAT_00715e50) = 3;
    return 1;
  }
  return 1;
}


