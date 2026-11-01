
/* ==== dso_load_module @ 004d8a80 ==== 
 * signature: undefined __thiscall dso_load_module(void * this, void * param_1)
 * body: 004d8a80-004d8cc3
 * note: ANALYST: Reads version (must be 0x1B), time and the five item lists. [confidence: confirmed] [evidence: code compares version with 0x1b]
 */

/* ANALYST: Reads version (must be 0x1B), time and the five item lists. [confidence: confirmed]
   [evidence: code compares version with 0x1b] */

void __thiscall dso_load_module(void *this,void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  int *in_stack_00000014;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570470;
  pvStack_c = ExceptionList;
  local_1c = CONCAT31(local_1c._1_3_,param_1._0_1_);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_FUN_005778d8;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004d7450(param_1,(int *)((int)this + 0x28));
  FUN_004d6730();
  FUN_004d7800(param_1,(int *)((int)this + 0x2c),4);
  FUN_0055924c((int *)((int)this + 0x2c));
  FUN_004d6730();
  if (*(int *)((int)this + 0x28) != 0x1b) {
    auStack_40[0] = param_1._0_1_;
    uVar3 = 0xffffffff;
    iStack_3c = 0;
    pcVar4 = &DAT_00712694;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uStack_38 = 0;
    uStack_34 = 0;
    FUN_00402940(auStack_40,(undefined4 *)&DAT_00712694,~uVar3 - 1);
    auStack_50[0] = param_1._0_1_;
    uVar3 = 0xffffffff;
    local_4._0_1_ = 1;
    pcVar4 = &DAT_00712694;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_00402940(auStack_50,(undefined4 *)&DAT_00712694,~uVar3 - 1);
    local_4._0_1_ = 2;
    puVar2 = FUN_004d7610(auStack_30);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004d6900(0xbbb,puVar2,auStack_50,auStack_40);
    if (local_1c != 0) {
      cVar1 = *(char *)(local_1c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_1c + -1));
      }
      else {
        *(char *)(local_1c + -1) = cVar1 + -1;
      }
    }
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    if (iStack_2c != 0) {
      cVar1 = *(char *)(iStack_2c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_2c + -1));
      }
      else {
        *(char *)(iStack_2c + -1) = cVar1 + -1;
      }
    }
    iStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
  }
  FUN_004da320((void *)((int)this + 0x30),in_stack_00000014,(int)&local_10,this);
  FUN_004da320((void *)((int)this + 0x58),in_stack_00000014,(int)&local_10,this);
  FUN_004da320((void *)((int)this + 0x6c),in_stack_00000014,(int)&local_10,this);
  FUN_004da320((void *)((int)this + 0x80),in_stack_00000014,(int)&local_10,this);
  FUN_004da320((void *)((int)this + 0x44),in_stack_00000014,(int)&local_10,this);
  FUN_004dcaf0(&local_10,(int)this);
  FUN_004dcb30(&local_10);
  ExceptionList = param_1;
  return;
}


