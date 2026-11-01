
/* ==== FUN_004f88b0 @ 004f88b0 ==== 
 * signature: undefined __fastcall FUN_004f88b0(undefined4 * param_1)
 * body: 004f88b0-004f893d
 */

void __fastcall FUN_004f88b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  pcStack_8 = FUN_00573373;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005783f0;
  local_4 = 1;
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x12);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    (**(code **)(**(int **)(param_1[5] + uVar2 * 4) + 8))(param_1);
  }
  puVar1 = (undefined4 *)param_1[5];
  if (puVar1 != param_1 + 6) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[5] = 0;
    }
    *(undefined2 *)(param_1 + 4) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_005783f8;
  FUN_00501140(param_1);
  ExceptionList = pvStack_c;
  return;
}


