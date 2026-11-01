
/* ==== FUN_0042e730 @ 0042e730 ==== 
 * signature: undefined __fastcall FUN_0042e730(int param_1)
 * body: 0042e730-0042e880
 */

void __fastcall FUN_0042e730(int param_1)

{
  LPVOID pvVar1;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056a34e;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_0042f0d0(param_1);
  pvVar1 = *(LPVOID *)(param_1 + 0x5c);
  local_4._0_1_ = 4;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_00576634;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0x54);
  local_4._0_1_ = 3;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_00576644;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_004da4d0((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0x4c);
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_00576634;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0x44);
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_00576644;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_004da4d0((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0x38);
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(param_1 + 0x34) = &PTR_FUN_00576644;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_004da4d0((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0x2c);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_00576644;
  local_4 = 0xffffffff;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_004da4d0((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  ExceptionList = local_c;
  return;
}


