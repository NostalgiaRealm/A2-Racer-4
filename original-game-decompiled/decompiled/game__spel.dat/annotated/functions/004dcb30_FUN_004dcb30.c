
/* ==== FUN_004dcb30 @ 004dcb30 ==== 
 * signature: undefined __fastcall FUN_004dcb30(undefined4 * param_1)
 * body: 004dcb30-004dcbb0
 */

void __fastcall FUN_004dcb30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570b47;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005778d8;
  piVar1 = (int *)param_1[2];
  local_4 = 0;
  if (piVar1 != (int *)param_1[3]) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)param_1[3]);
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 1;
  }
  FUN_0054b339((LPVOID)puVar2[1]);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


