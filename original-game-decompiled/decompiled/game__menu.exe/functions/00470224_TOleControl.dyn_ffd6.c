
/* ==== TOleControl.dyn_ffd6 @ 00470224 ==== 
 * signature: undefined TOleControl.dyn_ffd6(void)
 * body: 00470224-00470271
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

char TOleControl_dyn_ffd6(int *param_1,byte param_2)

{
  bool bVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  char cVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  cVar5 = false;
  bVar1 = FUN_00434cdc((int)param_1);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if ((bVar1 & param_2) != 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x30f;
    hWnd = (HWND)FUN_004349e0(param_1);
    LVar2 = CallWindowProcA((WNDPROC)param_1[0x4f],hWnd,Msg,wParam,lParam);
    cVar5 = LVar2 != 0;
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  if ((bool)cVar5 == false) {
    cVar5 = TWinControl_dyn_ffd6(param_1,CONCAT31((int3)((uint)uVar4 >> 8),param_2),uVar3);
  }
  return cVar5;
}


