
/* ==== FUN_004ab4d0 @ 004ab4d0 ==== 
 * signature: undefined __stdcall FUN_004ab4d0(void)
 * body: 004ab4d0-004ab54e
 */

void FUN_004ab4d0(void)

{
  LPVOID pvVar1;
  
  if (DAT_00715f0c == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_00715f00 != 0) {
      pvVar1 = (LPVOID)(DAT_00715f00 + -4);
      FUN_005586c5(DAT_00715f00,0x994,*(int *)(DAT_00715f00 + -4),FUN_004ab690);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_00715f0c != 0) {
    FUN_0054b339(DAT_00715f10);
    DAT_00715f0c = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


