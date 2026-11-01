
/* ==== FUN_004d70f0 @ 004d70f0 ==== 
 * signature: undefined __cdecl FUN_004d70f0(undefined1 * param_1, undefined1 * param_2)
 * body: 004d70f0-004d71a1
 */

void __cdecl FUN_004d70f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570234;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_004093c0(param_1,param_2,0,0xffffffff);
    local_4._0_1_ = 1;
    param_1[0x10] = param_2[0x10];
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_004093c0(param_1 + 0x10,param_2 + 0x10,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    param_1[0x20] = param_2[0x20];
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_004093c0(param_1 + 0x20,param_2 + 0x20,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  ExceptionList = local_c;
  return;
}


