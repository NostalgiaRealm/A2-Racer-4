
/* ==== FUN_0042c320 @ 0042c320 ==== 
 * signature: undefined1 __register FUN_0042c320(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0042c320-0042c4b7
 */

undefined1 FUN_0042c320(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND pHVar1;
  int *piVar2;
  DWORD dwThreadId;
  undefined4 uVar3;
  BOOL BVar4;
  int *piVar5;
  code *lpfn;
  RECT local_40;
  tagRECT local_30;
  int local_20;
  HWND local_1c;
  HWND local_18;
  undefined4 local_14;
  undefined4 local_10;
  char local_c;
  undefined1 local_5;
  
  local_5 = 1;
  local_18 = FUN_0042c724((POINT *)(param_4 + -0xc));
  pHVar1 = GetWindow(local_18,4);
  if (pHVar1 != *(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24)) {
    piVar2 = FUN_0042b94c(local_18);
    if (piVar2 == (int *)0x0) {
      return local_5;
    }
    do {
      piVar5 = piVar2;
      piVar2 = (int *)piVar5[9];
    } while (piVar2 != (int *)0x0);
    local_18 = (HWND)FUN_004349e0(piVar5);
  }
  piVar2 = param_1;
  if (local_18 != (HWND)0x0) {
    do {
      piVar5 = piVar2;
      piVar2 = (int *)piVar5[9];
    } while (piVar2 != (int *)0x0);
    local_1c = (HWND)FUN_004349e0(piVar5);
    if (local_1c != local_18) {
      piVar2 = *(int **)(*(int *)(param_4 + -0x10) + 0x24);
      if (piVar2 == (int *)0x0) {
        uVar3 = FUN_00403114(*(int **)(param_4 + -0x10),(int)&PTR_TWinControl_vmt_000_0042ac0c);
        if ((char)uVar3 == '\0') {
          local_20 = 0;
        }
        else {
          local_20 = FUN_004349e0(*(int **)(param_4 + -0x10));
        }
      }
      else {
        do {
          piVar5 = piVar2;
          piVar2 = (int *)piVar5[9];
        } while (piVar2 != (int *)0x0);
        local_20 = FUN_004349e0(piVar5);
      }
      local_c = '\0';
      local_14 = *(undefined4 *)(param_4 + -0xc);
      local_10 = *(undefined4 *)(param_4 + -8);
      piVar2 = &local_20;
      lpfn = FUN_0042c2b4;
      dwThreadId = GetCurrentThreadId();
      EnumThreadWindows(dwThreadId,lpfn,(LPARAM)piVar2);
      if (local_c != '\0') {
        GetWindowRect(local_18,&local_30);
        FUN_00403178(param_1,*(undefined4 *)(param_4 + -0x10),&local_40);
        uVar3 = FUN_00403114(DAT_004ac760,(int)FUN_00429c24);
        if (((((char)uVar3 == '\0') || (*(int *)(DAT_004ac760[0xe] + 0x90) == 0)) ||
            (pHVar1 = (HWND)FUN_004349e0(*(int **)(DAT_004ac760[0xe] + 0x90)), pHVar1 != local_18))
           && (BVar4 = IntersectRect(&local_30,&local_30,&local_40), BVar4 != 0)) {
          local_5 = 0;
        }
      }
    }
  }
  return local_5;
}


