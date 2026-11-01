
/* ==== FUN_004919e0 @ 004919e0 ==== 
 * signature: undefined4 * __thiscall FUN_004919e0(void * this, undefined4 param_1)
 * body: 004919e0-00491b0d
 */

undefined4 * __thiscall FUN_004919e0(void *this,undefined4 param_1)

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
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056dfbd;
  local_c = ExceptionList;
  local_1c._0_1_ = (undefined1)param_1;
  uVar4 = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar6 = s_OVL_DASHBOARD_005acd04;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(&local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_OVL_DASHBOARD_005acd04;
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
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_004914c0((undefined4 *)((int)this + 0x18));
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined ***)((int)this + 0x40) = &PTR_FUN_00576b04;
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
  *(undefined1 **)((int)this + 0x44) = puVar3;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined ***)this = &PTR_FUN_00576fe4;
  ExceptionList = local_c;
  return this;
}


