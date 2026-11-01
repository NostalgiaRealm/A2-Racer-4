
/* ==== FUN_004cd660 @ 004cd660 ==== 
 * signature: undefined4 __stdcall FUN_004cd660(void)
 * body: 004cd660-004cd6ae
 */

undefined4 FUN_004cd660(void)

{
  BOOL BVar1;
  tagMSG local_1c;
  
  BVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  if (BVar1 != 0) {
    if (local_1c.message == 0x12) {
      FUN_00559c79(0);
    }
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    return 0;
  }
  FUN_004cece0();
  return 0;
}


