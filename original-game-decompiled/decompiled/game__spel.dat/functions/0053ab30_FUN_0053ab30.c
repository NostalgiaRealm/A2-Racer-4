
/* ==== FUN_0053ab30 @ 0053ab30 ==== 
 * signature: undefined __thiscall FUN_0053ab30(void * this, uint param_1)
 * body: 0053ab30-0053abb6
 */

void __thiscall FUN_0053ab30(void *this,uint param_1)

{
  void *this_00;
  undefined4 *puVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0057420b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x10))(1);
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  this_00 = operator_new(0x30);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0050a9c0(this_00,param_1);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x9c) = puVar1;
  FUN_0053a580(this,param_1);
  ExceptionList = pvStack_c;
  return;
}


