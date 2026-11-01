
/* ==== FUN_004dd440 @ 004dd440 ==== 
 * signature: undefined4 * __fastcall FUN_004dd440(int param_1)
 * body: 004dd440-004dd4b3
 */

undefined4 * __fastcall FUN_004dd440(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570c63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *puVar1 = &PTR_FUN_00577b5c;
    puVar1[1] = uVar2;
    local_4 = 1;
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
    puVar1[2] = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    puVar1[3] = uVar2;
    *puVar1 = &PTR_FUN_00577af8;
    puVar3 = puVar1;
  }
  ExceptionList = local_c;
  return puVar3;
}


