
/* ==== TBitmapCanvas.vmt_014 @ 0041ce24 ==== 
 * signature: undefined __register TBitmapCanvas.vmt_014(int * param_1)
 * body: 0041ce24-0041cf02;0041cf0a-0041cf0e
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
    puStack_14 = (undefined1 *)0x41ce42;
    FUN_0041912c((int)param_1);
    pcStack_18 = thunk_FUN_004036bc;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_0041e0d4(param_1[0x16]);
    FUN_0041cca0(*(int *)(*(int *)(param_1[0x16] + 0x20) + 8));
    FUN_0041e224(param_1[0x16]);
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
    FUN_00419558(param_1,(int)hdc);
    FUN_004106c8(DAT_004aa5e0,(int)param_1);
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41cf0a;
    pcStack_18 = (code *)0x41cf02;
    FUN_004193d0((int)param_1);
    return;
  }
  return;
}


