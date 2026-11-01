
/* ==== FUN_004f7fb0 @ 004f7fb0 ==== 
 * signature: undefined __fastcall FUN_004f7fb0(int param_1)
 * body: 004f7fb0-004f8030
 */

void __fastcall FUN_004f7fb0(int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  uint uVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0057324b;
  uVar3 = (uint)*(ushort *)(param_1 + 6);
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 8) + uVar3 * 4);
    if (piVar1 != (int *)0x0) {
      FUN_004f7b20(piVar1);
      FUN_0054b339(piVar1);
    }
  }
  pvVar2 = *(LPVOID *)(param_1 + 8);
  if (pvVar2 != (LPVOID)(param_1 + 0xc)) {
    if (pvVar2 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar2);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined2 *)(param_1 + 4) = 0;
  }
  *(undefined2 *)(param_1 + 6) = 0;
  ExceptionList = local_c;
  return;
}


