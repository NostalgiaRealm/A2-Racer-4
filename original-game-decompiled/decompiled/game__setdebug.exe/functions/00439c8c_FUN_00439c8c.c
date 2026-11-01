
/* ==== FUN_00439c8c @ 00439c8c ==== 
 * signature: HWND __register FUN_00439c8c(void)
 * body: 00439c8c-00439d38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00439c8c(void)

{
  BOOL BVar1;
  HWND hWnd;
  undefined1 *dwNewLong;
  undefined4 in_stack_00000004;
  tagWNDCLASSA local_2c;
  
  _DAT_0044688c = DAT_004474d4;
  BVar1 = GetClassInfoA(DAT_004474d4,PTR_s_TPUtilWindow_004468a0,&local_2c);
  if ((BVar1 == 0) || (local_2c.lpfnWndProc != DefWindowProcA)) {
    if (BVar1 != 0) {
      UnregisterClassA(PTR_s_TPUtilWindow_004468a0,DAT_004474d4);
    }
    RegisterClassA((WNDCLASSA *)&DAT_0044687c);
  }
  hWnd = CreateWindowExA(0x80,PTR_s_TPUtilWindow_004468a0,"",0x80000000,0,0,0,0,(HWND)0x0,(HMENU)0x0
                         ,DAT_004474d4,(LPVOID)0x0);
  if (in_stack_00000004._2_2_ != 0) {
    dwNewLong = FUN_00439bd0();
    SetWindowLongA(hWnd,-4,(LONG)dwNewLong);
  }
  return hWnd;
}


