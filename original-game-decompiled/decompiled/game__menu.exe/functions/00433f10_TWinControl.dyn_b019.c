
/* ==== TWinControl.dyn_b019 @ 00433f10 ==== 
 * signature: undefined __register TWinControl.dyn_b019(int param_1)
 * body: 00433f10-00433f37
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b019(int param_1)

{
  SetWindowPos(*(HWND *)(param_1 + 0x14c),(HWND)0x0,0,0,0,0,
               (uint)*(ushort *)(&DAT_004aa7bc + (uint)*(byte *)(param_1 + 0x168) * 2));
  return;
}


