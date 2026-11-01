
/* ==== FUN_00417e80 @ 00417e80 ==== 
 * signature: int __register FUN_00417e80(int param_1)
 * body: 00417e80-00417f05;00417f0d-00417f14
 */

int FUN_00417e80(int param_1)

{
  HDC hdc;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (DAT_00447648 != (HPALETTE)0x0) {
    hdc = GetDC((HWND)0x0);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe4;
    iVar1 = GetDeviceCaps(hdc,0x68);
    if (0xf < iVar1) {
      GetPaletteEntries(DAT_00447648,0,8,(LPPALETTEENTRY)(param_1 + 4));
      GetPaletteEntries(DAT_00447648,8,8,
                        (LPPALETTEENTRY)(param_1 + -0x1c + (uint)*(ushort *)(param_1 + 2) * 4));
    }
    *in_FS_OFFSET = uVar2;
    iVar1 = ReleaseDC((HWND)0x0,hdc);
    return iVar1;
  }
  return param_1 & 0xffffff00;
}


