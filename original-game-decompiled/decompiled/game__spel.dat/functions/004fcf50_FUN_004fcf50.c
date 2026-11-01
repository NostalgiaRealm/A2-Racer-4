
/* ==== FUN_004fcf50 @ 004fcf50 ==== 
 * signature: undefined __fastcall FUN_004fcf50(undefined4 * param_1)
 * body: 004fcf50-004fcfae
 */

void __fastcall FUN_004fcf50(undefined4 *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573568;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00578568;
  local_4 = 0;
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0x18))(1);
  }
  param_1[0xf] = 0;
  local_4 = 0xffffffff;
  FUN_004fcfc0(param_1);
  ExceptionList = pvStack_c;
  return;
}


