
/* ==== FUN_0044bcc0 @ 0044bcc0 ==== 
 * signature: undefined FUN_0044bcc0(void)
 * body: 0044bcc0-0044bd1b
 */

void FUN_0044bcc0(void)

{
  HANDLE pvVar1;
  DWORD DVar2;
  tagPOINT tStack_c;
  
  DAT_004ac7e8 = GetCurrentThreadId();
  while( true ) {
    DVar2 = WaitForSingleObject(DAT_004ac7ec,100);
    if (DVar2 != 0x102) break;
    if ((DAT_004ac7d4 != 0) && (*(int *)(DAT_004ac7d4 + 0x50) != 0)) {
      GetCursorPos(&tStack_c);
      pvVar1 = FUN_0042d164(&tStack_c);
      if (pvVar1 == (HANDLE)0x0) {
        FUN_0044de34(DAT_004ac7d4);
      }
    }
  }
  return;
}


