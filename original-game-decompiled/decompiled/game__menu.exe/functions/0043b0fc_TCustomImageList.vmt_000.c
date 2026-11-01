
/* ==== TCustomImageList.vmt_000 @ 0043b0fc ==== 
 * signature: undefined TCustomImageList.vmt_000(void)
 * body: 0043b0fc-0043b1ab
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
  
  uVar2 = FUN_00403114(param_2,(int)&PTR_TCustomImageList_vmt_000_0043a15c);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_2 + 0x35) = *(undefined1 *)((int)param_1 + 0x35);
    *(undefined1 *)((int)param_2 + 0x37) = *(undefined1 *)((int)param_1 + 0x37);
    TImageList_set_DrawingStyle
              (param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_2 + 0x36) = *(undefined1 *)((int)param_1 + 0x36);
    param_2[0xf] = param_1[0xf];
    FUN_0043abf4(param_2);
    p_Var3 = (HIMAGELIST)FUN_0043a5b8(param_1);
    FUN_0043a4bc((int)param_2,p_Var3);
    bVar1 = FUN_0043a3e4((int)param_2);
    if (bVar1) {
      cy = param_2[9];
      cx = param_2[10];
      p_Var3 = (HIMAGELIST)FUN_0043a5b8(param_2);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_0043a3ec(param_2);
    }
    p_Var3 = (HIMAGELIST)FUN_0043a5b8(param_1);
    CVar4 = ImageList_GetBkColor(p_Var3);
    uVar5 = FUN_0043a200(CVar4);
    TImageList_set_BkColor(param_2,uVar5);
    FUN_0043b01c(param_2,param_1);
    return;
  }
  TPersistent_vmt_000(param_1,param_2);
  return;
}


