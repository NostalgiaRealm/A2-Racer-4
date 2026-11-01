
/* ==== FUN_004f8460 @ 004f8460 ==== 
 * signature: undefined __thiscall FUN_004f8460(void * this, undefined4 param_1, undefined4 * param_2, undefined4 * param_3, undefined8 * param_4)
 * body: 004f8460-004f84cc
 */

void __thiscall
FUN_004f8460(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
            undefined8 *param_4)

{
  void *this_00;
  void *pvVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057330b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xb8);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    pvVar1 = (void *)FUN_004f8290((int)this);
    FUN_0050db50(this_00,pvVar1,param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_c;
  return;
}


