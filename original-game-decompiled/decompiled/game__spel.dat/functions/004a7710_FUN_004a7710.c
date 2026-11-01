
/* ==== FUN_004a7710 @ 004a7710 ==== 
 * signature: undefined __stdcall FUN_004a7710(void)
 * body: 004a7710-004a778e
 */

void FUN_004a7710(void)

{
  LPVOID pvVar1;
  
  if (DAT_00715e5c == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_00715e50 != 0) {
      pvVar1 = (LPVOID)(DAT_00715e50 + -4);
      FUN_005586c5(DAT_00715e50,0xf0,*(int *)(DAT_00715e50 + -4),FUN_004ab690);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_00715e5c != 0) {
    FUN_0054b339(DAT_00715e60);
    DAT_00715e5c = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


