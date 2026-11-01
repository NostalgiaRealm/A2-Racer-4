
/* ==== FUN_00474d6c @ 00474d6c ==== 
 * signature: undefined __register FUN_00474d6c(undefined4 param_1, int * param_2, undefined * param_3, char param_4, LONG * param_5)
 * body: 00474d6c-00474e3a
 */

void FUN_00474d6c(undefined4 param_1,int *param_2,undefined *param_3,char param_4,LONG *param_5)

{
  LPCSTR lpchText;
  HDC pHVar1;
  LPCSTR pCVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  tagRECT *ptVar4;
  UINT UVar5;
  tagRECT local_14;
  
  ptVar4 = &local_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *param_5;
    param_5 = param_5 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  TBrush_set_Style((int *)param_2[5],'\x01');
  if (param_4 == '\x01') {
    OffsetRect(&local_14,1,1);
    TFont_set_Color((int *)param_2[3],-0x7fffffec,extraout_ECX);
    UVar5 = 0;
    ptVar4 = &local_14;
    iVar3 = FUN_00403edc((int)param_3);
    lpchText = FUN_004040a0(param_3);
    pCVar2 = lpchText;
    pHVar1 = (HDC)FUN_004194d8(param_2);
    DrawTextA(pHVar1,pCVar2,iVar3,ptVar4,UVar5);
    OffsetRect(&local_14,-1,-1);
    TFont_set_Color((int *)param_2[3],-0x7ffffff0,extraout_ECX_00);
    UVar5 = 0;
    ptVar4 = &local_14;
    iVar3 = FUN_00403edc((int)param_3);
    pHVar1 = (HDC)FUN_004194d8(param_2);
    DrawTextA(pHVar1,lpchText,iVar3,ptVar4,UVar5);
  }
  else {
    UVar5 = 0x25;
    ptVar4 = &local_14;
    iVar3 = FUN_00403edc((int)param_3);
    pCVar2 = FUN_004040a0(param_3);
    pHVar1 = (HDC)FUN_004194d8(param_2);
    DrawTextA(pHVar1,pCVar2,iVar3,ptVar4,UVar5);
  }
  return;
}


