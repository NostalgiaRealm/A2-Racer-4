
/* ==== FUN_00401250 @ 00401250 ==== 
 * signature: undefined4 __stdcall FUN_00401250(HINSTANCE param_1, int param_2, undefined4 param_3, int param_4)
 * body: 00401250-00401437
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401250(HINSTANCE param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  ATOM AVar2;
  int iVar3;
  int nWidth;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  HWND hWndParent;
  HMENU hMenu;
  LPVOID lpParam;
  WNDCLASSEXA local_b0;
  tagMSG local_80;
  char local_64 [100];
  
  bVar7 = false;
  _DAT_00407ab4 = param_1;
  if (param_2 == 0) {
    local_b0.cbSize = 0x30;
    local_b0.lpszClassName = s_MOTOR_00407034;
    local_b0.hInstance = param_1;
    local_b0.lpfnWndProc = FUN_00401440;
    local_b0.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_b0.hIcon = LoadIconA(param_1,(LPCSTR)0x7f00);
    local_b0.hIconSm = LoadIconA(param_1,(LPCSTR)0x7f00);
    local_b0.lpszMenuName = (LPCSTR)0x0;
    local_b0.hbrBackground = GetStockObject(4);
    local_b0.style = 0;
    local_b0.cbClsExtra = 0;
    local_b0.cbWndExtra = 0;
    AVar2 = RegisterClassExA(&local_b0);
    if (AVar2 == 0) {
      MessageBoxA((HWND)0x0,s_WinMain____RegisterClass___faile_004071cc,s_Err___7_CCWINMAP_004071f0,
                  0x30);
    }
    else {
      lpParam = (LPVOID)0x0;
      hMenu = (HMENU)0x0;
      hWndParent = (HWND)0x0;
      iVar3 = GetSystemMetrics(1);
      nWidth = GetSystemMetrics(0);
      DAT_00407ab0 = CreateWindowExA(0x40000,s_MOTOR_00407034,&DAT_00407f40,0x80000000,0,0,nWidth,
                                     iVar3,hWndParent,hMenu,param_1,lpParam);
      if (DAT_00407ab0 != (HWND)0x0) {
        ShowWindow(DAT_00407ab0,param_4);
        _strncpy(local_64,s__FirstTime_004071c0,99);
        do {
          while( true ) {
            do {
              while( true ) {
                BVar4 = PeekMessageA(&local_80,(HWND)0x0,0,0,1);
                if (BVar4 == 0) break;
                if (local_80.message == 0x12) {
                  return local_80.wParam;
                }
                TranslateMessage(&local_80);
                DispatchMessageA(&local_80);
              }
            } while (bVar7);
            iVar3 = FUN_00401130((uint *)s_menu_exe_004071b4,local_64);
            if (iVar3 != 0x28) break;
            FUN_00401130((uint *)s_spel_dat_004071a8,&DAT_00407f40);
            _strncpy(local_64,s__Default_0040719c,99);
          }
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_00407f40;
          do {
            pcVar9 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar9 + -uVar5;
          pcVar9 = local_64;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          SendMessageA(DAT_00407ab0,0x10,0,0);
          bVar7 = true;
        } while( true );
      }
    }
  }
  return 0;
}


