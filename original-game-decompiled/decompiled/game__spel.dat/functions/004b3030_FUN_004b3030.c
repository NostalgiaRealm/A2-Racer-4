
/* ==== FUN_004b3030 @ 004b3030 ==== 
 * signature: undefined __stdcall FUN_004b3030(void)
 * body: 004b3030-004b30ae
 */

void FUN_004b3030(void)

{
  LPVOID pvVar1;
  
  if (DAT_0073b04c == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_0073b040 != 0) {
      pvVar1 = (LPVOID)(DAT_0073b040 + -4);
      FUN_005586c5(DAT_0073b040,0x8c,*(int *)(DAT_0073b040 + -4),FUN_0051ed40);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_0073b04c != 0) {
    FUN_0054b339(DAT_0073b050);
    DAT_0073b04c = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


