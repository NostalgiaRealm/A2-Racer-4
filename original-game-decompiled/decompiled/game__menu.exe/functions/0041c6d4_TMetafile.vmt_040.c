
/* ==== TMetafile.vmt_040 @ 0041c6d4 ==== 
 * signature: undefined TMetafile.vmt_040(void)
 * body: 0041c6d4-0041c744
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_040(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iStack_24;
  int iStack_1c;
  
  if (param_1[8] == 0) {
    FUN_0041c1c8((int)param_1);
  }
  iVar1 = param_1[8];
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      *(int *)(iVar1 + 0x1c) = param_2;
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff94);
      iVar1 = MulDiv(param_2,iStack_1c * 100,iStack_24);
      FUN_0041c694(param_1,iVar1,extraout_ECX);
    }
  }
  else {
    iVar1 = MulDiv(param_2,0x9ec,DAT_004ac658);
    FUN_0041c694(param_1,iVar1,extraout_ECX_00);
  }
  return;
}


