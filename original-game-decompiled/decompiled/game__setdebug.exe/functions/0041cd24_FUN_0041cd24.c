
/* ==== FUN_0041cd24 @ 0041cd24 ==== 
 * signature: undefined __register FUN_0041cd24(void)
 * body: 0041cd24-0041cd58
 */

void FUN_0041cd24(void)

{
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  DAT_00447650 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  DAT_00447648 = FUN_00417d68((undefined4 *)&DAT_004465c8);
  return;
}


