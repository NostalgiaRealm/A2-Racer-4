
/* ==== FUN_00418c54 @ 00418c54 ==== 
 * signature: undefined __register FUN_00418c54(int * param_1, int * param_2, int * param_3, uint param_4, int * param_5)
 * body: 00418c54-00418eb2;00418f01-00418f09
 */

void FUN_00418c54(int *param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  int iVar1;
  int hDest;
  int hSrc;
  uint uVar2;
  HGDIOBJ h;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  COLORREF color;
  COLORREF color_00;
  undefined4 extraout_ECX;
  int wSrc;
  undefined4 *in_FS_OFFSET;
  int xSrc;
  int wSrc_00;
  int hSrc_00;
  DWORD rop;
  undefined4 uVar7;
  undefined4 uStack_50;
  code *pcStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined1 *puStack_3c;
  HGDIOBJ local_2c;
  int *local_28;
  HDC local_24;
  
  if (param_3 != (int *)0x0) {
    puStack_3c = (undefined1 *)0x418c7a;
    FUN_0041912c((int)param_1);
    pcStack_40 = thunk_FUN_004036bc;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    puStack_48 = (undefined1 *)0x418c90;
    puStack_3c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x10))();
    puStack_48 = (undefined1 *)0x418c9e;
    FUN_004195ac(param_1,9);
    puStack_48 = (undefined1 *)0x418ca6;
    iVar1 = FUN_0041df1c(param_3);
    puStack_48 = (undefined1 *)0x418cab;
    FUN_0041912c(iVar1);
    pcStack_4c = thunk_FUN_004036bc;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    iVar1 = param_2[2] - *param_2;
    hDest = param_2[3] - param_2[1];
    wSrc = param_5[2] - *param_5;
    hSrc = param_5[3] - param_5[1];
    puStack_48 = &stack0xfffffffc;
    uVar2 = FUN_0041e000(param_3);
    if (uVar2 == param_4) {
      local_28 = (int *)0x0;
      h = (HGDIOBJ)(**(code **)(*param_3 + 100))();
      local_24 = CreateCompatibleDC((HDC)0x0);
      local_2c = SelectObject(local_24,h);
    }
    else {
      local_28 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX);
      (**(code **)(*local_28 + 8))(local_28,param_3);
      FUN_0041e0e4(local_28,param_4);
      piVar3 = (int *)FUN_0041df1c(local_28);
      FUN_004195ac(piVar3,1);
      iVar5 = FUN_0041df1c(local_28);
      local_24 = *(HDC *)(iVar5 + 4);
      local_2c = (HGDIOBJ)0x0;
    }
    uVar7 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffa4;
    piVar3 = (int *)FUN_0041df1c(param_3);
    FUN_004195ac(piVar3,1);
    uVar4 = TBrush_get_Style(param_1[5]);
    if ((char)uVar4 == '\x01') {
      iVar5 = FUN_0041df1c(param_3);
      FUN_00419a74((HDC)param_1[1],*param_2,param_2[1],param_5[1],*param_5,local_24,hSrc,wSrc,
                   param_5[1],*param_5,*(HDC *)(iVar5 + 4),hDest,iVar1);
    }
    else {
      rop = 0xcc0020;
      iVar5 = param_5[1];
      xSrc = *param_5;
      wSrc_00 = wSrc;
      hSrc_00 = hSrc;
      iVar6 = FUN_0041df1c(param_3);
      StretchBlt((HDC)param_1[1],*param_2,param_2[1],iVar1,hDest,*(HDC *)(iVar6 + 4),xSrc,iVar5,
                 wSrc_00,hSrc_00,rop);
      color = SetTextColor((HDC)param_1[1],0);
      color_00 = SetBkColor((HDC)param_1[1],0xffffff);
      StretchBlt((HDC)param_1[1],*param_2,param_2[1],iVar1,hDest,local_24,*param_5,param_5[1],wSrc,
                 hSrc,0xe20746);
      SetTextColor((HDC)param_1[1],color);
      SetBkColor((HDC)param_1[1],color_00);
    }
    *in_FS_OFFSET = uVar7;
    if (local_28 == (int *)0x0) {
      if (local_2c != (HGDIOBJ)0x0) {
        SelectObject(local_24,local_2c);
      }
      DeleteDC(local_24);
    }
    else {
      FUN_00402f9c(local_28);
    }
    return;
  }
  return;
}


