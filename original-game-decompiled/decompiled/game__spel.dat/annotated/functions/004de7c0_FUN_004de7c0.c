
/* ==== FUN_004de7c0 @ 004de7c0 ==== 
 * signature: void * __thiscall FUN_004de7c0(void * this, void * param_1, undefined1 param_2)
 * body: 004de7c0-004de930
 */

void * __thiscall FUN_004de7c0(void *this,void *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined **local_24 [6];
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_00570ea7;
  pvStack_c = ExceptionList;
  local_34[0] = param_2;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((*(int *)((int)this + 0x30) != 0) &&
     (iVar3 = *(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) >> 2,
     ExceptionList = &pvStack_c, iVar3 != 0)) {
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = 0;
    }
    ExceptionList = &pvStack_c;
    puVar2 = operator_new(iVar1 * 0x18);
    FUN_004d2d40((int)local_30,(int)local_2c,puVar2);
    FUN_004d2d10(local_30,local_2c);
    FUN_0054b339(local_30);
    local_28 = puVar2 + iVar3 * 6;
    if (local_30 == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)local_2c - (int)local_30) / 0x18;
    }
    local_2c = puVar2 + iVar3 * 6;
    local_30 = puVar2;
  }
  iVar3 = *(int *)((int)this + 0x34);
  if (iVar3 != *(int *)((int)this + 0x30)) {
    do {
      iVar1 = FUN_004d9850(local_24,*(int *)(*(int *)(iVar3 + -4) + 0x20));
      local_4._0_1_ = 2;
      FUN_004d27b0(local_34,iVar1);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_24[0] = &PTR_FUN_005778c0;
      FUN_004cf650(local_24);
      iVar3 = iVar3 + -4;
    } while (iVar3 != *(int *)((int)this + 0x30));
  }
  FUN_004d2a00(param_1,(int)local_34);
  local_4 = local_4 & 0xffffff00;
  FUN_004d29b0((int)local_34);
  ExceptionList = pvStack_c;
  return param_1;
}


