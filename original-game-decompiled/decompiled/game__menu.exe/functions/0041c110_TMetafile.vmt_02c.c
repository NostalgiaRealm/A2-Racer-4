
/* ==== TMetafile.vmt_02c @ 0041c110 ==== 
 * signature: undefined TMetafile.vmt_02c(void)
 * body: 0041c110-0041c170
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int TMetafile_vmt_02c(int param_1)

{
  int iVar1;
  int iStack_20;
  int iStack_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      iVar1 = *(int *)(iVar1 + 0x1c);
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
      iVar1 = MulDiv(*(int *)(iVar1 + 0xc),iStack_20,iStack_18 * 100);
    }
  }
  else {
    iVar1 = MulDiv(*(int *)(iVar1 + 0xc),DAT_004ac658,0x9ec);
  }
  return iVar1;
}


