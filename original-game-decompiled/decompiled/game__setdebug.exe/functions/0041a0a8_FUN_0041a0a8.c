
/* ==== FUN_0041a0a8 @ 0041a0a8 ==== 
 * signature: undefined __register FUN_0041a0a8(int param_1, int * param_2)
 * body: 0041a0a8-0041a123;0041a12b-0041a130
 */

void FUN_0041a0a8(int param_1,int *param_2)

{
  UINT nSize;
  LPBYTE lpData;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    nSize = GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),0,(LPBYTE)0x0);
    if (nSize != 0) {
      lpData = (LPBYTE)FUN_004026b8(nSize);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),nSize,lpData);
      FUN_00410b60(param_2,lpData,nSize);
      *in_FS_OFFSET = uVar1;
      FUN_004026d0((int)lpData);
      return;
    }
  }
  return;
}


