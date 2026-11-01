
/* ==== FUN_0042e110 @ 0042e110 ==== 
 * signature: undefined __register FUN_0042e110(int param_1)
 * body: 0042e110-0042e187
 */

void FUN_0042e110(int param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  
  FUN_0042ea0c(DAT_0044773c,(HWND)0x0);
  FUN_0042e1c0(param_1);
  ReleaseDC(*(HWND *)(param_1 + 0x5c),*(HDC *)(param_1 + 0x58));
  iVar1 = *(int *)(param_1 + 0x60);
  if (*(char *)(*(int *)(iVar1 + 0x14) + 0x10) == '\x01') {
    iVar2 = (int)*(uint *)(param_1 + 0xc) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
    }
    *(int *)(iVar1 + 0x20) = iVar2 + *(int *)(param_1 + 0x54);
  }
  else {
    iVar2 = (int)*(uint *)(param_1 + 0xc) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
    }
    *(int *)(iVar1 + 0x20) = iVar2 + *(int *)(param_1 + 0x50);
  }
  FUN_0042e050(param_1,*(int *)(*(int *)(param_1 + 0x60) + 0x14),extraout_ECX);
  FUN_0042ca7c(param_1,*(int *)(*(int *)(param_1 + 0x60) + 0x14),extraout_ECX_00);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


