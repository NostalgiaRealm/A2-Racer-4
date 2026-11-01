
/* ==== TMemoStrings.vmt_00c @ 00426d90 ==== 
 * signature: undefined __register TMemoStrings.vmt_00c(int param_1, WPARAM param_2, int * param_3)
 * body: 00426d90-00426dd2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMemoStrings_vmt_00c(int param_1,WPARAM param_2,int *param_3)

{
  HWND hWnd;
  uint uVar1;
  UINT Msg;
  undefined2 *lParam;
  undefined2 local_100c;
  undefined2 uStack_100a;
  
  lParam = &local_100c;
  _local_100c = CONCAT22((short)((uint)param_1 >> 0x10),0x1000);
  Msg = 0xc4;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  uVar1 = SendMessageA(hWnd,Msg,param_2,(LPARAM)lParam);
  FUN_00403d44(param_3,(undefined4 *)&local_100c,uVar1);
  return;
}


