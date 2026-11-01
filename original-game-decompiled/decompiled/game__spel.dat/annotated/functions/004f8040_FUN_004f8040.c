
/* ==== FUN_004f8040 @ 004f8040 ==== 
 * signature: int * __thiscall FUN_004f8040(void * this, int * param_1)
 * body: 004f8040-004f80f1
 */

int * __thiscall FUN_004f8040(void *this,int *param_1)

{
  void *pvVar1;
  int *piVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573276;
  local_c = ExceptionList;
  if ((param_1[4] == 0) && (param_1[6] == 0)) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x98);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_004fb9f0(pvVar1,this,param_1);
      ExceptionList = local_c;
      return piVar2;
    }
  }
  else {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0xa8);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_004fbb00(pvVar1,this,param_1);
      ExceptionList = local_c;
      return piVar2;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


