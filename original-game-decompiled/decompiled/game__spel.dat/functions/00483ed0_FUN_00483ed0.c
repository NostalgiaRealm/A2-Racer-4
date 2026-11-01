
/* ==== FUN_00483ed0 @ 00483ed0 ==== 
 * signature: undefined4 * __fastcall FUN_00483ed0(undefined4 * param_1)
 * body: 00483ed0-00483f7b
 */

undefined4 * __fastcall FUN_00483ed0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056cc3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_00576e28;
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
  param_1[3] = puVar1;
  local_4 = 0;
  param_1[4] = &PTR_FUN_00576e18;
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
  param_1[5] = puVar1;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  *(undefined1 *)((int)param_1 + 0x8b) = 1;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_00576e14;
  ExceptionList = local_c;
  return param_1;
}


