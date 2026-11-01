
/* ==== FUN_004165a0 @ 004165a0 ==== 
 * signature: undefined __register FUN_004165a0(int param_1)
 * body: 004165a0-00416700;00416708-00416728
 */

void FUN_004165a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  HFONT pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  code *pcStack_5c;
  code *pcStack_58;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  LOGFONTA local_44;
  int local_8;
  
  pcStack_58 = (code *)&stack0xfffffffc;
  local_50 = (undefined *)0x0;
  local_4c = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  pcStack_5c = thunk_FUN_00403434;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_64 = (undefined1 *)0x4165df;
    FUN_004159cc(DAT_00447694);
    pcStack_68 = thunk_FUN_00403434;
    uStack_6c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_6c;
    if (*(int *)(local_8 + 8) == 0) {
      local_44.lfHeight = *(LONG *)(local_8 + 0x14);
      local_44.lfWidth = 0;
      local_44.lfEscapement = 0;
      local_44.lfOrientation = 0;
      if ((*(byte *)(local_8 + 0x19) & 1) == 0) {
        local_44.lfWeight = 400;
      }
      else {
        local_44.lfWeight = 700;
      }
      local_44.lfItalic = (*(byte *)(local_8 + 0x19) & 2) != 0;
      local_44.lfUnderline = (*(byte *)(local_8 + 0x19) & 4) != 0;
      local_44.lfStrikeOut = (*(byte *)(local_8 + 0x19) & 8) != 0;
      local_44.lfCharSet = *(BYTE *)(local_8 + 0x1a);
      puStack_64 = &stack0xfffffffc;
      FUN_00403bdc((int *)&local_48,(byte *)(local_8 + 0x1b));
      iVar1 = FUN_00407b28(local_48,"Default");
      if (iVar1 == 0) {
        FUN_00403bdc((int *)&local_4c,(byte *)s_MS_Sans_Serif_0044635f);
        FUN_004080e4(local_44.lfFaceName,local_4c);
      }
      else {
        FUN_00403bdc((int *)&local_50,(byte *)(local_8 + 0x1b));
        FUN_004080e4(local_44.lfFaceName,local_50);
      }
      local_44.lfQuality = '\0';
      local_44.lfOutPrecision = '\0';
      local_44.lfClipPrecision = '\0';
      uVar2 = TFont_get_Pitch(param_1);
      if ((char)uVar2 == '\x01') {
        local_44.lfPitchAndFamily = '\x02';
      }
      else if ((char)uVar2 == '\x02') {
        local_44.lfPitchAndFamily = '\x01';
      }
      else {
        local_44.lfPitchAndFamily = '\0';
      }
      pHVar3 = CreateFontIndirectA(&local_44);
      *(HFONT *)(local_8 + 8) = pHVar3;
    }
    *in_FS_OFFSET = uStack_6c;
    puStack_64 = (undefined1 *)0x416708;
    pcStack_68 = (code *)0x416700;
    FUN_004159d8(DAT_00447694);
    return;
  }
  *in_FS_OFFSET = uStack_60;
  pcStack_58 = FUN_00416730;
  pcStack_5c = (code *)0x416728;
  FUN_004039dc((int *)&local_50,3);
  return;
}


