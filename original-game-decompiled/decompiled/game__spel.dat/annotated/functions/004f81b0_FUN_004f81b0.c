
/* ==== FUN_004f81b0 @ 004f81b0 ==== 
 * signature: undefined4 * __thiscall FUN_004f81b0(void * this, int * param_1)
 * body: 004f81b0-004f8218
 */

undefined4 * __thiscall FUN_004f81b0(void *this,int *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005732ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xa0);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_0050d8c0(this_00,this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


