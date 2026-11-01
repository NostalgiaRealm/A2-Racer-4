
/* ==== FUN_005101c0 @ 005101c0 ==== 
 * signature: undefined __fastcall FUN_005101c0(undefined4 * param_1)
 * body: 005101c0-00510281
 */

void __fastcall FUN_005101c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  pcStack_8 = FUN_00573d10;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00578aa0;
  param_1[5] = &PTR_FUN_00578a98;
  local_4 = 3;
  uVar3 = (uint)*(ushort *)((int)param_1 + 0x3a);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    piVar1 = *(int **)(param_1[0xf] + uVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
  }
  (*(code *)**(undefined4 **)param_1[2])(param_1);
  puVar2 = (undefined4 *)param_1[0xf];
  if (puVar2 != param_1 + 0x10) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar2);
      param_1[0xf] = 0;
    }
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,1);
  FUN_005586c5(param_1 + 6,0x10,2,FUN_00510060);
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 5)) = &PTR_FUN_005788a0;
  *param_1 = &PTR_FUN_00578ab4;
  ExceptionList = param_1;
  return;
}


