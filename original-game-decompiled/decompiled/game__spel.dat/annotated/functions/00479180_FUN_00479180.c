
/* ==== FUN_00479180 @ 00479180 ==== 
 * signature: undefined __stdcall FUN_00479180(int param_1, undefined4 param_2)
 * body: 00479180-004792dd;004792e1-004792f3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004792de-004792e0
 */

void FUN_00479180(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056b994;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  if (param_1 != -1) {
    ExceptionList = &local_10;
    FUN_005587a3(local_17c,(byte *)s_OnCollision__s_005a986c);
    local_8 = 0;
    local_28[0] = param_1._3_1_;
    FUN_004028f0(local_28,'\0');
    uVar4 = 0xffffffff;
    pcVar6 = local_17c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(local_28,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar6 = local_17c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)local_24 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_24 = local_24 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_24 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_24 = local_24 + 1;
      }
      FUN_004029e0(local_28,uVar4);
    }
    local_38[0] = param_1._3_1_;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004028f0(local_38,'\0');
    uVar4 = 0xffffffff;
    pcVar6 = s_CScriptedObject_005a987c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(local_38,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar6 = s_CScriptedObject_005a987c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)local_34 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_34 = local_34 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_34 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_34 = local_34 + 1;
      }
      FUN_004029e0(local_38,uVar4);
    }
    local_8._0_1_ = 2;
    bVar2 = FUN_004cfaf0(local_18,&param_1,(int)local_38,(int)local_28);
    local_8._0_1_ = 1;
    FUN_004028f0(local_38,'\x01');
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(local_28,'\x01');
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s___s___d_CScriptedObject_Event____005a98b0);
    }
  }
  ExceptionList = local_10;
  return;
}


