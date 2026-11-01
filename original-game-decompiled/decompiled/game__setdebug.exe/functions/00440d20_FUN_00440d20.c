
/* ==== FUN_00440d20 @ 00440d20 ==== 
 * signature: undefined FUN_00440d20(void)
 * body: 00440d20-00440d7b
 */

void FUN_00440d20(void)

{
  HANDLE pvVar1;
  DWORD DVar2;
  tagPOINT tStack_c;
  
  DAT_004477d8 = GetCurrentThreadId();
  while( true ) {
    DVar2 = WaitForSingleObject(DAT_004477dc,100);
    if (DVar2 != 0x102) break;
    if ((DAT_004477c4 != 0) && (*(int *)(DAT_004477c4 + 0x50) != 0)) {
      GetCursorPos(&tStack_c);
      pvVar1 = FUN_00423224(&tStack_c);
      if (pvVar1 == (HANDLE)0x0) {
        FUN_00442ca8(DAT_004477c4);
      }
    }
  }
  return;
}


