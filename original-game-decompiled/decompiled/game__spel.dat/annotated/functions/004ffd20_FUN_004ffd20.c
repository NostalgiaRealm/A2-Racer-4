
/* ==== FUN_004ffd20 @ 004ffd20 ==== 
 * signature: undefined __fastcall FUN_004ffd20(int param_1)
 * body: 004ffd20-004ffd77
 */

void __fastcall FUN_004ffd20(int param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x1e);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    pvVar1 = *(LPVOID *)(*(int *)(param_1 + 0x20) + uVar2 * 4);
    if (pvVar1 != (LPVOID)0x0) {
      FUN_004ffd80((int)pvVar1);
      FUN_0054b339(pvVar1);
    }
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x20);
  if (pvVar1 != (LPVOID)(param_1 + 0x24)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  *(undefined2 *)(param_1 + 0x1e) = 0;
  return;
}


