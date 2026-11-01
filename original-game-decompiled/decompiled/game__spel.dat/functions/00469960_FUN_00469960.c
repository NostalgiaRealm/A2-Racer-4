
/* ==== FUN_00469960 @ 00469960 ==== 
 * signature: undefined __thiscall FUN_00469960(void * this, int param_1)
 * body: 00469960-00469a0b
 */

void __thiscall FUN_00469960(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056acfb;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    if (*(int *)this != 0) {
      ExceptionList = &local_c;
      FUN_00469a10(this);
    }
    piVar1 = operator_new(param_1 * 0x10 + 4);
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = piVar1 + 1;
      *piVar1 = param_1;
      FUN_00558643(piVar2,0x10,param_1,FUN_004695d0);
    }
    local_4 = 0xffffffff;
    *(int **)this = piVar2;
    FUN_004a6980((uint)(piVar2 != (int *)0x0),(byte *)s__s___d__Could_not_allocate__d_an_005a7b04);
  }
  *(int *)((int)this + 4) = param_1;
  ExceptionList = local_c;
  return;
}


