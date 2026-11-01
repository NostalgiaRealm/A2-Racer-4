
/* ==== FUN_004cd560 @ 004cd560 ==== 
 * signature: undefined4 __stdcall FUN_004cd560(void)
 * body: 004cd560-004cd5d6
 */

undefined4 FUN_004cd560(void)

{
  int iVar1;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (local_1c.message == 0x12) {
      if (DAT_00740e04 == 0) {
        return 1;
      }
      (*DAT_00740df0)();
    }
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  } while( true );
}


