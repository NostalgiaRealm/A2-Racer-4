
/* ==== FUN_00500bd0 @ 00500bd0 ==== 
 * signature: undefined __fastcall FUN_00500bd0(int * param_1)
 * body: 00500bd0-00500d00
 */

void __fastcall FUN_00500bd0(int *param_1)

{
  LPVOID pvVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_005736b9;
  local_4 = 1;
  uVar5 = (uint)*(ushort *)((int)param_1 + 10);
  ppvVar4 = &pvStack_c;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar4, uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    (**(code **)(**(int **)(param_1[3] + uVar5 * 4) + 8))(param_1);
    ppvVar4 = ExceptionList;
  }
  *(undefined4 *)(*param_1 + 0x1c) = 0;
  pvVar1 = (LPVOID)param_1[0xc];
  if (pvVar1 != (LPVOID)0x0) {
    FUN_00501470((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  pvVar1 = (LPVOID)param_1[0xb];
  param_1[0xc] = 0;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_00501470((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  param_1[0xb] = 0;
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))(1);
  }
  param_1[10] = 0;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(1);
  }
  piVar3 = param_1 + 4;
  param_1[0xd] = 0;
  *piVar3 = (int)&PTR_FUN_005783f0;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar5 = (uint)*(ushort *)((int)param_1 + 0x22);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    (**(code **)(**(int **)(param_1[9] + uVar5 * 4) + 8))(piVar3);
  }
  piVar2 = (int *)param_1[9];
  if (piVar2 != param_1 + 10) {
    if (piVar2 != (int *)0x0) {
      FUN_00559d4e(piVar2);
      param_1[9] = 0;
    }
    *(undefined2 *)(param_1 + 8) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  local_4 = local_4 & 0xffffff00;
  *piVar3 = (int)&PTR_FUN_005783f8;
  FUN_00501140(piVar3);
  piVar3 = (int *)param_1[3];
  if (piVar3 != param_1 + 4) {
    if (piVar3 != (int *)0x0) {
      FUN_00559d4e(piVar3);
      param_1[3] = 0;
    }
    *(undefined2 *)(param_1 + 2) = 0;
  }
  *(undefined2 *)((int)param_1 + 10) = 0;
  ExceptionList = pvStack_c;
  return;
}


