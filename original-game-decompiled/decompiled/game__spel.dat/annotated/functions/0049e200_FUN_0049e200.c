
/* ==== FUN_0049e200 @ 0049e200 ==== 
 * signature: undefined __fastcall FUN_0049e200(undefined4 * param_1)
 * body: 0049e200-0049e258
 */

void __fastcall FUN_0049e200(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056eb08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_0049e630((int)param_1);
  if (uVar1 != 0) {
    FUN_004c6e50(param_1[0xe]);
  }
  local_4 = 0xffffffff;
  FUN_0049f4c0(param_1);
  ExceptionList = local_c;
  return;
}


