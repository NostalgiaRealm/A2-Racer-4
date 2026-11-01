
/* ==== FUN_004f8100 @ 004f8100 ==== 
 * signature: undefined4 * __thiscall FUN_004f8100(void * this, int * param_1)
 * body: 004f8100-004f81a7
 */

undefined4 * __thiscall FUN_004f8100(void *this,int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573296;
  local_c = ExceptionList;
  if (param_1[4] == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x78);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      puVar2 = FUN_004fb830(pvVar1,this,param_1);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  else {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x80);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      puVar2 = FUN_004fb8a0(pvVar1,this,param_1);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


