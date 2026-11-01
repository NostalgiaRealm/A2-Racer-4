
/* ==== FUN_00417d68 @ 00417d68 ==== 
 * signature: undefined __register FUN_00417d68(undefined4 * param_1)
 * body: 00417d68-00417e64
 */

void FUN_00417d68(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  tagPALETTEENTRY local_408 [7];
  tagPALETTEENTRY local_3ec;
  tagPALETTEENTRY local_3e8;
  tagPALETTEENTRY local_3e4 [247];
  HDC local_8;
  
  FUN_004027d0(param_1,local_408,0x40);
  local_8 = GetDC((HWND)0x0);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffbe4;
  iVar1 = GetDeviceCaps(local_8,0x68);
  if (0xf < iVar1) {
    GetSystemPaletteEntries(local_8,0,8,local_408);
    if (local_3ec == (tagPALETTEENTRY)0xc0c0c0) {
      GetSystemPaletteEntries(local_8,iVar1 - 8,1,&local_3ec);
      GetSystemPaletteEntries(local_8,iVar1 - 7,7,local_3e4);
      GetSystemPaletteEntries(local_8,7,1,&local_3e8);
    }
    else {
      GetSystemPaletteEntries(local_8,iVar1 - 8,8,&local_3e8);
    }
  }
  *in_FS_OFFSET = uVar2;
  ReleaseDC((HWND)0x0,local_8);
  return;
}


