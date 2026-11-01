
/* ==== FUN_004e1f80 @ 004e1f80 ==== 
 * signature: undefined __thiscall FUN_004e1f80(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004e1f80-004e2005
 */

void __thiscall FUN_004e1f80(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 local_1c [4];
  LPVOID pvStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571598;
  pvStack_c = ExceptionList;
  if (*(int *)((int)this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(*(void **)(param_1 + 8),local_1c,uVar1);
  local_4 = 0;
  FUN_004e5a30((void *)((int)this + 0x3c),(int)local_1c);
  (**(code **)((int)this + 0x38))(param_3,local_1c,param_2);
  FUN_0054b339(pvStack_18);
  ExceptionList = pvStack_c;
  return;
}


