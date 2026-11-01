
/* ==== FUN_004d9aa0 @ 004d9aa0 ==== 
 * signature: void * __thiscall FUN_004d9aa0(void * this, void * param_1, uint param_2)
 * body: 004d9aa0-004d9bca
 */

void * __thiscall FUN_004d9aa0(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570550;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_004d9ec0((int)local_1c);
  uVar4 = param_2;
  if (uVar1 < param_2) {
    uVar1 = param_2;
    if ((int)param_2 < 0) {
      uVar1 = 0;
    }
    puVar2 = operator_new(uVar1 * 4);
    FUN_004de170(local_18,local_14,puVar2);
    FUN_0042f530();
    FUN_0054b339(local_18);
    local_10 = puVar2 + uVar4;
    iVar3 = FUN_00492480((int)local_1c);
    local_14 = puVar2 + iVar3;
    local_18 = puVar2;
  }
  local_4 = 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    iVar3 = *(int *)((int)this + 8) + -4;
    *(int *)((int)this + 8) = iVar3;
    param_2 = *(uint *)(*(int *)((int)this + 4) + iVar3);
    FUN_004a5620(local_1c,local_18,1,&param_2);
  }
  FUN_004dccd0(param_1,(int)local_1c);
  FUN_0054b339(local_18);
  ExceptionList = local_c;
  return param_1;
}


