
/* ==== FUN_004d6900 @ 004d6900 ==== 
 * signature: undefined __stdcall FUN_004d6900(undefined4 param_1, undefined1 * param_2, undefined1 * param_3, undefined1 * param_4)
 * body: 004d6900-004d6afa
 */

void FUN_004d6900(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50 [4];
  int local_4c;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570160;
  pvStack_c = ExceptionList;
  pcVar4 = local_50;
  ExceptionList = &pvStack_c;
  puVar2 = FUN_004797e0(pcVar4,s_RuntimeError_005b70bc,(int)param_2);
  puVar3 = &DAT_005b36c4;
  local_4 = 0;
  puVar2 = FUN_004796b0(local_60,puVar2,(char *)&DAT_005b36c4);
  local_4._0_1_ = 1;
  puVar2 = FUN_0047c9a0(local_70,puVar2,(int)param_3);
  local_4._0_1_ = 2;
  puVar2 = FUN_004796b0(local_80,puVar2,(char *)&DAT_005b36c4);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0047c9a0(&stack0xffffff60,puVar2,(int)param_4);
  FUN_004d6760(puVar3,pcVar4);
  if (local_7c != 0) {
    cVar1 = *(char *)(local_7c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_7c + -1));
    }
    else {
      *(char *)(local_7c + -1) = cVar1 + -1;
    }
  }
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  if (local_6c != 0) {
    cVar1 = *(char *)(local_6c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_6c + -1));
    }
    else {
      *(char *)(local_6c + -1) = cVar1 + -1;
    }
  }
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (local_5c != 0) {
    cVar1 = *(char *)(local_5c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_5c + -1));
    }
    else {
      *(char *)(local_5c + -1) = cVar1 + -1;
    }
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_4 = 0xffffffff;
  if (local_4c != 0) {
    cVar1 = *(char *)(local_4c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_4c + -1));
    }
    else {
      *(char *)(local_4c + -1) = cVar1 + -1;
    }
  }
  local_40[0] = *param_3;
  FUN_004028f0(local_40,'\0');
  FUN_004093c0(local_40,param_3,0,0xffffffff);
  local_30[0] = *param_2;
  local_4 = 4;
  FUN_004028f0(local_30,'\0');
  FUN_004093c0(local_30,param_2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0041c870(local_20,param_4);
  local_10 = param_1;
  local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_40,&DAT_00584c40);
}


