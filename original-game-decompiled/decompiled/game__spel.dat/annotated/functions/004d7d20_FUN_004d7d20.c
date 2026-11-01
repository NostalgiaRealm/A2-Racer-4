
/* ==== FUN_004d7d20 @ 004d7d20 ==== 
 * signature: void * __cdecl FUN_004d7d20(void * param_1, int param_2)
 * body: 004d7d20-004d7e43
 */

void * __cdecl FUN_004d7d20(void *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
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
  pcStack_8 = FUN_005702e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00479930(*(void **)(param_2 + 4),local_1c);
  local_4 = 0;
  uVar2 = *(uint *)(*(int *)(param_2 + 4) + 0x28);
  if ((int)uVar2 < 1) {
    FUN_004cf4f0(param_1,&DAT_00712694);
  }
  else if (local_14 < (int)uVar2) {
    FUN_004cf330(param_1,local_1c);
  }
  else {
    local_2c[0] = param_1._0_1_;
    FUN_004028f0(local_2c,'\0');
    FUN_004093c0(local_2c,local_1c,local_14 - uVar2,uVar2);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004cf330(param_1,local_2c);
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
  }
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_0054b339((LPVOID)(local_18 + -1));
  }
  ExceptionList = local_c;
  return param_1;
}


