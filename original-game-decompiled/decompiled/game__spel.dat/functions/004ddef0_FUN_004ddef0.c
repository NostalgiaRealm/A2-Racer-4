
/* ==== FUN_004ddef0 @ 004ddef0 ==== 
 * signature: undefined __fastcall FUN_004ddef0(undefined4 * param_1)
 * body: 004ddef0-004ddf3d
 */

void __fastcall FUN_004ddef0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577bd4;
  local_4 = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = &PTR_FUN_00577b5c;
  ExceptionList = local_c;
  return;
}


