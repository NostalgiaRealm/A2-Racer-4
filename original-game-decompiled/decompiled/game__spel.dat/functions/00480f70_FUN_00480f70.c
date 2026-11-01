
/* ==== FUN_00480f70 @ 00480f70 ==== 
 * signature: undefined4 __stdcall FUN_00480f70(int param_1, int param_2, int param_3)
 * body: 00480f70-0048105e
 */

undefined4 FUN_00480f70(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c460;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004877e0(local_1c,param_1,param_2);
  local_4 = 0;
  if (local_14 != 0) {
    uVar3 = FUN_00481060((int)local_1c,param_3,param_3 + 4,param_3 + 8);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      uVar3 = FUN_0054b339((LPVOID)(local_18 + -1));
    }
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = 0;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return 0;
    }
    uVar2 = FUN_0054b339((LPVOID)(local_18 + -1));
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


