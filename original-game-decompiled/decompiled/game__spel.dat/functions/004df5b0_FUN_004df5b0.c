
/* ==== FUN_004df5b0 @ 004df5b0 ==== 
 * signature: undefined __thiscall FUN_004df5b0(void * this, void * param_1, void * param_2, int param_3)
 * body: 004df5b0-004df639
 */

void __thiscall FUN_004df5b0(void *this,void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [8];
  undefined4 uStack_34;
  undefined **appuStack_2c [2];
  undefined1 local_24 [16];
  undefined **appuStack_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005710c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = (void *)(**(code **)((int)this + 0x2c))(local_24);
  uStack_4 = 0;
  uVar2 = FUN_004e50e0(auStack_3c,param_3,pvVar1,param_2);
  (**(code **)((int)this + 0x30))(uVar2);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  uStack_34 = 0x4df613;
  FUN_004cf650(appuStack_2c);
  appuStack_14[0] = &PTR_FUN_005778c0;
  uStack_34 = 0x4df628;
  FUN_004cf650(appuStack_14);
  ExceptionList = param_1;
  return;
}


