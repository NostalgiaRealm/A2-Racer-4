
/* ==== TCustomEdit.dyn_b012 @ 00426cf4 ==== 
 * signature: undefined __register TCustomEdit.dyn_b012(int * param_1)
 * body: 00426cf4-00426d2a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomEdit_dyn_b012(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int nIndex;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_00434cdc((int)param_1);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (bVar1) {
    nIndex = -0x10;
    hWnd = (HWND)FUN_004349e0(param_1);
    uVar2 = GetWindowLongA(hWnd,nIndex);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
    if ((uVar2 & 4) == 0) {
      return;
    }
  }
  FUN_00403178(param_1,uVar4,uVar3);
  return;
}


