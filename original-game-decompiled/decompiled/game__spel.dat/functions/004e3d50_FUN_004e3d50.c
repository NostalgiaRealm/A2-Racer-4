
/* ==== FUN_004e3d50 @ 004e3d50 ==== 
 * signature: undefined __fastcall FUN_004e3d50(undefined4 * param_1)
 * body: 004e3d50-004e3dc5
 */

void __fastcall FUN_004e3d50(undefined4 *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571920;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0057813c;
  local_4 = 0;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  *param_1 = &PTR_FUN_00577af8;
  local_4 = 1;
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


