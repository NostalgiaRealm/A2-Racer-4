
/* ==== FUN_004763b4 @ 004763b4 ==== 
 * signature: undefined FUN_004763b4(void)
 * body: 004763b4-0047665a
 */

void FUN_004763b4(int *param_1,int param_2)

{
  char cVar1;
  UINT UVar2;
  uint uVar3;
  HDC hDC;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  uint *puVar6;
  tagRECT *lprc;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined1 *puStack_44;
  undefined *puStack_34;
  uint auStack_30 [2];
  tagRECT tStack_28;
  tagRECT tStack_18;
  byte bStack_6;
  byte bStack_5;
  
  puStack_44 = &stack0xfffffffc;
  puStack_34 = (undefined *)0x0;
  puStack_48 = &UNK_0047665b;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  FUN_00419558((int *)param_1[0x80],*(int *)(param_2 + 0x18));
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_18);
  bVar5 = (*(uint *)(param_2 + 0x10) & 1) != 0;
  bStack_5 = (*(uint *)(param_2 + 0x10) & 0x10) != 0;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    bStack_6 = 1;
  }
  else if (bVar5) {
    bStack_6 = 2;
  }
  else {
    bStack_6 = 0;
  }
  UVar2 = 0x2010;
  if (bVar5) {
    UVar2 = 0x2210;
  }
  if ((*(byte *)(param_2 + 0x10) & 4) != 0) {
    UVar2 = UVar2 | 0x100;
  }
  if (bVar5) {
    TPen_set_Color(*(int **)(param_1[0x80] + 0x10),0x80000010);
    TPen_set_Width(*(int **)(param_1[0x80] + 0x10),1);
    TBrush_set_Color(*(int **)(param_1[0x80] + 0x14),0x8000000f);
    FUN_004191b8((int *)param_1[0x80],tStack_18.left,tStack_18.top,tStack_18.bottom,tStack_18.right)
    ;
    InflateRect(&tStack_18,-1,-1);
  }
  else {
    DrawFrameControl(*(HDC *)(param_2 + 0x18),&tStack_18,4,UVar2);
  }
  if (*(char *)((int)param_1 + 0x219) != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,&tStack_18);
    InflateRect(&tStack_18,-1,-1);
  }
  if ((*(char *)((int)param_1 + 0x219) != '\0' || bStack_5 != 0) && (!bVar5)) {
    TPen_set_Color(*(int **)(param_1[0x80] + 0x10),0x80000014);
    FUN_00419154((int *)param_1[0x80],tStack_18.left,tStack_18.top);
    FUN_004190f4((int *)param_1[0x80],tStack_18.left,tStack_18.bottom);
    uVar3 = TPen_set_Color(*(int **)(param_1[0x80] + 0x10),0x80000010);
    iVar4 = tStack_18.right + -2;
    if (SBORROW4(tStack_18.right,2)) {
      thunk_FUN_00402808(uVar3);
      iVar4 = extraout_EDX;
    }
    uVar3 = FUN_00419154((int *)param_1[0x80],iVar4,tStack_18.top);
    iVar4 = tStack_18.right + -2;
    if (SBORROW4(tStack_18.right,2)) {
      thunk_FUN_00402808(uVar3);
      iVar4 = extraout_EDX_00;
    }
    FUN_004190f4((int *)param_1[0x80],iVar4,tStack_18.bottom);
    InflateRect(&tStack_18,-1,0);
  }
  TCanvas_set_Font(param_1[0x80]);
  if (bVar5) {
    OffsetRect(&tStack_18,1,1);
  }
  FUN_0040f7d0(0,0,auStack_30);
  puVar6 = auStack_30;
  TGroupBox_get_Caption((int)param_1,(int *)&puStack_34);
  FUN_004752a4(param_1[0x81],(int *)param_1[0x80],&tStack_18.left,&tStack_28,'\x01','\0',bStack_6,
               param_1[0x85],param_1[0x83],*(byte *)((int)param_1 + 0x209),puStack_34,puVar6);
  if ((*(byte *)((int)param_1 + 0x219) & bStack_5) != 0) {
    (**(code **)(*param_1 + 0x40))(param_1,&tStack_18);
    InflateRect(&tStack_18,-4,-4);
    TPen_set_Color(*(int **)(param_1[0x80] + 0x10),0x80000006);
    TBrush_set_Color(*(int **)(param_1[0x80] + 0x14),0x8000000f);
    lprc = &tStack_18;
    hDC = (HDC)FUN_004194d8((int *)param_1[0x80]);
    DrawFocusRect(hDC,lprc);
  }
  FUN_00419558((int *)param_1[0x80],0);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &UNK_00476662;
  puStack_48 = (undefined *)0x47665a;
  FUN_00403c5c((int *)&puStack_34);
  return;
}


