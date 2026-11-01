
/* ==== FUN_00521c80 @ 00521c80 ==== 
 * signature: undefined __fastcall FUN_00521c80(int * param_1)
 * body: 00521c80-00521daa
 */

void __fastcall FUN_00521c80(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  void **ppvVar3;
  int iVar4;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00574126;
  pvStack_c = ExceptionList;
  iVar4 = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  if (0 < param_1[7]) {
    do {
      FUN_0051fe50(*(int *)(*(int *)(param_1[0xb] + 4) + iVar4 * 4));
      iVar4 = iVar4 + 1;
      ppvVar3 = ExceptionList;
    } while (iVar4 < param_1[7]);
  }
  ExceptionList = ppvVar3;
  piVar1 = (int *)param_1[2];
  if (piVar1 != param_1 + 3) {
    if (piVar1 != (int *)0x0) {
      FUN_00559d4e(piVar1);
      param_1[2] = 0;
    }
    *(undefined2 *)(param_1 + 1) = 0;
  }
  *(undefined2 *)((int)param_1 + 6) = 0;
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))(1);
  }
  pvVar2 = (LPVOID)param_1[8];
  *param_1 = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_005018f0((int)pvVar2);
    FUN_0054b339(pvVar2);
  }
  iVar4 = 0;
  param_1[8] = 0;
  if (0 < param_1[7]) {
    do {
      FUN_0054b339(*(LPVOID *)(param_1[4] + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[7]);
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != param_1 + 5) {
    if (piVar1 != (int *)0x0) {
      FUN_00559d4e(piVar1);
      param_1[4] = 0;
    }
    *(undefined2 *)(param_1 + 3) = 0;
  }
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  piVar1 = (int *)param_1[4];
  if (piVar1 != param_1 + 5) {
    if (piVar1 != (int *)0x0) {
      FUN_00559d4e(piVar1);
      param_1[4] = 0;
    }
    *(undefined2 *)(param_1 + 3) = 0;
  }
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  piVar1 = (int *)param_1[2];
  if (piVar1 != param_1 + 3) {
    if (piVar1 != (int *)0x0) {
      FUN_00559d4e(piVar1);
      param_1[2] = 0;
    }
    *(undefined2 *)(param_1 + 1) = 0;
  }
  *(undefined2 *)((int)param_1 + 6) = 0;
  ExceptionList = pvStack_c;
  return;
}


