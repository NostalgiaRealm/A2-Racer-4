
/* ==== FUN_004e1a80 @ 004e1a80 ==== 
 * signature: undefined __thiscall FUN_004e1a80(void * this, void * param_1, void * param_2, int param_3)
 * body: 004e1a80-004e1b1b
 */

void __thiscall FUN_004e1a80(void *this,void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined **appuStack_2c [2];
  undefined1 local_24 [16];
  undefined **appuStack_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005714c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d9280(*(int *)((int)param_1 + 8));
  pvVar2 = (void *)(**(code **)((int)this + 0x2c))(local_24,uVar1);
  uStack_4 = 0;
  uVar3 = FUN_004e50e0(auStack_3c,param_3,pvVar2,param_2);
  (**(code **)((int)this + 0x30))(uVar1,uVar3);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  uStack_38 = 0x4e1af4;
  FUN_004cf650(appuStack_2c);
  appuStack_14[0] = &PTR_FUN_005778c0;
  uStack_38 = 0x4e1b09;
  FUN_004cf650(appuStack_14);
  ExceptionList = param_1;
  return;
}


