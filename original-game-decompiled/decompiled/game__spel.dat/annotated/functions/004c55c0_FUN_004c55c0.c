
/* ==== FUN_004c55c0 @ 004c55c0 ==== 
 * signature: undefined4 __cdecl FUN_004c55c0(HINSTANCE param_1, int param_2, LPCSTR param_3, LPCSTR param_4)
 * body: 004c55c0-004c57c7;004c57cb-004c581d;004c5821-004c5859;004c585d-004c58eb;004c58ef-004c592c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c57c8-004c57ca 004c581e-004c5820 004c585a-004c585c 004c58ec-004c58ee
 */

undefined4 __cdecl FUN_004c55c0(HINSTANCE param_1,int param_2,LPCSTR param_3,LPCSTR param_4)

{
  char cVar1;
  int nHeight;
  int iVar2;
  DWORD dwExStyle;
  DWORD dwStyle;
  int local_3c;
  tagRECT local_38;
  WNDCLASSA local_28;
  
  FUN_00559f8f(&local_3c);
  FUN_0055861b(local_3c);
  if (DAT_007408c8 == 0) {
    local_28.style = 3;
    local_28.lpfnWndProc = FUN_004cd6b0;
    local_28.cbClsExtra = 0;
    local_28.cbWndExtra = 0;
    local_28.hInstance = param_1;
    local_28.hIcon = LoadIconA(param_1,&DAT_00007f00);
    local_28.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
    local_28.hbrBackground = (HBRUSH)0x0;
    local_28.lpszMenuName = (LPCSTR)0x0;
    local_28.lpszClassName = param_3;
    RegisterClassA(&local_28);
    cVar1 = FUN_004c3f70();
    if (cVar1 == '\0') {
      dwExStyle = 0x40000;
      dwStyle = 0x80000000;
      iVar2 = GetSystemMetrics(0);
      nHeight = GetSystemMetrics(1);
    }
    else {
      dwExStyle = 0x300;
      dwStyle = 0xc00000;
      DAT_005b37a4 = 8;
      iVar2 = DAT_005b3798;
      nHeight = DAT_005b379c;
    }
    FUN_004c3fa0((byte *)s_____init_xvgalib_______version___005b46d8);
    DAT_007408a4 = CreateWindowExA(dwExStyle,param_3,param_4,dwStyle,0,0,iVar2,nHeight,(HWND)0x0,
                                   (HMENU)0x0,param_1,(LPVOID)0x0);
    if (DAT_007408a4 == (HWND)0x0) {
      FUN_004c3fa0((byte *)s_failure_to_make_window_005b46c0);
      return 0;
    }
    GetClientRect(DAT_007408a4,&local_38);
    MoveWindow(DAT_007408a4,local_38.left,local_38.top,(iVar2 * 2 - local_38.right) + local_38.left,
               (nHeight * 2 - local_38.bottom) + local_38.top,1);
    FUN_004c3fa0((byte *)s_window_defined_005b46b0);
    ShowWindow(DAT_007408a4,param_2);
    UpdateWindow(DAT_007408a4);
    DAT_007408c8 = 1;
  }
  FUN_004c3fa0((byte *)s_starting_direct_draw_driver_sear_005b468c);
  FUN_004cd150();
  FUN_004c3fa0((byte *)s_Finished_search_005b4678);
  if (DAT_007408cc == 0) {
    FUN_004c3fa0((byte *)s_create_direct_draw_object_005b465c);
    iVar2 = FUN_004cd170(DAT_005b37ac);
    iVar2 = DirectDrawCreate(iVar2,&DAT_0074088c,0);
    if (iVar2 != 0) {
      hardware(iVar2);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____could_not_create_dd_obj_005b4630);
    }
    DAT_007408cc = 1;
  }
  if (DAT_007408dc == 0) {
    FUN_004c3fa0((byte *)s_set_cooperative_level_005b4618);
    iVar2 = (**(code **)(*DAT_0074088c + 0x50))(DAT_0074088c,DAT_007408a4,DAT_005b37a4);
    if (iVar2 != 0) {
      hardware(iVar2);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____could_not_set_cooperati_005b45e8);
    }
    DAT_007408dc = 1;
  }
  iVar2 = (**(code **)*DAT_0074088c)(DAT_0074088c,&DAT_00578d70,&DAT_00740894);
  if (iVar2 == 0) {
    FUN_004cd2d0();
    iVar2 = FUN_004cd330(DAT_005b3794);
    if (iVar2 == 0) {
      FUN_004c3fa0((byte *)s_could_not_find_mode_005b459c);
    }
    FUN_004c3fa0((byte *)s_set_display_mode__dx_dx_d_005b4580);
    cVar1 = FUN_004c3f70();
    if ((cVar1 == '\0') &&
       (iVar2 = (**(code **)(*DAT_00740894 + 0x54))
                          (DAT_00740894,DAT_005b3798,DAT_005b379c,DAT_005b37a0,0,0), iVar2 != 0)) {
      hardware(iVar2);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____could_not_set_display_m_005b4554);
    }
    FUN_004c8800(0,0,DAT_005b3798,DAT_005b379c);
    FUN_004c4fa0();
    FUN_004c3fa0((byte *)s_init_input_005b4548);
    FUN_004c3fa0((byte *)s_system_info_005b4538);
    FUN_004ccc10();
    return 1;
  }
  hardware(iVar2);
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____could_not_query_interfa_005b45b4);
}


