
/* ==== FUN_004bc790 @ 004bc790 ==== 
 * signature: undefined __stdcall FUN_004bc790(void)
 * body: 004bc790-004bc80e
 */

void FUN_004bc790(void)

{
  LPVOID pvVar1;
  
  if (DAT_0073b5d4 == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    if (DAT_0073b5c8 != 0) {
      pvVar1 = (LPVOID)(DAT_0073b5c8 + -4);
      FUN_005586c5(DAT_0073b5c8,0xac,*(int *)(DAT_0073b5c8 + -4),FUN_004bd590);
      FUN_0054b339(pvVar1);
    }
  }
  if (DAT_0073b5d4 != 0) {
    FUN_0054b339(DAT_0073b5d8);
    DAT_0073b5d4 = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


