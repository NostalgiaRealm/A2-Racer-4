
/* ==== FUN_004e19e0 @ 004e19e0 ==== 
 * signature: undefined __thiscall FUN_004e19e0(void * this, void * param_1, void * param_2, undefined4 param_3, int param_4)
 * body: 004e19e0-004e1a71
 */

void __thiscall FUN_004e19e0(void *this,void *param_1,void *param_2,undefined4 param_3,int param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined **appuStack_2c [2];
  undefined1 local_24 [16];
  undefined **appuStack_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005714a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = (void *)(**(code **)((int)this + 0x2c))(local_24,param_3);
  uStack_4 = 0;
  uVar2 = FUN_004e50e0(auStack_3c,param_4,pvVar1,param_2);
  (**(code **)((int)this + 0x30))(param_3,uVar2);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  uStack_38 = 0x4e1a4a;
  FUN_004cf650(appuStack_2c);
  appuStack_14[0] = &PTR_FUN_005778c0;
  uStack_38 = 0x4e1a5f;
  FUN_004cf650(appuStack_14);
  ExceptionList = param_1;
  return;
}


