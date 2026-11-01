
/* ==== FUN_004fbce0 @ 004fbce0 ==== 
 * signature: undefined __fastcall FUN_004fbce0(int * param_1)
 * body: 004fbce0-004fbd46
 */

void __fastcall FUN_004fbce0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573508;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_005784f8;
  puVar1 = (undefined4 *)param_1[0x24];
  local_4 = 0;
  if (((puVar1 != (undefined4 *)0x0) && (iVar2 = puVar1[2], puVar1[2] = iVar2 + -1, iVar2 + -1 == 0)
      ) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_004fb600(param_1);
  ExceptionList = pvStack_c;
  return;
}


