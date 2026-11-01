
/* ==== FUN_00424c10 @ 00424c10 ==== 
 * signature: undefined __register FUN_00424c10(int param_1, char param_2, char param_3)
 * body: 00424c10-00424c99
 */

void FUN_00424c10(int param_1,char param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  HWND hWnd;
  RECT *lpRect;
  int bErase;
  RECT local_18;
  int local_8;
  
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x41) & 4) != 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  local_8 = param_1;
  bVar2 = FUN_0042abb0(*(int *)(param_1 + 0x24));
  if (bVar2) {
    FUN_004241fc(local_8,&local_18.left);
    if (((param_3 == '\0') && ((*(byte *)(*(int *)(local_8 + 0x24) + 0x40) & 0x40) == 0)) &&
       (cVar3 = FUN_00424b84(), cVar3 == '\0')) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    bErase = -(uint)bVar1;
    lpRect = &local_18;
    hWnd = (HWND)FUN_0042a8b4(*(int **)(local_8 + 0x24));
    InvalidateRect(hWnd,lpRect,bErase);
    return;
  }
  return;
}


