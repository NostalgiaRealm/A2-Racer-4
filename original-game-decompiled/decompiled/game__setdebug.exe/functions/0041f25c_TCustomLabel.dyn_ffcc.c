
/* ==== TCustomLabel.dyn_ffcc @ 0041f25c ==== 
 * signature: undefined TCustomLabel.dyn_ffcc(void)
 * body: 0041f25c-0041f3b1
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
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x88))(param_1,&pcStack_8);
  uVar5 = extraout_ECX;
  if (((param_3 & 0x400) != 0) &&
     ((pcStack_8 == (char *)0x0 ||
      ((((char)param_1[0x4c] != '\0' && (*pcStack_8 == '&')) && (pcStack_8[1] == '\0')))))) {
    FUN_00403c40((int *)&pcStack_8,(undefined4 *)&DAT_0041f3c8);
    uVar5 = extraout_ECX_00;
  }
  if ((char)param_1[0x4c] == '\0') {
    param_3 = param_3 | 0x800;
  }
  format = FUN_004266c8(param_1,param_3,uVar5);
  TCanvas_set_Font(param_1[0x48]);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    OffsetRect(param_2,1,1);
    TFont_set_Color(*(int **)(param_1[0x48] + 0xc),-0x7fffffec,extraout_ECX_01);
    lprc = param_2;
    format_00 = format;
    iVar2 = FUN_00403c38((int)pcStack_8);
    pCVar3 = FUN_00403dfc(pcStack_8);
    pHVar4 = (HDC)FUN_00417430((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar2,lprc,format_00);
    OffsetRect(param_2,-1,-1);
    TFont_set_Color(*(int **)(param_1[0x48] + 0xc),-0x7ffffff0,extraout_ECX_02);
    iVar2 = FUN_00403c38((int)pcStack_8);
    pCVar3 = FUN_00403dfc(pcStack_8);
    pHVar4 = (HDC)FUN_00417430((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar2,param_2,format);
  }
  else {
    iVar2 = FUN_00403c38((int)pcStack_8);
    pCVar3 = FUN_00403dfc(pcStack_8);
    pHVar4 = (HDC)FUN_00417430((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar2,param_2,format);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0041f3b9;
  pcStack_1c = (code *)0x41f3b1;
  FUN_004039b8((int *)&pcStack_8);
  return;
}


