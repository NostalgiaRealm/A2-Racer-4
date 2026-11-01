
/* ==== FUN_00418010 @ 00418010 ==== 
 * signature: undefined __register FUN_00418010(BITMAPINFOHEADER * param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * body: 00418010-004180e1
 */

void FUN_00418010(BITMAPINFOHEADER *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

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
  iVar1 = FUN_004179b8(param_1->biWidth,(uint)param_1->biBitCount,0x20);
  param_1->biSizeImage = iVar1 * param_1->biHeight;
  iVar1 = FUN_00417998(param_1->biBitCount);
  pcStack_2c = (code *)0x41805f;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_0041772c();
  }
  pcStack_2c = thunk_FUN_00403434;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pHVar2 = CreateDIBitmap(hdc,param_1,4,&param_1[1].biSize + iVar1,(BITMAPINFO *)param_1,0);
  ho = (HANDLE)FUN_00417828((int)pHVar2);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  uVar3 = FUN_00417838(ho,param_4,'\0');
  *param_2 = uVar3;
  *in_FS_OFFSET = uVar4;
  DeleteObject(ho);
  return;
}


