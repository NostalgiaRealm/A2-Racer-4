
/* ==== FUN_0046fecc @ 0046fecc ==== 
 * signature: undefined __register FUN_0046fecc(int param_1)
 * body: 0046fecc-0046ff58
 */

void FUN_0046fecc(int param_1)

{
  HWND hWnd;
  int *piVar1;
  LONG LVar2;
  
  if ((*(int *)(param_1 + 0x214) != 0) && (*(int *)(param_1 + 0x14c) == 0)) {
    hWnd = *(HWND *)(param_1 + 0x214);
    (**(code **)(hWnd->unused + 0xc))();
    if (hWnd == (HWND)0x0) {
      piVar1 = FUN_0040b694((int *)&DAT_0046bfdc,'\x01',(undefined4 *)PTR_PTR_004aba20);
      FUN_004036f4(piVar1);
    }
    *(HWND *)(param_1 + 0x14c) = hWnd;
    LVar2 = GetWindowLongA(hWnd,-4);
    *(LONG *)(param_1 + 0x13c) = LVar2;
    *(int *)PTR_DAT_004ab844 = param_1;
    SetWindowLongA(*(HWND *)(param_1 + 0x14c),-4,0x42b894);
    SendMessageA(*(HWND *)(param_1 + 0x14c),0,0,0);
  }
  return;
}


