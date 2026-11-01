
/* ==== FUN_0041f794 @ 0041f794 ==== 
 * signature: BYTE __register FUN_0041f794(void)
 * body: 0041f794-0041f7d6
 */

BYTE FUN_0041f794(void)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  BOOL BVar2;
  BYTE BVar3;
  tagTEXTMETRICA tStack_40;
  
  BVar3 = '\x01';
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    pvVar1 = SelectObject(hdc,DAT_004ac664);
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


