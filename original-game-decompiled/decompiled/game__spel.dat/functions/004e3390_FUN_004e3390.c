
/* ==== FUN_004e3390 @ 004e3390 ==== 
 * signature: undefined __thiscall FUN_004e3390(void * this, undefined * * param_1)
 * body: 004e3390-004e3409
 */

void __thiscall FUN_004e3390(void *this,undefined **param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined **ppuStack_34;
  undefined1 auStack_24 [8];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005717c8;
  pvStack_c = ExceptionList;
  ppuStack_34 = (undefined **)0x4e33b2;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
  ppuStack_34 = param_1;
  uVar2 = (**(code **)(*piVar1 + 8))(auStack_24);
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
  (**(code **)(*piVar1 + 0xc))(param_1,uVar2);
  uStack_14 = 0xffffffff;
  ppuStack_34 = &PTR_FUN_005778c0;
  FUN_004cf650(&ppuStack_34);
  ExceptionList = pvStack_1c;
  return;
}


