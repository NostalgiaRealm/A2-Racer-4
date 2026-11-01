
/* ==== FUN_004ddf40 @ 004ddf40 ==== 
 * signature: undefined4 * __fastcall FUN_004ddf40(int param_1)
 * body: 004ddf40-004ddfba
 */

undefined4 * __fastcall FUN_004ddf40(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570d73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x14);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *puVar1 = &PTR_FUN_00577b5c;
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    *puVar1 = &PTR_FUN_00577a44;
    local_4 = 1;
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
    puVar1[4] = uVar2;
    *puVar1 = &PTR_FUN_00577bd4;
    puVar3 = puVar1;
  }
  ExceptionList = local_c;
  return puVar3;
}


