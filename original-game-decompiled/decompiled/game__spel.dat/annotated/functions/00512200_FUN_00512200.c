
/* ==== FUN_00512200 @ 00512200 ==== 
 * signature: undefined __fastcall FUN_00512200(int param_1)
 * body: 00512200-0051229b
 */

void __fastcall FUN_00512200(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x34);
  if (pvVar1 != (LPVOID)(param_1 + 0x38)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined2 *)(param_1 + 0x30) = 0;
  }
  *(undefined2 *)(param_1 + 0x32) = 0;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x96) != 0) {
    do {
      FUN_0054b339(*(LPVOID *)(*(int *)(param_1 + 0x98) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x96));
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x98);
  if (pvVar1 != (LPVOID)(param_1 + 0x9c)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    *(undefined2 *)(param_1 + 0x94) = 0;
  }
  *(undefined2 *)(param_1 + 0x96) = 0;
  if (*(LPVOID *)(param_1 + 0x1c) != (LPVOID)0x0) {
    FUN_00559d4e(*(LPVOID *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


