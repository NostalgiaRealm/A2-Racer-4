
/* ==== FUN_004db960 @ 004db960 ==== 
 * signature: undefined __fastcall FUN_004db960(undefined4 * param_1)
 * body: 004db960-004dba1b
 */

void __fastcall FUN_004db960(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0057095e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005778e8;
  local_4 = 0;
  FUN_004da170(param_1 + 0x1f);
  *param_1 = &PTR_FUN_00577930;
  local_4 = 3;
  FUN_004dde60(param_1 + 0x1a);
  local_4._0_1_ = 2;
  FUN_004da170(param_1 + 0x15);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004da170(param_1 + 0x10);
  *param_1 = &PTR_FUN_0057797c;
  local_4 = 4;
  FUN_004da170(param_1 + 10);
  *param_1 = &PTR_FUN_00577860;
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = local_c;
  return;
}


