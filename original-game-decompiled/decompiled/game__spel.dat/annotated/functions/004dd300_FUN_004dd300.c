
/* ==== FUN_004dd300 @ 004dd300 ==== 
 * signature: undefined4 * __fastcall FUN_004dd300(int param_1)
 * body: 004dd300-004dd373
 */

undefined4 * __fastcall FUN_004dd300(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570c23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    *puVar1 = &PTR_FUN_00577ad0;
    local_4 = 1;
    FUN_004cef20(puVar1 + 2,param_1 + 8);
    puVar1[2] = &PTR_FUN_005778c0;
    *puVar1 = &PTR_FUN_00577aa8;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


