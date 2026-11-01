
/* ==== FUN_004d3440 @ 004d3440 ==== 
 * signature: undefined __thiscall FUN_004d3440(void * this, undefined4 * param_1)
 * body: 004d3440-004d3563
 */

void __thiscall FUN_004d3440(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  void *local_1c [2];
  undefined4 uStack_14;
  undefined *puStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  puVar4 = param_1;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056fd28;
  puStack_c = ExceptionList;
  local_20 = *param_1;
  ExceptionList = &puStack_c;
  FUN_004d3210(local_1c,(int)(param_1 + 1));
  local_4 = 0;
  FUN_004d80c0();
  DAT_0074b888 = *puVar4;
  FUN_004d6730();
  piVar3 = DAT_0074b8b4;
  piVar2 = (int *)*DAT_0074b8b4;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    FUN_004d3e00(&DAT_0074b8b0,(int *)&param_1,piVar2);
    piVar2 = piVar1;
  }
  (**(code **)(*(int *)((int)this + 0x44) + 4))(&local_20);
  (**(code **)(*(int *)((int)this + 0x6c) + 4))(&stack0xffffffdc);
  (**(code **)(*(int *)((int)this + 0x30) + 4))(&stack0xffffffd8);
  (**(code **)(*(int *)((int)this + 0x80) + 4))(&stack0xffffffd4);
  FUN_004d6730();
  if (DAT_0074b8b8 == 0) {
    uStack_14 = 0xffffffff;
    FUN_004d31a0((int)&stack0xffffffd4);
    ExceptionList = local_1c[0];
    return;
  }
  puStack_c = &DAT_0074b8b0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&puStack_c,&DAT_005845c0);
}


