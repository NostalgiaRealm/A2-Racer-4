
/* ==== TWinControl.vmt_044 @ 004347c8 ==== 
 * signature: undefined TWinControl.vmt_044(void)
 * body: 004347c8-00434819
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
    pHVar1 = (HWND)FUN_004349e0(param_1);
    pHVar2 = GetDC(pHVar1);
  }
  else {
    flags = 0x12;
    hrgnClip = (HRGN)0x0;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    pHVar2 = GetDCEx(pHVar1,hrgnClip,flags);
  }
  if (pHVar2 == (HDC)0x0) {
    piVar3 = FUN_0040b694((int *)&DAT_0040e9b0,'\x01',(undefined4 *)PTR_PTR_004ab88c);
    FUN_004036f4(piVar3);
  }
  *param_2 = param_1[0x53];
  return;
}


