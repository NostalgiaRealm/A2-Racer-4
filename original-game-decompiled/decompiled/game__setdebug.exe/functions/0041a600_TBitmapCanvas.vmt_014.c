
/* ==== TBitmapCanvas.vmt_014 @ 0041a600 ==== 
 * signature: undefined __register TBitmapCanvas.vmt_014(int * param_1)
 * body: 0041a600-0041a6de;0041a6e6-0041a6ea
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmapCanvas_vmt_014(int *param_1)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  HPALETTE pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  if (param_1[0x16] != 0) {
    puStack_14 = (undefined1 *)0x41a61e;
    FUN_00417174((int)param_1);
    pcStack_18 = thunk_FUN_00403434;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_0041b8b0(param_1[0x16]);
    FUN_0041a47c(*(int *)(*(int *)(param_1[0x16] + 0x20) + 8));
    FUN_0041b920(param_1[0x16]);
    hdc = CreateCompatibleDC((HDC)0x0);
    pvVar1 = *(HGDIOBJ *)(*(int *)(param_1[0x16] + 0x20) + 8);
    if (pvVar1 == (HGDIOBJ)0x0) {
      param_1[0x17] = 0;
    }
    else {
      pvVar1 = SelectObject(hdc,pvVar1);
      param_1[0x17] = (int)pvVar1;
    }
    pHVar2 = *(HPALETTE *)(*(int *)(param_1[0x16] + 0x20) + 0x10);
    if (pHVar2 == (HPALETTE)0x0) {
      param_1[0x18] = 0;
    }
    else {
      pHVar2 = SelectPalette(hdc,pHVar2,-1);
      param_1[0x18] = (int)pHVar2;
      RealizePalette(hdc);
    }
    FUN_004174b0(param_1,(int)hdc);
    FUN_0040f304(DAT_004465bc,(int)param_1);
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41a6e6;
    pcStack_18 = (code *)0x41a6de;
    FUN_00417328((int)param_1);
    return;
  }
  return;
}


