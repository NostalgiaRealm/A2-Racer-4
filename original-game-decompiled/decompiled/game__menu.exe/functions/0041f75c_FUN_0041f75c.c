
/* ==== FUN_0041f75c @ 0041f75c ==== 
 * signature: undefined __register FUN_0041f75c(void)
 * body: 0041f75c-0041f790
 */

void FUN_0041f75c(void)

{
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  DAT_004ac658 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  DAT_004ac650 = FUN_00419e10((undefined4 *)&DAT_004aa5ec);
  return;
}


