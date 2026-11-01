
/* ==== FUN_004893f0 @ 004893f0 ==== 
 * signature: undefined __fastcall FUN_004893f0(undefined4 * param_1)
 * body: 004893f0-004895d9
 */

void __fastcall FUN_004893f0(undefined4 *param_1)

{
  LPVOID pvVar1;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056d6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00576f78;
  pvVar1 = (LPVOID)param_1[0xf3];
  local_4 = 9;
  param_1[0xf2] = &PTR_FUN_00576f68;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_00490c40(*(undefined4 **)((int)pvVar1 + 4),*(undefined4 **)((int)pvVar1 + 8));
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[0xf3] = 0;
  pvVar1 = (LPVOID)param_1[0xaf];
  local_4._0_1_ = 8;
  param_1[0xae] = &PTR_FUN_00576f58;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_004909f0(*(int *)((int)pvVar1 + 4),*(int *)((int)pvVar1 + 8));
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[0xaf] = 0;
  pvVar1 = (LPVOID)param_1[0xad];
  local_4._0_1_ = 7;
  param_1[0xac] = &PTR_FUN_00576f48;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[0xad] = 0;
  pvVar1 = (LPVOID)param_1[0xab];
  local_4._0_1_ = 6;
  param_1[0xaa] = &PTR_FUN_00576f38;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_004da4d0((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  param_1[0xab] = 0;
  pvVar1 = (LPVOID)param_1[0xa9];
  local_4._0_1_ = 5;
  param_1[0xa8] = &PTR_FUN_00576f38;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[0xa9] = 0;
  local_4._0_1_ = 4;
  FUN_0049bc50(param_1 + 0xa0);
  local_4._0_1_ = 3;
  FUN_0049c920(param_1 + 0x68);
  local_4._0_1_ = 2;
  FUN_0049c920(param_1 + 0x4a);
  local_4._0_1_ = 1;
  FUN_0049c920(param_1 + 0x2c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0049c920(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_004925f0(param_1);
  ExceptionList = local_c;
  return;
}


