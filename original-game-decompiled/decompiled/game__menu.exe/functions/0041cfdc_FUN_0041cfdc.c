
/* ==== FUN_0041cfdc @ 0041cfdc ==== 
 * signature: undefined __register FUN_0041cfdc(HGDIOBJ param_1, HPALETTE param_2, int param_3)
 * body: 0041cfdc-0041d08a;0041d092-0041d097
 */

void FUN_0041cfdc(HGDIOBJ param_1,HPALETTE param_2,int param_3)

{
  UINT cEntries;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  tagPALETTEENTRY local_414 [256];
  HGDIOBJ local_14;
  HDC local_10;
  HDC local_c;
  HPALETTE local_8;
  
  if ((param_1 != (HGDIOBJ)0x0) && (*(ushort *)(param_3 + 0x26) < 9)) {
    local_8 = param_2;
    cEntries = FUN_0041a064(param_2,local_414,0xff);
    if (cEntries != 0) {
      local_c = GetDC((HWND)0x0);
      local_10 = CreateCompatibleDC(local_c);
      local_14 = SelectObject(local_10,param_1);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xfffffbd8;
      SetDIBColorTable(local_10,0,cEntries,(RGBQUAD *)local_414);
      *in_FS_OFFSET = uVar1;
      SelectObject(local_10,local_14);
      DeleteDC(local_10);
      ReleaseDC((HWND)0x0,local_c);
      return;
    }
  }
  return;
}


