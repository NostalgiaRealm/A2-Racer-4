
/* ==== FUN_00481940 @ 00481940 ==== 
 * signature: undefined __stdcall FUN_00481940(void * param_1, undefined4 * param_2)
 * body: 00481940-00481a54
 */

void FUN_00481940(void *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c67b;
  local_c = ExceptionList;
  local_2c[0] = param_2._0_1_;
  uVar2 = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar3 = (char *)*param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_2c,(undefined4 *)*param_2,~uVar2 - 1);
  local_4 = 0;
  FUN_004877e0(local_1c,(int)param_1 + 0x808,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_14 == 0) {
    if (local_18 == 0) {
      ExceptionList = local_c;
      return;
    }
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_00481b90((int)local_1c,*(byte *)(param_2 + 1),param_1);
    if (local_18 == 0) {
      ExceptionList = local_c;
      return;
    }
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  FUN_0054b339((LPVOID)(local_18 + -1));
  ExceptionList = local_c;
  return;
}


