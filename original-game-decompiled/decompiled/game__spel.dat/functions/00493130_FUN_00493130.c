
/* ==== FUN_00493130 @ 00493130 ==== 
 * signature: undefined4 * __thiscall FUN_00493130(void * this, undefined4 param_1)
 * body: 00493130-0049328b
 */

undefined4 * __thiscall FUN_00493130(void *this,undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e09a;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  uVar3 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pcVar4 = s_OVL_PORTRAIT_MGR_005acea0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_1c,(undefined4 *)s_OVL_PORTRAIT_MGR_005acea0,~uVar3 - 1);
  local_4 = 0;
  FUN_004924a0(this,param_1,(undefined4 *)local_1c);
  local_4._0_1_ = 2;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  *(undefined ***)((int)this + 0x1c) = &PTR_FUN_00577058;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = (undefined1)param_1;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x20) = puVar2;
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x24) = &PTR_FUN_00576e18;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = (undefined1)param_1;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x28) = puVar2;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined ***)((int)this + 0x30) = &PTR_FUN_00576b04;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = (undefined1)param_1;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x34) = puVar2;
  *(undefined ***)this = &PTR_FUN_00577048;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return this;
}


