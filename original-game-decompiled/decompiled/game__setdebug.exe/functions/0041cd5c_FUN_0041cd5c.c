
/* ==== FUN_0041cd5c @ 0041cd5c ==== 
 * signature: BYTE __register FUN_0041cd5c(void)
 * body: 0041cd5c-0041cd9e
 */

BYTE FUN_0041cd5c(void)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  BOOL BVar2;
  BYTE BVar3;
  tagTEXTMETRICA tStack_40;
  
  BVar3 = '\x01';
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    pvVar1 = SelectObject(hdc,DAT_0044765c);
    if (pvVar1 != (HGDIOBJ)0x0) {
      BVar2 = GetTextMetricsA(hdc,&tStack_40);
      if (BVar2 != 0) {
        BVar3 = tStack_40.tmCharSet;
      }
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return BVar3;
}


