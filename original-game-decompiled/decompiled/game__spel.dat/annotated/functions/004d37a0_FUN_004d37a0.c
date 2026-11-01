
/* ==== FUN_004d37a0 @ 004d37a0 ==== 
 * signature: undefined __fastcall FUN_004d37a0(undefined4 * param_1)
 * body: 004d37a0-004d38b2
 */

void __fastcall FUN_004d37a0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_0056fe26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00577830;
  iVar2 = param_1[0x19];
  local_4 = 1;
  if (iVar2 != param_1[0x18]) {
    do {
      (**(code **)(**(int **)(iVar2 + -4) + 0x5c))(param_1 + 0x2f);
      iVar2 = iVar2 + -4;
    } while (iVar2 != param_1[0x18]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004d9260(param_1 + 0x2f);
  *param_1 = &PTR_FUN_00577890;
  local_4 = 8;
  FUN_004da170(param_1 + 0x2a);
  local_4._0_1_ = 7;
  FUN_004da170(param_1 + 0x25);
  local_4._0_1_ = 6;
  FUN_004da170(param_1 + 0x20);
  local_4._0_1_ = 5;
  FUN_004da170(param_1 + 0x1b);
  local_4._0_1_ = 4;
  FUN_004da170(param_1 + 0x16);
  local_4._0_1_ = 3;
  FUN_004da170(param_1 + 0x11);
  local_4 = CONCAT31(local_4._1_3_,2);
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
  ExceptionList = pvStack_c;
  return;
}


