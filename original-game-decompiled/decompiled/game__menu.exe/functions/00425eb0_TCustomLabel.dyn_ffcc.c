
/* ==== TCustomLabel.dyn_ffcc @ 00425eb0 ==== 
 * signature: undefined TCustomLabel.dyn_ffcc(void)
 * body: 00425eb0-00426005
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomLabel_dyn_ffcc(int *param_1,LPRECT param_2,uint param_3)

{
  char cVar1;
  uint format;
  int iVar2;
  LPCSTR pCVar3;
  HDC pHVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *in_FS_OFFSET;
  LPRECT lprc;
  uint format_00;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  char *pcStack_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  pcStack_8 = (char *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x88))(param_1,&pcStack_8);
  uVar5 = extraout_ECX;
  if (((param_3 & 0x400) != 0) &&
     ((pcStack_8 == (char *)0x0 ||
      ((((char)param_1[0x4c] != '\0' && (*pcStack_8 == '&')) && (pcStack_8[1] == '\0')))))) {
    FUN_00403ee4((int *)&pcStack_8,(undefined4 *)&DAT_0042601c);
    uVar5 = extraout_ECX_00;
  }
  if ((char)param_1[0x4c] == '\0') {
    param_3 = param_3 | 0x800;
  }
  format = FUN_00430668(param_1,param_3,uVar5);
  TCanvas_set_Font(param_1[0x48]);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    OffsetRect(param_2,1,1);
    TFont_set_Color(*(int **)(param_1[0x48] + 0xc),-0x7fffffec,extraout_ECX_01);
    lprc = param_2;
    format_00 = format;
    iVar2 = FUN_00403edc((int)pcStack_8);
    pCVar3 = FUN_004040a0(pcStack_8);
    pHVar4 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar2,lprc,format_00);
    OffsetRect(param_2,-1,-1);
    TFont_set_Color(*(int **)(param_1[0x48] + 0xc),-0x7ffffff0,extraout_ECX_02);
    iVar2 = FUN_00403edc((int)pcStack_8);
    pCVar3 = FUN_004040a0(pcStack_8);
    pHVar4 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar2,param_2,format);
  }
  else {
    iVar2 = FUN_00403edc((int)pcStack_8);
    pCVar3 = FUN_004040a0(pcStack_8);
    pHVar4 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar2,param_2,format);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0042600d;
  pcStack_1c = (code *)0x426005;
  FUN_00403c5c((int *)&pcStack_8);
  return;
}


