
/* ==== FUN_004f2b80 @ 004f2b80 ==== 
 * signature: undefined __fastcall FUN_004f2b80(undefined4 * param_1)
 * body: 004f2b80-004f2bdd
 */

void __fastcall FUN_004f2b80(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  pcStack_8 = FUN_00572e68;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005782e4;
  puVar1 = (undefined4 *)param_1[7];
  local_4 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)param_1[7];
  }
  local_4 = 0xffffffff;
  FUN_004f2a70(param_1);
  ExceptionList = pvStack_c;
  return;
}


