
/* ==== TWinControl.dyn_0085 @ 00435788 ==== 
 * signature: undefined TWinControl.dyn_0085(void)
 * body: 00435788-004359f6;004359fe-00435a0f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0085(int *param_1,undefined4 param_2)

{
  HWND pHVar1;
  uint uVar2;
  HBRUSH hbr;
  int iVar3;
  tagRECT *ptVar4;
  LONG *pLVar5;
  tagRECT *ptVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  UINT cPoints;
  int iVar8;
  undefined4 uVar9;
  HDC hDC;
  LONG aLStack_40 [4];
  tagRECT tStack_30;
  tagRECT tStack_20;
  HDC pHStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  bVar7 = 0;
  uStack_c = param_2;
  piStack_8 = param_1;
  if ((*(char *)((int)param_1 + 0x125) == '\0') && (param_1[0x4b] == 0)) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  pHVar1 = (HWND)FUN_004349e0(param_1);
  pHStack_10 = GetWindowDC(pHVar1);
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  ptVar4 = &tStack_20;
  pHVar1 = (HWND)FUN_004349e0(piStack_8);
  GetClientRect(pHVar1,ptVar4);
  ptVar4 = &tStack_30;
  pHVar1 = (HWND)FUN_004349e0(piStack_8);
  GetWindowRect(pHVar1,ptVar4);
  cPoints = 2;
  ptVar4 = &tStack_30;
  pHVar1 = (HWND)FUN_004349e0(piStack_8);
  MapWindowPoints((HWND)0x0,pHVar1,(LPPOINT)ptVar4,cPoints);
  OffsetRect(&tStack_20,-tStack_30.left,-tStack_30.top);
  ExcludeClipRect(pHStack_10,tStack_20.left,tStack_20.top,tStack_20.right,tStack_20.bottom);
  ptVar4 = &tStack_30;
  pLVar5 = aLStack_40;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pLVar5 = ptVar4->left;
    ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pLVar5 = pLVar5 + (uint)bVar7 * -2 + 1;
  }
  InflateRect(&tStack_20,piStack_8[0x4b],piStack_8[0x4b]);
  ptVar4 = &tStack_20;
  ptVar6 = &tStack_30;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar6->left = ptVar4->left;
    ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar7 * -2 + 1) * 4);
    ptVar6 = (tagRECT *)((int)ptVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  if (*(char *)((int)piStack_8 + 0x125) != '\0') {
    iVar3 = 0;
    if (*(char *)((int)piStack_8 + 0x123) != '\0') {
      iVar3 = piStack_8[0x4a];
    }
    if ((char)piStack_8[0x49] != '\0') {
      iVar3 = iVar3 + piStack_8[0x4a];
    }
    iVar8 = -0x10;
    pHVar1 = (HWND)FUN_004349e0(piStack_8);
    uVar2 = GetWindowLongA(pHVar1,iVar8);
    if ((*(byte *)((int)piStack_8 + 0x122) & 1) != 0) {
      tStack_30.left = tStack_30.left - iVar3;
    }
    if ((*(byte *)((int)piStack_8 + 0x122) & 2) != 0) {
      tStack_30.top = tStack_30.top - iVar3;
    }
    if ((*(byte *)((int)piStack_8 + 0x122) & 4) != 0) {
      tStack_30.right = tStack_30.right + iVar3;
    }
    if ((uVar2 & 0x200000) != 0) {
      iVar8 = (**(code **)PTR_DAT_004ab760)();
      tStack_30.right = tStack_30.right + iVar8;
    }
    if ((*(byte *)((int)piStack_8 + 0x122) & 8) != 0) {
      tStack_30.bottom = tStack_30.bottom + iVar3;
    }
    if ((uVar2 & 0x100000) != 0) {
      iVar3 = (**(code **)PTR_DAT_004ab760)();
      tStack_30.bottom = tStack_30.bottom + iVar3;
    }
    DrawEdge(pHStack_10,&tStack_30,
             *(uint *)((uint)*(byte *)((int)piStack_8 + 0x123) * 4 + 0x4aa7c4) |
             *(uint *)((uint)*(byte *)(piStack_8 + 0x49) * 4 + 0x4aa7d4),
             (uint)*(byte *)((int)piStack_8 + 0x122) |
             *(uint *)((uint)*(byte *)((int)piStack_8 + 0x125) * 4 + 0x4aa7e4) |
             *(uint *)((uint)*(byte *)(piStack_8 + 0x4e) * 4 + 0x4aa7f4) | 0x2000);
  }
  IntersectClipRect(pHStack_10,tStack_30.left,tStack_30.top,tStack_30.right,tStack_30.bottom);
  pLVar5 = aLStack_40;
  ptVar4 = &tStack_30;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *pLVar5;
    pLVar5 = pLVar5 + (uint)bVar7 * -2 + 1;
    ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  OffsetRect(&tStack_30,-tStack_30.left,-tStack_30.top);
  hbr = (HBRUSH)FUN_00418a18(piStack_8[0x4c]);
  FillRect(pHStack_10,&tStack_30,hbr);
  *in_FS_OFFSET = uVar9;
  hDC = pHStack_10;
  pHVar1 = (HWND)FUN_004349e0(piStack_8);
  ReleaseDC(pHVar1,hDC);
  return;
}


