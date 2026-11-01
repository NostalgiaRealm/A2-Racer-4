
/* ==== FUN_004a1f30 @ 004a1f30 ==== 
 * signature: undefined __thiscall FUN_004a1f30(void * this, float * param_1)
 * body: 004a1f30-004a1ff4
 */

void __thiscall FUN_004a1f30(void *this,float *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34 [10];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ee3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a5ba0(&local_40);
  local_4c = *param_1;
  local_48 = param_1[1];
  local_44 = param_1[2];
  FUN_004a4180(&local_4c);
  FUN_004fb220(local_34,*(int *)((int)this + 8),(double)local_4c,(double)local_48,(double)local_44);
  local_3c = local_34;
  local_38 = local_34;
  this_00 = operator_new(0x90);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004a5bb0(this_00,*(int *)((int)this + 0x2c),&local_40);
  }
  *(undefined4 **)((int)this + 0x10) = puVar1;
  ExceptionList = local_c;
  return;
}


