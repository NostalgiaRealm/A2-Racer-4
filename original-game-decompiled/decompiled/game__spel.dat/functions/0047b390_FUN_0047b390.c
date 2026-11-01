
/* ==== FUN_0047b390 @ 0047b390 ==== 
 * signature: undefined __thiscall FUN_0047b390(void * this, int param_1)
 * body: 0047b390-0047b408
 */

void __thiscall FUN_0047b390(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ba6b;
  local_c = ExceptionList;
  piVar2 = (int *)0x0;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + 8) = 0;
    *(int *)((int)this + 0xc) = param_1;
    piVar1 = operator_new(param_1 * 0x18 + 4);
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      piVar2 = piVar1 + 1;
      *piVar1 = param_1;
      FUN_00558643(piVar2,0x18,param_1,FUN_0047a0a0);
    }
    *(int **)((int)this + 4) = piVar2;
  }
  ExceptionList = local_c;
  return;
}


