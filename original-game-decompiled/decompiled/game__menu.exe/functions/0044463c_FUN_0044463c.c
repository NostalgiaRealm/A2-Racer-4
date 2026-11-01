
/* ==== FUN_0044463c @ 0044463c ==== 
 * signature: HWND __register FUN_0044463c(void)
 * body: 0044463c-004446e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0044463c(void)

{
  BOOL BVar1;
  HWND hWnd;
  undefined1 *dwNewLong;
  undefined4 in_stack_00000004;
  tagWNDCLASSA local_2c;
  
  _DAT_004aa960 = DAT_004ac4dc;
  BVar1 = GetClassInfoA(DAT_004ac4dc,PTR_s_TPUtilWindow_004aa974,&local_2c);
  if ((BVar1 == 0) || (local_2c.lpfnWndProc != DefWindowProcA)) {
    if (BVar1 != 0) {
      UnregisterClassA(PTR_s_TPUtilWindow_004aa974,DAT_004ac4dc);
    }
    RegisterClassA((WNDCLASSA *)&DAT_004aa950);
  }
  hWnd = CreateWindowExA(0x80,PTR_s_TPUtilWindow_004aa974,"",0x80000000,0,0,0,0,(HWND)0x0,(HMENU)0x0
                         ,DAT_004ac4dc,(LPVOID)0x0);
  if (in_stack_00000004._2_2_ != 0) {
    dwNewLong = FUN_00444580();
    SetWindowLongA(hWnd,-4,(LONG)dwNewLong);
  }
  return hWnd;
}


