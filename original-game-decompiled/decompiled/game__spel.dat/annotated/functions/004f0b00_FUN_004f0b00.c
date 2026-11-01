
/* ==== FUN_004f0b00 @ 004f0b00 ==== 
 * signature: undefined4 * __fastcall FUN_004f0b00(undefined4 * param_1)
 * body: 004f0b00-004f0b9d
 */

undefined4 * __fastcall FUN_004f0b00(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572c19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = &PTR_FUN_00578298;
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
  param_1[2] = puVar1;
  *(undefined1 *)(param_1 + 0x24) = local_11;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  local_4 = 1;
  *param_1 = &PTR_FUN_00578280;
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_004f1240(param_1,0);
  ExceptionList = local_c;
  return param_1;
}


