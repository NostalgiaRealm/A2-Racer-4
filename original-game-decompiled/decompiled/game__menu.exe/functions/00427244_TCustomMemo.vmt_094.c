
/* ==== TCustomMemo.vmt_094 @ 00427244 ==== 
 * signature: undefined __register TCustomMemo.vmt_094(int param_1, LPARAM * param_2)
 * body: 00427244-00427310
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomMemo_vmt_094(int param_1,LPARAM *param_2)

{
  HWND pHVar1;
  
  if (((PTR_DAT_004aba14[8] == '\0') || (*(int *)PTR_DAT_004aba10 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),(LPCSTR)FUN_00427314,param_2[1],
                             param_2[3],param_2[4],param_2[5],param_2[6],(HWND)param_2[7],(HMENU)0x0
                             ,DAT_004ac4dc,(LPVOID)param_2[8]);
    *(HWND *)(param_1 + 0x14c) = pHVar1;
  }
  else {
    pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),(LPCSTR)FUN_00427314,
                             param_2[1] & 0xfffff7ff,param_2[3],param_2[4],param_2[5],param_2[6],
                             (HWND)param_2[7],(HMENU)0x0,DAT_004ac4dc,(LPVOID)param_2[8]);
    *(HWND *)(param_1 + 0x14c) = pHVar1;
    if (pHVar1 != (HWND)0x0) {
      SendMessageA(pHVar1,0xcf,1,0);
    }
  }
  SendMessageA(*(HWND *)(param_1 + 0x14c),0xc,0,*param_2);
  return;
}


