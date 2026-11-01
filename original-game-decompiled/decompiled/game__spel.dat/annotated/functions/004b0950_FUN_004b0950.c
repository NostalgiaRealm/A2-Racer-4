
/* ==== FUN_004b0950 @ 004b0950 ==== 
 * signature: undefined __stdcall FUN_004b0950(void)
 * body: 004b0950-004b09ce
 */

void FUN_004b0950(void)

{
  LPVOID pvVar1;
  
  if (DAT_00719b5c == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_00719b50 != 0) {
      pvVar1 = (LPVOID)(DAT_00719b50 + -4);
      FUN_005586c5(DAT_00719b50,0x178,*(int *)(DAT_00719b50 + -4),FUN_004b0e80);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_00719b5c != 0) {
    FUN_0054b339(DAT_00719b60);
    DAT_00719b5c = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


