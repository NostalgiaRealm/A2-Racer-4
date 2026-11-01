
/* ==== FUN_00481a60 @ 00481a60 ==== 
 * signature: undefined __stdcall FUN_00481a60(void * param_1)
 * body: 00481a60-00481b8b
 */

void FUN_00481a60(void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c69d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004796b0(local_1c,(undefined1 *)((int)param_1 + 0x808),s__ASCII_005aa768);
  iVar3 = 0;
  local_4 = 0;
  do {
    puVar2 = FUN_004873b0(local_2c);
    local_4._0_1_ = 1;
    FUN_004877e0(local_3c,(int)local_1c,(int)puVar2);
    local_4 = CONCAT31(local_4._1_3_,3);
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
    if (local_34 != 0) {
      FUN_00481b90((int)local_3c,(byte)iVar3,param_1);
    }
    local_4 = local_4 & 0xffffff00;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((LPVOID)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    iVar3 = iVar3 + 1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
  } while (iVar3 < 0x100);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}


