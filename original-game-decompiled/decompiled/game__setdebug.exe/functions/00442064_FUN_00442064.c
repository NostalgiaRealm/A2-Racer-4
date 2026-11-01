
/* ==== FUN_00442064 @ 00442064 ==== 
 * signature: undefined4 __register FUN_00442064(int param_1, undefined4 param_2, uint param_3)
 * body: 00442064-004420cc
 */

undefined4 FUN_00442064(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  undefined3 uVar4;
  undefined4 extraout_ECX;
  uint local_14;
  
  local_14 = param_3 & 0xffffff00;
  iVar2 = param_1;
  if (*(short *)(param_1 + 0x102) != 0) {
    iVar2 = (**(code **)(param_1 + 0x100))(*(undefined4 *)(param_1 + 0x104),param_2,&local_14);
  }
  if ((char)local_14 == '\0') {
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      hWnd = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x38));
      BVar3 = IsWindowEnabled(hWnd);
      if (BVar3 != 0) {
        iVar2 = FUN_00402ef0(*(int **)(param_1 + 0x38),param_2,extraout_ECX);
        if ((char)iVar2 != '\0') goto LAB_004420bf;
      }
    }
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
LAB_004420bf:
    uVar4 = (undefined3)((uint)iVar2 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar4,uVar1);
}


