
/* ==== TWinControl.DefaultHandler @ 004323cc ==== 
 * signature: undefined __register TWinControl.DefaultHandler(int param_1, UINT * param_2)
 * body: 004323cc-004324c4
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TWinControl_DefaultHandler(int param_1,UINT *param_2)

{
  UINT UVar1;
  COLORREF CVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x14c) == 0) {
    TControl_DefaultHandler(param_1,(int *)param_2);
  }
  else {
    if ((*param_2 == 0x7b) && (*(int *)(param_1 + 0x24) != 0)) {
      UVar1 = FUN_0042f720(*(int *)(param_1 + 0x24),0x7b,param_2[1],param_2[2]);
      param_2[3] = UVar1;
      if (UVar1 != 0) {
        return;
      }
    }
    UVar1 = *param_2;
    if (UVar1 - 0x132 < 7) {
      UVar1 = SendMessageA((HWND)param_2[2],UVar1 + 0xbc00,param_2[1],(LPARAM)param_2[2]);
      param_2[3] = UVar1;
    }
    else if (UVar1 - 0xbd32 < 7) {
      CVar2 = FUN_00417d54(*(uint *)(*(int *)(param_1 + 0x58) + 0x18));
      SetTextColor((HDC)param_2[1],CVar2);
      uVar3 = TBrush_get_Color(*(int *)(param_1 + 0x130));
      CVar2 = FUN_00417d54(uVar3);
      SetBkColor((HDC)param_2[1],CVar2);
      UVar1 = FUN_00418a18(*(int *)(param_1 + 0x130));
      param_2[3] = UVar1;
    }
    else {
      UVar1 = CallWindowProcA(*(WNDPROC *)(param_1 + 0x13c),*(HWND *)(param_1 + 0x14c),UVar1,
                              param_2[1],param_2[2]);
      param_2[3] = UVar1;
    }
    if (*param_2 == 0xc) {
      FUN_0042e334(param_1,0xc,param_2[1],param_2[2]);
    }
  }
  return;
}


