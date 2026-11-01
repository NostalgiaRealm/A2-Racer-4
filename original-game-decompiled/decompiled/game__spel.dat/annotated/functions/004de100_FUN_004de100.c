
/* ==== FUN_004de100 @ 004de100 ==== 
 * signature: undefined __fastcall FUN_004de100(undefined4 * param_1)
 * body: 004de100-004de168
 */

void __fastcall FUN_004de100(undefined4 *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570db0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00577b98;
  local_4 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  *param_1 = &PTR_FUN_00577bd4;
  local_4 = 1;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = &PTR_FUN_00577b5c;
  ExceptionList = pvStack_c;
  return;
}


