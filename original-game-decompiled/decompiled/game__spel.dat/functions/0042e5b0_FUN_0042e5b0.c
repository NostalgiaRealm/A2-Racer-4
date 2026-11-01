
/* ==== FUN_0042e5b0 @ 0042e5b0 ==== 
 * signature: undefined4 * __fastcall FUN_0042e5b0(undefined4 * param_1)
 * body: 0042e5b0-0042e724
 */

undefined4 * __fastcall FUN_0042e5b0(undefined4 *param_1)

{
  undefined1 *puVar1;
  float10 fVar2;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a302;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[10] = &PTR_FUN_00576644;
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
  param_1[0xb] = puVar1;
  local_4 = 0;
  param_1[0xd] = &PTR_FUN_00576644;
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
  param_1[0xe] = puVar1;
  local_4._0_1_ = 1;
  param_1[0x10] = &PTR_FUN_00576644;
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
  param_1[0x11] = puVar1;
  local_4._0_1_ = 2;
  param_1[0x12] = &PTR_FUN_00576634;
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
  param_1[0x13] = puVar1;
  local_4._0_1_ = 3;
  param_1[0x14] = &PTR_FUN_00576644;
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
  param_1[0x15] = puVar1;
  local_4._0_1_ = 4;
  param_1[0x16] = &PTR_FUN_00576634;
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
  param_1[0x17] = puVar1;
  local_4 = CONCAT31(local_4._1_3_,5);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[5] = 0;
  fVar2 = FUN_004a67f0(0x7128b0);
  param_1[0x18] = (float)fVar2;
  ExceptionList = local_c;
  return param_1;
}


