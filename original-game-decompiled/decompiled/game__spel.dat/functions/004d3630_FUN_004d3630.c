
/* ==== FUN_004d3630 @ 004d3630 ==== 
 * signature: undefined __fastcall FUN_004d3630(undefined4 * param_1)
 * body: 004d3630-004d36ff
 */

void __fastcall FUN_004d3630(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056fdb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577890;
  local_4 = 6;
  FUN_004da170(param_1 + 0x2a);
  local_4._0_1_ = 5;
  FUN_004da170(param_1 + 0x25);
  local_4._0_1_ = 4;
  FUN_004da170(param_1 + 0x20);
  local_4._0_1_ = 3;
  FUN_004da170(param_1 + 0x1b);
  local_4._0_1_ = 2;
  FUN_004da170(param_1 + 0x16);
  local_4._0_1_ = 1;
  FUN_004da170(param_1 + 0x11);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004da170(param_1 + 0xc);
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


