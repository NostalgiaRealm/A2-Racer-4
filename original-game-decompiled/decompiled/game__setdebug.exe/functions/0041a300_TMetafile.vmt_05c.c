
/* ==== TMetafile.vmt_05c @ 0041a300 ==== 
 * signature: undefined __register TMetafile.vmt_05c(int param_1, undefined2 * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 0041a300-0041a330
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_05c(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    *param_2 = 0xe;
    *param_4 = 0;
    pHVar2 = CopyEnhMetaFileA(*(HENHMETAFILE *)(iVar1 + 8),(LPCSTR)0x0);
    *param_3 = pHVar2;
  }
  return;
}


