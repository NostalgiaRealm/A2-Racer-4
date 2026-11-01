
/* ==== FUN_004e2180 @ 004e2180 ==== 
 * signature: undefined __thiscall FUN_004e2180(void * this, void * param_1, void * param_2, int param_3)
 * body: 004e2180-004e2262
 */

void __thiscall FUN_004e2180(void *this,void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 local_4c;
  undefined1 auStack_3c [4];
  LPVOID pvStack_38;
  undefined **appuStack_2c [2];
  undefined1 local_24 [16];
  undefined **appuStack_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571618;
  pvStack_c = ExceptionList;
  if (*(int *)((int)this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(*(void **)((int)param_1 + 8),&local_4c,uVar1);
  local_4 = 0;
  uVar2 = FUN_004d9280(*(int *)((int)param_1 + 8));
  FUN_004e5a30((void *)((int)this + 0x3c),(int)&local_4c);
  pvVar3 = (void *)(**(code **)((int)this + 0x34))(local_24,uVar2,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar4 = FUN_004e50e0(auStack_3c,param_3,pvVar3,param_2);
  (**(code **)((int)this + 0x38))(uVar2,auStack_3c,uVar4);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_2c);
  appuStack_14[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_14);
  local_4c = 0x4e224d;
  FUN_0054b339(pvStack_38);
  ExceptionList = param_1;
  return;
}


