
/* ==== FUN_0041c8b0 @ 0041c8b0 ==== 
 * signature: undefined __register FUN_0041c8b0(int param_1, int * param_2)
 * body: 0041c8b0-0041c92b;0041c933-0041c938
 */

void FUN_0041c8b0(int param_1,int *param_2)

{
  UINT nSize;
  LPBYTE lpData;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    nSize = GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),0,(LPBYTE)0x0);
    if (nSize != 0) {
      lpData = (LPBYTE)FUN_0040277c(nSize);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),nSize,lpData);
      FUN_004126f0(param_2,lpData,nSize);
      *in_FS_OFFSET = uVar1;
      FUN_00402794((int)lpData);
      return;
    }
  }
  return;
}


