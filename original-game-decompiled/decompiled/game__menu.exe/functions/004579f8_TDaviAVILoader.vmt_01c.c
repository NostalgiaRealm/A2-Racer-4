
/* ==== TDaviAVILoader.vmt_01c @ 004579f8 ==== 
 * signature: undefined TDaviAVILoader.vmt_01c(void)
 * body: 004579f8-00457b15
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAVILoader_vmt_01c(int *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  BITMAPINFO *lpbmi;
  BITMAPINFO *pBVar5;
  int *piVar6;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar8;
  int iVar9;
  int *in_FS_OFFSET;
  int xDest;
  int yDest;
  int DestWidth;
  int DestHeight;
  int xSrc;
  int ySrc;
  int SrcWidth;
  void *lpBits;
  UINT iUsage;
  DWORD rop;
  int iStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_11c = &stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  if (((int)param_2 < param_1[0xe]) ||
     (uVar4 = param_2, puVar3 = &stack0xfffffffc, param_1[0xf] <= (int)param_2)) {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(&iStack_c,abStack_10c);
    FUN_00403f9c(&iStack_8,4);
    uVar4 = FUN_00403c40(iStack_8);
    puVar3 = puStack_11c;
  }
  puStack_11c = puVar3;
  if ((int)param_2 < 0) {
    thunk_FUN_00402808(uVar4);
  }
  iVar1 = param_1[5];
  lpbmi = (BITMAPINFO *)AVIStreamGetFrame();
  if (lpbmi != (BITMAPINFO *)0x0) {
    lVar2 = (longlong)(int)(lpbmi->bmiHeader).biClrUsed * 4;
    uVar4 = (uint)lVar2;
    pBVar5 = lpbmi;
    uVar7 = extraout_ECX;
    uVar8 = extraout_EDX;
    if ((int)uVar4 != lVar2) {
      pBVar5 = (BITMAPINFO *)thunk_FUN_00402808((uint)lpbmi);
      uVar7 = extraout_ECX_00;
      uVar8 = extraout_EDX_00;
    }
    iVar9 = uVar4 + (lpbmi->bmiHeader).biSize;
    if (CARRY4(uVar4,(lpbmi->bmiHeader).biSize)) {
      pBVar5 = (BITMAPINFO *)thunk_FUN_00402808((uint)pBVar5);
      uVar7 = extraout_ECX_01;
      uVar8 = extraout_EDX_01;
    }
    if (iVar9 < 0) {
      thunk_FUN_00402808((uint)pBVar5);
      uVar7 = extraout_ECX_02;
      uVar8 = extraout_EDX_02;
    }
    rop = 0xcc0020;
    iUsage = 0;
    lpBits = (void *)((int)&(((BITMAPINFO *)(lpbmi->bmiColors + -10))->bmiHeader).biSize + iVar9);
    iVar9 = *(int *)(param_1[2] + 0x10);
    SrcWidth = *(int *)(param_1[2] + 0xc);
    ySrc = param_1[0x15];
    xSrc = param_1[0x14];
    DestHeight = *(int *)(param_1[2] + 0x10);
    DestWidth = *(int *)(param_1[2] + 0xc);
    yDest = 0;
    xDest = 0;
    piVar6 = (int *)FUN_00456800(param_1[0x2a],uVar8,uVar7);
    hdc = (HDC)FUN_004194d8(piVar6);
    StretchDIBits(hdc,xDest,yDest,DestWidth,DestHeight,xSrc,ySrc,SrcWidth,iVar9,lpBits,lpbmi,iUsage,
                  rop);
  }
  *in_FS_OFFSET = iVar1;
  FUN_00403c80(&iStack_c,2);
  return;
}


