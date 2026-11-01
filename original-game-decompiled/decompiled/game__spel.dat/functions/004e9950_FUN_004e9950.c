
/* ==== FUN_004e9950 @ 004e9950 ==== 
 * signature: undefined __fastcall FUN_004e9950(undefined4 * param_1)
 * body: 004e9950-004e99aa
 */

void __fastcall FUN_004e9950(undefined4 *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00572018;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00577af8;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  *param_1 = &PTR_FUN_00577b5c;
  ExceptionList = pvStack_c;
  return;
}


