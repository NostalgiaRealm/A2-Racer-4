
/* ==== TWinControl.vmt_094 @ 00431bdc ==== 
 * signature: undefined __register TWinControl.vmt_094(int param_1, undefined4 * param_2)
 * body: 00431bdc-00431c1c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_094(int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  
  pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),(LPCSTR)*param_2,param_2[1],
                           param_2[3],param_2[4],param_2[5],param_2[6],(HWND)param_2[7],(HMENU)0x0,
                           (HINSTANCE)param_2[0xd],(LPVOID)param_2[8]);
  *(HWND *)(param_1 + 0x14c) = pHVar1;
  return;
}


