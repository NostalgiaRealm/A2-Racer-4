
/* ==== FUN_0050c920 @ 0050c920 ==== 
 * signature: undefined __fastcall FUN_0050c920(int * param_1)
 * body: 0050c920-0050c9ce
 */

void __fastcall FUN_0050c920(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573a76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x38);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0050d210(puVar1,s_double_null_005b985c,0);
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x38);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0050d210(puVar2,s_current_time_005b984c,0);
  }
  param_1[8] = (int)puVar2;
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 8))(puVar1);
  (**(code **)(*param_1 + 8))(param_1[8]);
  ExceptionList = unaff_ESI;
  return;
}


