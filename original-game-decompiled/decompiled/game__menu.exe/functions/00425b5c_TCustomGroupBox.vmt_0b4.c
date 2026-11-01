
/* ==== TCustomGroupBox.vmt_0b4 @ 00425b5c ==== 
 * signature: undefined __register TCustomGroupBox.vmt_0b4(int * param_1)
 * body: 00425b5c-00425d4f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGroupBox_vmt_0b4(int *param_1)

{
  int *piVar1;
  char cVar2;
  LONG LVar3;
  uint uVar4;
  uint format;
  LPCSTR pCVar5;
  HDC pHVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_EDX;
  LONG *pLVar9;
  RECT *pRVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  undefined4 uStack_58;
  code *pcStack_54;
  code *pcStack_50;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  LONG local_2c [4];
  int local_1c;
  RECT local_18;
  uint local_8;
  
  bVar11 = 0;
  pcStack_50 = (code *)&stack0xfffffffc;
  local_40 = (undefined *)0x0;
  local_3c = 0;
  local_38 = (undefined *)0x0;
  local_34 = 0;
  local_30 = (undefined *)0x0;
  local_1c = 0;
  pcStack_54 = thunk_FUN_004036bc;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  piVar1 = (int *)param_1[0x7c];
  TCanvas_set_Font((int)piVar1);
  local_8 = FUN_00419354(piVar1,FUN_00425d68);
  iVar8 = (int)local_8 >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((local_8 & 1) != 0);
  }
  FUN_0040f7e8(0,iVar8 + -1,param_1[0xe],&local_18.left,param_1[0xf]);
  if ((char)param_1[0x4e] == '\0') {
    TBrush_set_Color((int *)piVar1[5],0x80000006);
  }
  else {
    local_18.left = local_18.left + 1;
    local_18.top = local_18.top + 1;
    TBrush_set_Color((int *)piVar1[5],0x80000014);
    FUN_004190b8(piVar1,&local_18);
    OffsetRect(&local_18,-1,-1);
    TBrush_set_Color((int *)piVar1[5],0x80000010);
  }
  FUN_004190b8(piVar1,&local_18);
  TGroupBox_get_Caption((int)param_1,&local_1c);
  if (local_1c != 0) {
    cVar2 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    if (cVar2 == '\0') {
      FUN_0040f7e8(8,0,0,&local_18.left,local_8);
      uVar7 = extraout_ECX_00;
    }
    else {
      pLVar9 = local_2c;
      uVar4 = local_8;
      TGroupBox_get_Caption((int)param_1,(int *)&local_30);
      LVar3 = FUN_00419338((int *)param_1[0x7c],local_30);
      FUN_0040f7e8((local_18.right - LVar3) + -8,0,0,pLVar9,uVar4);
      pLVar9 = local_2c;
      pRVar10 = &local_18;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        pRVar10->left = *pLVar9;
        pLVar9 = pLVar9 + (uint)bVar11 * -2 + 1;
        pRVar10 = (RECT *)((int)pRVar10 + ((uint)bVar11 * -2 + 1) * 4);
      }
      uVar7 = 0;
    }
    uVar4 = FUN_00430668(param_1,0x20,uVar7);
    format = uVar4 | 0x400;
    pRVar10 = &local_18;
    TGroupBox_get_Caption((int)param_1,&local_34);
    iVar8 = FUN_00403edc(local_34);
    TGroupBox_get_Caption((int)param_1,(int *)&local_38);
    pCVar5 = FUN_004040a0(local_38);
    pHVar6 = (HDC)FUN_004194d8(piVar1);
    DrawTextA(pHVar6,pCVar5,iVar8,pRVar10,format);
    TBrush_set_Color((int *)piVar1[5],param_1[0x18]);
    pRVar10 = &local_18;
    TGroupBox_get_Caption((int)param_1,&local_3c);
    iVar8 = FUN_00403edc(local_3c);
    TGroupBox_get_Caption((int)param_1,(int *)&local_40);
    pCVar5 = FUN_004040a0(local_40);
    pHVar6 = (HDC)FUN_004194d8(piVar1);
    DrawTextA(pHVar6,pCVar5,iVar8,pRVar10,uVar4);
  }
  *in_FS_OFFSET = uStack_58;
  pcStack_50 = FUN_00425d57;
  pcStack_54 = (code *)0x425d47;
  FUN_00403c80((int *)&local_40,5);
  pcStack_54 = (code *)0x425d4f;
  FUN_00403c5c(&local_1c);
  return;
}


