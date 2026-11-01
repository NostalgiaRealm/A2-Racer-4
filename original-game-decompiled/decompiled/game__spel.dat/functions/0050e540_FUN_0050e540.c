
/* ==== FUN_0050e540 @ 0050e540 ==== 
 * signature: undefined __fastcall FUN_0050e540(int * param_1)
 * body: 0050e540-0050e6e3
 */

void __fastcall FUN_0050e540(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573c24;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_005789f0;
  local_4 = 2;
  FUN_005000f0(param_1,1);
  piVar2 = (int *)param_1[0x26];
  if (piVar2 != (int *)0x0) {
    FUN_0050e450(piVar2);
    FUN_0054b339(piVar2);
  }
  param_1[0x26] = 0;
  iVar1 = 0;
  if (*(short *)((int)param_1 + 0x9e) != 0) {
    do {
      piVar2 = *(int **)(param_1[0x28] + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        FUN_0050e450(piVar2);
        FUN_0054b339(piVar2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)((int)param_1 + 0x9e));
  }
  iVar1 = 0;
  if (*(short *)((int)param_1 + 0x9e) != 0) {
    piVar2 = param_1 + 0x11;
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x18))(1);
      }
      *piVar2 = 0;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)((int)param_1 + 0x9e));
  }
  piVar2 = (int *)param_1[0x28];
  if (piVar2 != param_1 + 0x29) {
    if (piVar2 != (int *)0x0) {
      FUN_00559d4e(piVar2);
      param_1[0x28] = 0;
    }
    *(undefined2 *)(param_1 + 0x27) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  if ((LPVOID)param_1[6] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[6]);
    param_1[6] = 0;
  }
  if ((LPVOID)param_1[8] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[8]);
    param_1[8] = 0;
  }
  if ((LPVOID)param_1[7] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[7]);
    param_1[7] = 0;
  }
  piVar2 = (int *)param_1[0x28];
  if (piVar2 != param_1 + 0x29) {
    if (piVar2 != (int *)0x0) {
      FUN_00559d4e(piVar2);
      param_1[0x28] = 0;
    }
    *(undefined2 *)(param_1 + 0x27) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  piVar2 = (int *)param_1[0x25];
  if (piVar2 != param_1 + 0x26) {
    if (piVar2 != (int *)0x0) {
      FUN_00559d4e(piVar2);
      param_1[0x25] = 0;
    }
    *(undefined2 *)(param_1 + 0x24) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  *param_1 = (int)&PTR_FUN_005783a8;
  ExceptionList = pvStack_c;
  return;
}


