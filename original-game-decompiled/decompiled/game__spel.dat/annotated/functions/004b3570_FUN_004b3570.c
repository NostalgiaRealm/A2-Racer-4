
/* ==== FUN_004b3570 @ 004b3570 ==== 
 * signature: undefined __stdcall FUN_004b3570(void)
 * body: 004b3570-004b35eb
 */

void FUN_004b3570(void)

{
  LPVOID pvVar1;
  
  if (DAT_0073b094 == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_0073b088 != 0) {
      pvVar1 = (LPVOID)(DAT_0073b088 + -4);
      FUN_005586c5(DAT_0073b088,0x60,*(int *)(DAT_0073b088 + -4),FUN_0051ed40);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_0073b094 != 0) {
    FUN_0054b339(DAT_0073b098);
    DAT_0073b094 = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


