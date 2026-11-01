
/* ==== TCustomImageList.vmt_008 @ 0043095c ==== 
 * signature: undefined TCustomImageList.vmt_008(void)
 * body: 0043095c-00430a18
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomImageList_vmt_008(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HIMAGELIST p_Var3;
  COLORREF CVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int cx;
  int cy;
  
  if (param_2 == (int *)0x0) {
    FUN_004302c8(param_1);
    return;
  }
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TCustomImageList_vmt_000_0042fef4);
  if ((char)uVar2 == '\0') {
    TPersistent_vmt_008(param_1,param_2);
  }
  else {
    FUN_00430514(param_1);
    *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)((int)param_2 + 0x35);
    *(undefined1 *)((int)param_1 + 0x37) = *(undefined1 *)((int)param_2 + 0x37);
    FUN_00430b44(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)((int)param_2 + 0x36);
    p_Var3 = (HIMAGELIST)FUN_00430264(param_2);
    FUN_00430200((int)param_1,p_Var3);
    bVar1 = FUN_00430128((int)param_1);
    if (bVar1) {
      cy = param_1[9];
      cx = param_1[10];
      p_Var3 = (HIMAGELIST)FUN_00430264(param_1);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_00430130(param_1);
    }
    p_Var3 = (HIMAGELIST)FUN_00430264(param_2);
    CVar4 = ImageList_GetBkColor(p_Var3);
    uVar5 = FUN_0042ff98(CVar4);
    FUN_00430520(param_1,uVar5);
    param_1[0xf] = param_2[0xf];
    FUN_0043093c(param_1,param_2);
  }
  return;
}


