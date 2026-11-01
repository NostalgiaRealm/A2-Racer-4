
/* ==== FUN_00417f18 @ 00417f18 ==== 
 * signature: HPALETTE __register FUN_00417f18(HGDIOBJ param_1, undefined4 * param_2, int param_3)
 * body: 00417f18-00417fb8
 */

HPALETTE FUN_00417f18(HGDIOBJ param_1,undefined4 *param_2,int param_3)

{
  HDC hdc;
  HGDIOBJ h;
  UINT UVar1;
  int iVar2;
  HPALETTE pHVar3;
  LOGPALETTE local_410 [128];
  
  local_410[0].palVersion = 0x300;
  if (param_1 == (HGDIOBJ)0x0) {
    local_410[0].palNumEntries = (WORD)param_3;
    FUN_004027d0(param_2,local_410[0].palPalEntry,param_3 << 2);
  }
  else {
    hdc = CreateCompatibleDC((HDC)0x0);
    h = SelectObject(hdc,param_1);
    UVar1 = GetDIBColorTable(hdc,0,0x100,(RGBQUAD *)local_410[0].palPalEntry);
    local_410[0].palNumEntries = (WORD)UVar1;
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  if (local_410[0].palNumEntries != 0) {
    if ((local_410[0].palNumEntries != 0x10) ||
       (iVar2 = FUN_00417e80((int)local_410), (char)iVar2 == '\0')) {
      FUN_00417d10((int)local_410[0].palPalEntry,(uint)local_410[0].palNumEntries);
    }
    pHVar3 = CreatePalette(local_410);
    return pHVar3;
  }
  return (HPALETTE)0x0;
}


