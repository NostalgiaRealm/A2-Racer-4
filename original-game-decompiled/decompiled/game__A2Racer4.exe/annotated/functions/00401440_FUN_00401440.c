
/* ==== FUN_00401440 @ 00401440 ==== 
 * signature: LRESULT __stdcall FUN_00401440(HWND param_1, uint param_2, WPARAM param_3, LPARAM param_4)
 * body: 00401440-004014d6
 */

LRESULT FUN_00401440(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  tagPAINTSTRUCT local_40;
  
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      BeginPaint(param_1,&local_40);
      EndPaint(param_1,&local_40);
      return 0;
    }
    if (param_2 == 1) {
      return 0;
    }
    if (param_2 == 2) {
      PostQuitMessage(0);
      return 0;
    }
  }
  else {
    if (param_2 == 0x10) {
      DestroyWindow(param_1);
      return 0;
    }
    if (param_2 == 0x200) {
      SetCursor((HCURSOR)0x0);
      return 0;
    }
  }
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}


