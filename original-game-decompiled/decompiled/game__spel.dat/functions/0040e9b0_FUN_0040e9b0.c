
/* ==== FUN_0040e9b0 @ 0040e9b0 ==== 
 * signature: undefined1 * __fastcall FUN_0040e9b0(undefined1 * param_1)
 * body: 0040e9b0-0040ea85
 */

undefined1 * __fastcall FUN_0040e9b0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005698d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[4] = local_11;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_4 = 0;
  *(undefined ***)(param_1 + 0x14) = &PTR_FUN_005763e8;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = local_11;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x1c) = &PTR_FUN_005763d8;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = local_11;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  *(undefined1 **)(param_1 + 0x20) = puVar1;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)(param_1 + 0x24) = &PTR_FUN_005763c8;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = local_11;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  *(undefined1 **)(param_1 + 0x28) = puVar1;
  *param_1 = 0;
  ExceptionList = local_c;
  return param_1;
}


