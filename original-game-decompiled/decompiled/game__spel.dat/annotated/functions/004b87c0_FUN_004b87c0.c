
/* ==== FUN_004b87c0 @ 004b87c0 ==== 
 * signature: undefined __stdcall FUN_004b87c0(void)
 * body: 004b87c0-004b883b
 */

void FUN_004b87c0(void)

{
  LPVOID pvVar1;
  
  if (DAT_0073b1bc == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_0073b1b0 != 0) {
      pvVar1 = (LPVOID)(DAT_0073b1b0 + -4);
      FUN_005586c5(DAT_0073b1b0,0x48,*(int *)(DAT_0073b1b0 + -4),FUN_004b9670);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_0073b1bc != 0) {
    FUN_0054b339(DAT_0073b1c0);
    DAT_0073b1bc = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


