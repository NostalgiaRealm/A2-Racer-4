
/* ==== TMetafile.vmt_020 @ 0041bff0 ==== 
 * signature: undefined TMetafile.vmt_020(void)
 * body: 0041bff0-0041c050
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int TMetafile_vmt_020(int param_1)

{
  int iVar1;
  int iStack_1c;
  int iStack_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      iVar1 = *(int *)(iVar1 + 0x20);
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
      iVar1 = MulDiv(*(int *)(iVar1 + 0x10),iStack_1c,iStack_14 * 100);
    }
  }
  else {
    iVar1 = MulDiv(*(int *)(iVar1 + 0x10),DAT_004ac658,0x9ec);
  }
  return iVar1;
}


