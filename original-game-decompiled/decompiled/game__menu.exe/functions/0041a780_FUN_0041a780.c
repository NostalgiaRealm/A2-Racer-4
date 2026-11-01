
/* ==== FUN_0041a780 @ 0041a780 ==== 
 * signature: undefined __register FUN_0041a780(HBITMAP param_1, HPALETTE param_2, LPBITMAPINFO param_3, uint param_4, LPVOID param_5)
 * body: 0041a780-0041a81c
 */

void FUN_0041a780(HBITMAP param_1,HPALETTE param_2,LPBITMAPINFO param_3,uint param_4,LPVOID param_5)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  HPALETTE local_c;
  
  FUN_0041a630(param_1,(uint *)param_3,param_4);
  local_c = (HPALETTE)0x0;
  hdc = CreateCompatibleDC((HDC)0x0);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  if (param_2 != (HPALETTE)0x0) {
    local_c = SelectPalette(hdc,param_2,0);
    RealizePalette(hdc);
  }
  GetDIBits(hdc,param_1,0,(param_3->bmiHeader).biHeight,param_5,param_3,0);
  *in_FS_OFFSET = uVar1;
  if (local_c != (HPALETTE)0x0) {
    SelectPalette(hdc,local_c,0);
  }
  DeleteDC(hdc);
  return;
}


