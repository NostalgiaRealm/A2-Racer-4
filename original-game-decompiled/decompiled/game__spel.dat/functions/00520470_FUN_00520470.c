
/* ==== FUN_00520470 @ 00520470 ==== 
 * signature: undefined __fastcall FUN_00520470(int param_1)
 * body: 00520470-00520565
 */

void __fastcall FUN_00520470(int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  
  if (*(LPVOID *)(param_1 + 0x18) != (LPVOID)0x0) {
    FUN_00559d4e(*(LPVOID *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x1c) != (LPVOID)0x0) {
    FUN_00559d4e(*(LPVOID *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  while (piVar1 != (int *)0x0) {
    pvVar2 = (LPVOID)piVar1[2];
    if (pvVar2 != (LPVOID)0x0) {
      FUN_0051ed40();
      FUN_0054b339(pvVar2);
    }
    pvVar2 = (LPVOID)piVar1[3];
    piVar1[2] = 0;
    if (pvVar2 != (LPVOID)0x0) {
      FUN_0051ed40();
      FUN_0054b339(pvVar2);
    }
    piVar1[3] = 0;
    if ((int *)piVar1[1] == (int *)0x0) {
      *(int *)(param_1 + 8) = *piVar1;
    }
    else {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    *piVar1 = -1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (piVar1 != (int *)0x0) {
      FUN_0051ed40();
      FUN_0054b339(piVar1);
    }
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  while (piVar1 != (int *)0x0) {
    if ((int *)piVar1[1] == (int *)0x0) {
      *(int *)(param_1 + 0x10) = *piVar1;
    }
    else {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    *piVar1 = -1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    FUN_0054b339(piVar1);
    piVar1 = *(int **)(param_1 + 0x10);
  }
  return;
}


