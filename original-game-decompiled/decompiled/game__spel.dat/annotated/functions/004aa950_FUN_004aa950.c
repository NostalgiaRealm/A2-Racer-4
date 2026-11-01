
/* ==== FUN_004aa950 @ 004aa950 ==== 
 * signature: undefined __stdcall FUN_004aa950(void)
 * body: 004aa950-004aa9cb
 */

void FUN_004aa950(void)

{
  LPVOID pvVar1;
  
  if (DAT_00715ec4 == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_00715eb8 != 0) {
      pvVar1 = (LPVOID)(DAT_00715eb8 + -4);
      FUN_005586c5(DAT_00715eb8,0x50,*(int *)(DAT_00715eb8 + -4),FUN_0051ed40);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_00715ec4 != 0) {
    FUN_0054b339(DAT_00715ec8);
    DAT_00715ec4 = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


