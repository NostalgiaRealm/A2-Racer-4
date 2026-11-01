
/* ==== TCustomImageList.vmt_000 @ 00430a1c ==== 
 * signature: undefined TCustomImageList.vmt_000(void)
 * body: 00430a1c-00430acb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomImageList_vmt_000(int *param_1,int *param_2)

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
  
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TCustomImageList_vmt_000_0042fef4);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_2 + 0x35) = *(undefined1 *)((int)param_1 + 0x35);
    *(undefined1 *)((int)param_2 + 0x37) = *(undefined1 *)((int)param_1 + 0x37);
    FUN_00430b44(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_2 + 0x36) = *(undefined1 *)((int)param_1 + 0x36);
    param_2[0xf] = param_1[0xf];
    FUN_00430514(param_2);
    p_Var3 = (HIMAGELIST)FUN_00430264(param_1);
    FUN_00430200((int)param_2,p_Var3);
    bVar1 = FUN_00430128((int)param_2);
    if (bVar1) {
      cy = param_2[9];
      cx = param_2[10];
      p_Var3 = (HIMAGELIST)FUN_00430264(param_2);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_00430130(param_2);
    }
    p_Var3 = (HIMAGELIST)FUN_00430264(param_1);
    CVar4 = ImageList_GetBkColor(p_Var3);
    uVar5 = FUN_0042ff98(CVar4);
    FUN_00430520(param_2,uVar5);
    FUN_0043093c(param_2,param_1);
    return;
  }
  TPersistent_vmt_000(param_1,param_2);
  return;
}


