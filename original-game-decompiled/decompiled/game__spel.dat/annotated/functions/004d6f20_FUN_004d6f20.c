
/* ==== FUN_004d6f20 @ 004d6f20 ==== 
 * signature: undefined __cdecl FUN_004d6f20(undefined4 param_1, undefined1 * param_2, char * param_3)
 * body: 004d6f20-004d708e
 */

void __cdecl FUN_004d6f20(undefined4 param_1,undefined1 *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570200;
  local_c = ExceptionList;
  local_50[0] = param_3._0_1_;
  uVar2 = 0xffffffff;
  pcVar3 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  ExceptionList = &local_c;
  FUN_00402940(local_50,(undefined4 *)param_3,~uVar2 - 1);
  local_4 = 0;
  local_40[0] = *param_2;
  FUN_004028f0(local_40,'\0');
  FUN_004093c0(local_40,param_2,0,0xffffffff);
  local_4._0_1_ = 1;
  local_30[0] = param_3._0_1_;
  FUN_004028f0(local_30,'\0');
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_00712694;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_30,(undefined4 *)&DAT_00712694,~uVar2 - 1);
  local_4._0_1_ = 2;
  FUN_0041c870(local_20,local_50);
  local_10 = param_1;
  local_4._0_1_ = 3;
  FUN_004d7090(&DAT_0074b8b0,&param_3,DAT_0074b8b4,local_40);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_20,'\x01');
  FUN_004028f0(local_30,'\x01');
  FUN_004028f0(local_40,'\x01');
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
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  FUN_004d6730();
  ExceptionList = local_c;
  return;
}


