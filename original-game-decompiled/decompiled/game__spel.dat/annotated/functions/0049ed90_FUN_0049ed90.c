
/* ==== FUN_0049ed90 @ 0049ed90 ==== 
 * signature: undefined __thiscall FUN_0049ed90(void * this, int param_1)
 * body: 0049ed90-0049ee35
 */

void __thiscall FUN_0049ed90(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056eb4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 8) = param_1;
  piVar1 = operator_new(param_1 * 0x38 + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00558643(piVar2,0x38,param_1,FUN_0049f360);
  }
  local_4 = 0xffffffff;
  *(int **)this = piVar2;
  FUN_004a0100((uint)(piVar2 != (int *)0x0),(byte *)s__s___d__Couldn_t_allocate_sound_t_005ae9c4);
  ExceptionList = local_c;
  return;
}


