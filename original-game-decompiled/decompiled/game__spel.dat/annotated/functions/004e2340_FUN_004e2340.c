
/* ==== FUN_004e2340 @ 004e2340 ==== 
 * signature: undefined4 * __thiscall FUN_004e2340(void * this, undefined4 * param_1, int param_2)
 * body: 004e2340-004e2407
 */

undefined4 * __thiscall FUN_004e2340(void *this,undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_34 [4];
  LPVOID pvStack_30;
  undefined **local_24 [6];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571697;
  pvStack_c = ExceptionList;
  uVar1 = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    uVar1 = *(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(*(void **)(param_2 + 8),local_34,uVar1);
  local_4 = 1;
  FUN_004e5a30((void *)((int)this + 0x3c),(int)local_34);
  puVar4 = local_34;
  uVar2 = FUN_004d9280(*(int *)(param_2 + 8));
  iVar3 = (**(code **)((int)this + 0x34))(local_24,uVar2,puVar4);
  local_4._0_1_ = 2;
  FUN_004cef20(param_1,iVar3);
  *param_1 = &PTR_FUN_005778c0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650(local_24);
  FUN_0054b339(pvStack_30);
  ExceptionList = pvStack_c;
  return param_1;
}


