
/* ==== FUN_004c0b00 @ 004c0b00 ==== 
 * signature: undefined __stdcall FUN_004c0b00(void)
 * body: 004c0b00-004c0b73
 */

void FUN_004c0b00(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0073b784;
  if (DAT_0073b788 != 0) {
    if (DAT_0073b784 != (undefined4 *)0x0) {
      if (DAT_0073b784[3] == 1) {
        FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
        FUN_0054b339((LPVOID)*puVar1);
      }
      if (puVar1[3] != 0) {
        FUN_0054b339((LPVOID)puVar1[4]);
        puVar1[3] = 0;
      }
      FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
      FUN_0054b339(puVar1);
    }
    DAT_0073b788 = 1;
  }
  return;
}


