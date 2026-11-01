
/* ==== FUN_00472cb0 @ 00472cb0 ==== 
 * signature: undefined __register FUN_00472cb0(int param_1)
 * body: 00472cb0-00472d08
 */

void FUN_00472cb0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  piVar2 = *(int **)(param_1 + 4);
  uVar1 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  if ((char)uVar1 != '\0') {
    lParam = 0;
    wParam = 0;
    Msg = 0x85;
    piVar2 = (int *)FUN_0040312c(piVar2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
    hWnd = (HWND)FUN_004349e0(piVar2);
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  FUN_0042f720(*(int *)(param_1 + 4),0x1401,0,0);
  return;
}


