
/* ==== FUN_00429324 @ 00429324 ==== 
 * signature: undefined __register FUN_00429324(int param_1)
 * body: 00429324-0042937c
 */

void FUN_00429324(int param_1)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(*(int *)PTR_DAT_004ab8ac + 0x24);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      pHVar2 = FUN_0044463c();
      *(HWND *)(param_1 + 8) = pHVar2;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    BVar3 = OpenClipboard(*(HWND *)(param_1 + 8));
    if (BVar3 == 0) {
      piVar4 = FUN_0040b694((int *)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab660);
      FUN_004036f4(piVar4);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


