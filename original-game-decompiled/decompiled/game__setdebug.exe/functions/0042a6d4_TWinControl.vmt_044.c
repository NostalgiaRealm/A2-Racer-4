
/* ==== TWinControl.vmt_044 @ 0042a6d4 ==== 
 * signature: undefined TWinControl.vmt_044(void)
 * body: 0042a6d4-0042a725
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_044(int *param_1,int *param_2)

{
  HWND pHVar1;
  HDC pHVar2;
  int *piVar3;
  HRGN hrgnClip;
  DWORD flags;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    pHVar2 = GetDC(pHVar1);
  }
  else {
    flags = 0x12;
    hrgnClip = (HRGN)0x0;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    pHVar2 = GetDCEx(pHVar1,hrgnClip,flags);
  }
  if (pHVar2 == (HDC)0x0) {
    piVar3 = FUN_0040a9f4((int *)&DAT_0040d8f0,'\x01',(undefined4 *)PTR_PTR_00446c68);
    FUN_0040346c(piVar3);
  }
  *param_2 = param_1[0x53];
  return;
}


