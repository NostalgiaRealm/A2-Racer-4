
/* ==== FUN_00424e30 @ 00424e30 ==== 
 * signature: undefined __cdecl FUN_00424e30(undefined1 * param_1, undefined1 * param_2)
 * body: 00424e30-00424f47
 */

void __cdecl FUN_00424e30(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056a0ca;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    FUN_004028f0(param_1,'\0');
    FUN_004093c0(param_1,param_2,0,0xffffffff);
    local_4._0_1_ = 1;
    param_1[0x10] = param_2[0x10];
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_004093c0(param_1 + 0x10,param_2 + 0x10,0,0xffffffff);
    puVar1 = param_1 + 0x20;
    local_4._0_1_ = 2;
    *puVar1 = param_2[0x20];
    FUN_004028f0(puVar1,'\0');
    FUN_004093c0(puVar1,param_2 + 0x20,0,0xffffffff);
    local_4._0_1_ = 3;
    param_1[0x30] = param_2[0x30];
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_004093c0(param_1 + 0x30,param_2 + 0x30,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    puVar1 = param_1 + 0x50;
    local_4 = CONCAT31(local_4._1_3_,4);
    *puVar1 = param_2[0x50];
    FUN_004028f0(puVar1,'\0');
    FUN_004093c0(puVar1,param_2 + 0x50,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


