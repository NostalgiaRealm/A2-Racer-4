
/* ==== FUN_00478230 @ 00478230 ==== 
 * signature: undefined __stdcall FUN_00478230(undefined4 param_1, undefined4 param_2)
 * body: 00478230-00478391
 */

void FUN_00478230(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char local_17c [308];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 *local_34;
  undefined1 local_28 [4];
  char *local_24;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056b876;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,(byte *)s_OnTurnoff__s_005a9490);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = local_17c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_28,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = local_17c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_24 = local_24 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_24 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,uVar3);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = (char *)&DAT_005a94a0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_38,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar6 = &DAT_005a94a0;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_34 = *puVar6;
      puVar6 = puVar6 + 1;
      local_34 = local_34 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)local_34 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      local_34 = (undefined4 *)((int)local_34 + 1);
    }
    FUN_004029e0(local_38,uVar3);
  }
  local_48[0] = param_2._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  FUN_004cfab0(local_18,&param_1,(int)local_38,(int)local_28,local_48);
  local_8._0_1_ = 2;
  FUN_004d29b0((int)local_48);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,'\x01');
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  ExceptionList = local_10;
  return;
}


