
/* ==== FUN_0050c860 @ 0050c860 ==== 
 * signature: undefined __fastcall FUN_0050c860(undefined4 * param_1)
 * body: 0050c860-0050c914
 */

void __fastcall FUN_0050c860(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573a56;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005788f0;
  local_4 = 1;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))(1);
  }
  param_1[2] = 0;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))(1);
  }
  param_1[3] = 0;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  param_1[9] = 0;
  puVar1 = (undefined4 *)param_1[7];
  if (puVar1 != param_1 + 8) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[7] = 0;
    }
    *(undefined2 *)(param_1 + 6) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  puVar1 = (undefined4 *)param_1[5];
  if (puVar1 != param_1 + 6) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[5] = 0;
    }
    *(undefined2 *)(param_1 + 4) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  ExceptionList = pvStack_c;
  return;
}


