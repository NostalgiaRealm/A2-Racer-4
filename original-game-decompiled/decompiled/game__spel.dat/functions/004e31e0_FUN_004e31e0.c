
/* ==== FUN_004e31e0 @ 004e31e0 ==== 
 * signature: undefined __thiscall FUN_004e31e0(void * this, int param_1)
 * body: 004e31e0-004e3279
 */

void __thiscall FUN_004e31e0(void *this,int param_1)

{
  void *pvVar1;
  void *unaff_retaddr;
  undefined **appuStack_3c [6];
  undefined **local_24 [6];
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005717b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = (void *)(**(code **)(*(int *)this + 8))(local_24,param_1);
  pvStack_c = (void *)0x0;
  FUN_004e50e0(&stack0xffffffbc,param_1,pvVar1,unaff_retaddr);
  (**(code **)(*(int *)this + 0xc))();
  uStack_4 = uStack_4 & 0xffffff00;
  appuStack_3c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_3c);
  uStack_4 = 0xffffffff;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650(local_24);
  ExceptionList = pvStack_c;
  return;
}


