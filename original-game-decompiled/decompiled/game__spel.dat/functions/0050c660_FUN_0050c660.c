
/* ==== FUN_0050c660 @ 0050c660 ==== 
 * signature: undefined __fastcall FUN_0050c660(undefined4 * param_1)
 * body: 0050c660-0050c6cf
 */

void __fastcall FUN_0050c660(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  pcStack_8 = FUN_005739d8;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005788e8;
  iVar3 = param_1[1];
  local_4 = 0;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    puVar1 = *(undefined4 **)(param_1[3] + 4 + iVar3 * 8);
    if ((puVar1 != (undefined4 *)0x0) &&
       (iVar2 = puVar1[2], puVar1[2] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00501140(param_1);
  ExceptionList = pvStack_c;
  return;
}


