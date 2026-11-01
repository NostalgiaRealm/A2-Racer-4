
/* ==== FUN_004863c8 @ 004863c8 ==== 
 * signature: int __register FUN_004863c8(int * param_1, undefined4 * param_2)
 * body: 004863c8-00486457
 */

int FUN_004863c8(int *param_1,undefined4 *param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *param_2;
  local_18 = param_2[1];
  iVar2 = 0;
  if ((char)param_1[0x51] != '\0') {
    lParam = &local_1c;
    wParam = 0;
    Msg = 0x130d;
    hWnd = (HWND)FUN_004349e0(param_1);
    LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
    if (-1 < LVar1) {
      iVar3 = 0;
      if (-1 < LVar1) {
        iVar4 = LVar1 + 1;
        do {
          iVar3 = FUN_00485c54((int)param_1,iVar3,'\x01','\x01');
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar3 != 0) {
        iVar4 = FUN_004317bc(iVar3);
        if (0 < iVar4) {
          iVar2 = FUN_00431780(iVar3,0);
          if (param_1 != *(int **)(iVar2 + 0x90)) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  return iVar2;
}


