
/* ==== FUN_004f84d0 @ 004f84d0 ==== 
 * signature: undefined __thiscall FUN_004f84d0(void * this, float * param_1, undefined4 * param_2, undefined4 * param_3, undefined8 * param_4)
 * body: 004f84d0-004f853c
 */

void __thiscall
FUN_004f84d0(void *this,float *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  void *this_00;
  void *pvVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057332b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xb8);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    pvVar1 = (void *)FUN_004f8290((int)this);
    FUN_0050de60(this_00,pvVar1,param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_c;
  return;
}


