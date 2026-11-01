
/* ==== TDaviGraphicButton.vmt_0c0 @ 00469ac4 ==== 
 * signature: undefined __register TDaviGraphicButton.vmt_0c0(int * param_1, int param_2)
 * body: 00469ac4-00469c26
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviGraphicButton_vmt_0c0(int *param_1,int param_2)

{
  HDC pHVar1;
  int *piVar2;
  LPCSTR lpchText;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar3;
  int cchText;
  UINT UVar4;
  UINT UVar5;
  undefined4 uStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  RECT local_38;
  undefined *local_28;
  tagRECT local_24;
  tagRECT local_14;
  
  pcStack_44 = (code *)&stack0xfffffffc;
  local_28 = (undefined *)0x0;
  pcStack_48 = thunk_FUN_004036bc;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  FUN_00419558((int *)param_1[0x80],*(int *)(param_2 + 0x18));
  (**(code **)(*param_1 + 0x40))(param_1,&local_14);
  if (param_1[0x82] == 0) {
    UVar5 = 0x10;
    UVar4 = 4;
    ptVar3 = &local_14;
    pHVar1 = (HDC)FUN_004194d8((int *)param_1[0x80]);
    DrawFrameControl(pHVar1,ptVar3,UVar4,UVar5);
  }
  else {
    FUN_00469d78(param_1,param_2);
    piVar2 = (int *)(**(code **)(*param_1 + 200))();
    FUN_00418f9c((int *)param_1[0x80],0,0,piVar2);
    TCanvas_set_Font(param_1[0x80]);
    if ((char)param_1[0x86] == '\x04') {
      TFont_set_Color(*(int **)(param_1[0x80] + 0xc),param_1[0x83],extraout_ECX);
    }
    TBrush_set_Style(*(int **)(param_1[0x80] + 0x14),'\x01');
    FUN_0045df20(param_1[0x82],CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0x86]),
                 &local_24.left);
    UVar4 = 0x25;
    if ((char)param_1[0x8e] != '\0') {
      UVar4 = 0x15;
    }
    ptVar3 = &local_24;
    cchText = -1;
    TGroupBox_get_Caption((int)param_1,(int *)&local_28);
    lpchText = FUN_004040a0(local_28);
    pHVar1 = (HDC)FUN_004194d8((int *)param_1[0x80]);
    DrawTextA(pHVar1,lpchText,cchText,ptVar3,UVar4);
    if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
      TBrush_set_Color(*(int **)(param_1[0x80] + 0x14),0xffffff);
      (**(code **)(*param_1 + 0x40))(param_1,&local_38);
      FUN_004190b8((int *)param_1[0x80],&local_38);
    }
    FUN_00419558((int *)param_1[0x80],0);
  }
  *in_FS_OFFSET = uStack_4c;
  pcStack_44 = FUN_00469c2e;
  pcStack_48 = (code *)0x469c26;
  FUN_00403c5c((int *)&local_28);
  return;
}


