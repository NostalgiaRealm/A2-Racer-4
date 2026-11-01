
/* ==== TMetafile.vmt_024 @ 0041c084 ==== 
 * signature: undefined4 __register TMetafile.vmt_024(int param_1)
 * body: 0041c084-0041c10c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMetafile_vmt_024(int param_1)

{
  int iVar1;
  UINT nNumEntries;
  HPALETTE pHVar2;
  undefined4 uVar3;
  LOGPALETTE local_410 [128];
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      nNumEntries = GetEnhMetaFilePaletteEntries(*(HENHMETAFILE *)(iVar1 + 8),0,(LPPALETTEENTRY)0x0)
      ;
      if (nNumEntries == 0) {
        return 0;
      }
      if (0x100 < (int)nNumEntries) {
        nNumEntries = nNumEntries & 0xff;
      }
      FUN_0041756c(*(HGDIOBJ *)(*(int *)(param_1 + 0x20) + 0x14));
      local_410[0].palVersion = 0x300;
      local_410[0].palNumEntries = (WORD)nNumEntries;
      GetEnhMetaFilePaletteEntries
                (*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),nNumEntries,
                 local_410[0].palPalEntry);
      pHVar2 = CreatePalette(local_410);
      *(HPALETTE *)(*(int *)(param_1 + 0x20) + 0x14) = pHVar2;
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14);
  }
  return uVar3;
}


