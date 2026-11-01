
/* ==== FUN_00430520 @ 00430520 ==== 
 * signature: undefined __register FUN_00430520(int * param_1, uint param_2)
 * body: 00430520-00430554
 */

void FUN_00430520(int *param_1,uint param_2)

{
  bool bVar1;
  COLORREF clrBk;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    clrBk = FUN_0042ff78(param_2);
    ImageList_SetBkColor((HIMAGELIST)param_1[0xc],clrBk);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    param_1[0xe] = param_2;
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
  }
  FUN_00402ef0(param_1,uVar3,uVar2);
  return;
}


