
/* ==== TMainMenu.vmt_038 @ 004367f0 ==== 
 * signature: undefined __register TMainMenu.vmt_038(int * param_1, undefined4 param_2, int param_3, undefined1 param_4)
 * body: 004367f0-00436847
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMainMenu_vmt_038(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (param_1[0xb] != 0) {
    uVar1 = FUN_00436174(param_1);
    if (param_3 == 0) {
      SendMessageA((HWND)param_1[0xb],0xb015,0,0);
    }
    if ((char)uVar1 != '\0') {
      DrawMenuBar((HWND)param_1[0xb]);
    }
  }
  TMenu_vmt_038(param_1,param_2,param_3,param_4);
  return;
}


