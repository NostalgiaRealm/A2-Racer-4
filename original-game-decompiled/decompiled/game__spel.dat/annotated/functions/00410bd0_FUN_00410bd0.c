
/* ==== FUN_00410bd0 @ 00410bd0 ==== 
 * signature: undefined __cdecl FUN_00410bd0(undefined1 * param_1, undefined1 * param_2)
 * body: 00410bd0-00410cc2
 */

void __cdecl FUN_00410bd0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00569a17;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_004093c0(param_1 + 4,param_2 + 4,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    local_4._0_1_ = 1;
    *(undefined ***)(param_1 + 0x18) = &PTR_FUN_00576408;
    puVar1 = operator_new(0x10);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar1 + 4) = 0;
      *puVar1 = param_1._0_1_;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
    }
    *(undefined1 **)(param_1 + 0x1c) = puVar1;
    FUN_00411a00((int)puVar1,*(int *)(param_2 + 0x1c));
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined ***)(param_1 + 0x20) = &PTR_FUN_005763f8;
    puVar1 = operator_new(0x10);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar1 + 4) = 0;
      *puVar1 = param_1._0_1_;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
    }
    *(undefined1 **)(param_1 + 0x24) = puVar1;
    FUN_00411c80(puVar1,*(int *)(param_2 + 0x24));
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  ExceptionList = local_c;
  return;
}


