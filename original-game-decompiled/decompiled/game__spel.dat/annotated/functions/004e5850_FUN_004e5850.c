
/* ==== FUN_004e5850 @ 004e5850 ==== 
 * signature: undefined __thiscall FUN_004e5850(void * this, void * param_1)
 * body: 004e5850-004e59f1
 */

void __thiscall FUN_004e5850(void *this,void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_38;
  uint local_34;
  undefined4 *local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [4];
  undefined **local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  char cStack_10;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_00571b90;
  pvStack_c = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_20[0] = '\x01';
  local_2c = &PTR_FUN_00578178;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004d7450(param_1,&local_38);
  local_34 = local_38;
  if (*(int *)((int)this + 8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8) >> 4;
  }
  if (uVar3 < local_38) {
    uVar3 = local_38;
    if ((int)local_38 < 0) {
      uVar3 = 0;
    }
    puVar1 = operator_new(uVar3 << 4);
    iVar2 = *(int *)((int)this + 0xc);
    local_30 = puVar1;
    for (iVar4 = *(int *)((int)this + 8); iVar4 != iVar2; iVar4 = iVar4 + 0x10) {
      FUN_004e5fc0(puVar1,iVar4);
      puVar1 = puVar1 + 4;
    }
    puVar1 = *(undefined4 **)((int)this + 0xc);
    for (puVar5 = *(undefined4 **)((int)this + 8); puVar5 != puVar1; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(0);
    }
    FUN_0054b339(*(LPVOID *)((int)this + 8));
    *(undefined4 **)((int)this + 0x10) = local_30 + local_34 * 4;
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 4;
    }
    *(undefined4 **)((int)this + 8) = local_30;
    *(undefined4 **)((int)this + 0xc) = local_30 + iVar2 * 4;
  }
  while (local_38 != 0) {
    local_38 = local_38 - 1;
    local_1c = &PTR_FUN_00578178;
    FUN_004d7490(param_1,local_20);
    if (local_20[0] == '\0') {
      FUN_004d7450(param_1,&local_28);
      FUN_004d7450(param_1,&local_24);
    }
    uStack_18 = local_28;
    uStack_14 = local_24;
    cStack_10 = local_20[0];
    local_4._0_1_ = 1;
    FUN_004e5cf0((void *)((int)this + 4),*(undefined4 **)((int)this + 0xc),1,&local_1c);
    local_4 = (uint)local_4._1_3_ << 8;
  }
  ExceptionList = pvStack_c;
  return;
}


