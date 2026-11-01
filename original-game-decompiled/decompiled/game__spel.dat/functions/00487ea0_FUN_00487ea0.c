
/* ==== FUN_00487ea0 @ 00487ea0 ==== 
 * signature: undefined4 * __fastcall FUN_00487ea0(undefined4 * param_1)
 * body: 00487ea0-00487f14
 */

undefined4 * __fastcall FUN_00487ea0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00483ed0(param_1);
  local_4 = 0;
  param_1[0x23] = &PTR_FUN_00576e98;
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
  param_1[0x24] = puVar1;
  param_1[0x25] = 0;
  ExceptionList = local_c;
  return param_1;
}


