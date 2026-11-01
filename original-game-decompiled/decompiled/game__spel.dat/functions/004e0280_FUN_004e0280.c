
/* ==== FUN_004e0280 @ 004e0280 ==== 
 * signature: undefined __thiscall FUN_004e0280(void * this, void * param_1, void * param_2, int param_3)
 * body: 004e0280-004e0337
 */

void __thiscall FUN_004e0280(void *this,void *param_1,void *param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined **appuStack_2c [2];
  undefined1 auStack_24 [16];
  undefined **appuStack_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571250;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*(int *)this + 0x44))();
  if (cVar1 == '\0') {
    iVar4 = *(int *)((int)this + 0x2c);
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0xc) + *(int *)((int)this + 0x2c);
  }
  pvVar2 = (void *)FUN_004d9950(auStack_24,iVar4,*(int *)((int)this + 0x20));
  uStack_4 = 0;
  iVar3 = FUN_004e50e0(&stack0xffffffc4,param_3,pvVar2,param_2);
  FUN_004d9780(iVar4,iVar3);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_2c);
  appuStack_14[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_14);
  ExceptionList = param_1;
  return;
}


