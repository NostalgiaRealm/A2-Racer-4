
/* ==== FUN_004895e0 @ 004895e0 ==== 
 * signature: undefined4 * __thiscall FUN_004895e0(void * this, undefined4 param_1)
 * body: 004895e0-004897f7
 */

undefined4 * __thiscall FUN_004895e0(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_1c;
  char *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d75d;
  local_c = ExceptionList;
  local_1c._0_1_ = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004028f0(&local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_COMMUNICATOR_005ab7fc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(&local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_OVL_COMMUNICATOR_005ab7fc;
    pcVar7 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  local_4 = 0;
  FUN_004924a0(this,param_1,&local_1c);
  local_4._0_1_ = 2;
  FUN_004028f0(&local_1c,'\x01');
  FUN_0049c910((undefined4 *)((int)this + 0x38));
  local_4._0_1_ = 3;
  FUN_0049c910((undefined4 *)((int)this + 0xb0));
  local_4._0_1_ = 4;
  FUN_0049c910((undefined4 *)((int)this + 0x128));
  local_4._0_1_ = 5;
  FUN_0049c910((undefined4 *)((int)this + 0x1a0));
  local_4._0_1_ = 6;
  FUN_0049bae0((undefined4 *)((int)this + 0x280));
  local_4._0_1_ = 7;
  *(undefined ***)((int)this + 0x2a0) = &PTR_FUN_00576f38;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = (undefined1)param_1;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x2a4) = puVar3;
  local_4._0_1_ = 8;
  *(undefined ***)((int)this + 0x2a8) = &PTR_FUN_00576f38;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = (undefined1)param_1;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x2ac) = puVar3;
  local_4._0_1_ = 9;
  *(undefined ***)((int)this + 0x2b0) = &PTR_FUN_00576f48;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = (undefined1)param_1;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x2b4) = puVar3;
  local_4._0_1_ = 10;
  *(undefined ***)((int)this + 0x2b8) = &PTR_FUN_00576f58;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = (undefined1)param_1;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 700) = puVar3;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  *(undefined ***)((int)this + 0x3c8) = &PTR_FUN_00576f68;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = (undefined1)param_1;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x3cc) = puVar3;
  *(undefined ***)this = &PTR_FUN_00576f78;
  ExceptionList = local_c;
  return this;
}


