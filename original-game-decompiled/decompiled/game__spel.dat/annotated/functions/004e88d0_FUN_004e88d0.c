
/* ==== FUN_004e88d0 @ 004e88d0 ==== 
 * signature: undefined __thiscall FUN_004e88d0(void * this, undefined4 param_1)
 * body: 004e88d0-004e8973
 */

void __thiscall FUN_004e88d0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined **appuStack_2c [2];
  undefined1 auStack_24 [16];
  void *pvStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571e80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
  (**(code **)(*piVar1 + 8))(auStack_24,param_1);
  pvStack_c = (void *)0x0;
  uVar2 = FUN_004e8bd0(&stack0xffffffbc,*(int *)((int)this + 0x10));
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
  (**(code **)(*piVar1 + 0xc))(param_1,uVar2);
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  FUN_004cf650((undefined4 *)&stack0xffffffbc);
  pvStack_c = (void *)0xffffffff;
  appuStack_2c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_2c);
  ExceptionList = pvStack_14;
  return;
}


