
/* ==== FUN_0043a2dc @ 0043a2dc ==== 
 * signature: int __register FUN_0043a2dc(int param_1)
 * body: 0043a2dc-0043a35a
 */

int FUN_0043a2dc(int param_1)

{
  HWND hWnd;
  int iVar1;
  int extraout_ECX;
  undefined2 extraout_var;
  int iVar2;
  
  iVar2 = -0x10;
  hWnd = (HWND)FUN_0042a8b4(*(int **)(param_1 + 4));
  GetWindowLongA(hWnd,iVar2);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = FUN_0043a260(0,CONCAT22(extraout_var,0x15),extraout_ECX,(int)&stack0xfffffffc);
    iVar2 = TForm_get_ClientHeight(*(int **)(param_1 + 4));
    iVar1 = iVar1 + iVar2;
  }
  else {
    iVar1 = FUN_0043a260(1,CONCAT22(extraout_var,0x14),extraout_ECX,(int)&stack0xfffffffc);
    iVar2 = TForm_get_ClientWidth(*(int **)(param_1 + 4));
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


