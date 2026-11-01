
/* ==== FUN_005107a0 @ 005107a0 ==== 
 * signature: undefined __fastcall FUN_005107a0(undefined4 * param_1)
 * body: 005107a0-00510843
 */

void __fastcall FUN_005107a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573d7f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00578ad0;
  param_1[0x22] = &PTR_FUN_00578ac8;
  local_4 = 2;
  FUN_00510690((int)param_1);
  puVar1 = (undefined4 *)param_1[0x25];
  if (puVar1 != param_1 + 0x26) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[0x25] = 0;
    }
    *(undefined2 *)(param_1 + 0x24) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  local_4 = 0xffffffff;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x22)) =
       &PTR_FUN_005788a0;
  FUN_00539800(param_1);
  ExceptionList = local_c;
  return;
}


