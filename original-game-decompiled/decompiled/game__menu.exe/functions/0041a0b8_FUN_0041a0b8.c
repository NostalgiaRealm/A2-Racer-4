
/* ==== FUN_0041a0b8 @ 0041a0b8 ==== 
 * signature: undefined __register FUN_0041a0b8(BITMAPINFOHEADER * param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * body: 0041a0b8-0041a189
 */

void FUN_0041a0b8(BITMAPINFOHEADER *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  HDC hdc;
  HBITMAP pHVar2;
  HANDLE ho;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_30;
  code *pcStack_2c;
  
  param_1->biHeight = (uint)param_1->biHeight >> 1;
  iVar1 = FUN_00419a60(param_1->biWidth,(uint)param_1->biBitCount,0x20);
  param_1->biSizeImage = iVar1 * param_1->biHeight;
  iVar1 = FUN_00419a40(param_1->biBitCount);
  pcStack_2c = (code *)0x41a107;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_004197d4();
  }
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pHVar2 = CreateDIBitmap(hdc,param_1,4,&param_1[1].biSize + iVar1,(BITMAPINFO *)param_1,0);
  ho = (HANDLE)FUN_004198d0((int)pHVar2);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  uVar3 = FUN_004198e0(ho,param_4,'\0');
  *param_2 = uVar3;
  *in_FS_OFFSET = uVar4;
  DeleteObject(ho);
  return;
}


