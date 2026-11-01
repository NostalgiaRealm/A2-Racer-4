
/* ==== FUN_00510690 @ 00510690 ==== 
 * signature: undefined __fastcall FUN_00510690(int param_1)
 * body: 00510690-005106f1
 */

void __fastcall FUN_00510690(int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x92);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x94) + uVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
  }
  pvVar2 = *(LPVOID *)(param_1 + 0x94);
  if (pvVar2 != (LPVOID)(param_1 + 0x98)) {
    if (pvVar2 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar2);
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    *(undefined2 *)(param_1 + 0x90) = 0;
  }
  *(undefined2 *)(param_1 + 0x92) = 0;
  return;
}


