
/* ==== FUN_004e9550 @ 004e9550 ==== 
 * signature: undefined __thiscall FUN_004e9550(void * this, undefined4 param_1)
 * body: 004e9550-004e95cd
 */

void __thiscall FUN_004e9550(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined *puStack_24;
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571f78;
  pvStack_c = ExceptionList;
  uStack_34 = 0x4e9572;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
  ppuStack_38 = &puStack_24;
  uStack_34 = param_1;
  uVar2 = (**(code **)(*piVar1 + 8))();
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
  (**(code **)(*piVar1 + 0x14))(param_1,uVar2,*(undefined4 *)((int)this + 0x10));
  uStack_18 = 0xffffffff;
  ppuStack_38 = &PTR_FUN_005778c0;
  FUN_004cf650(&ppuStack_38);
  ExceptionList = pvStack_20;
  return;
}


