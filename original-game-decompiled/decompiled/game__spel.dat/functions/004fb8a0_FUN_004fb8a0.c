
/* ==== FUN_004fb8a0 @ 004fb8a0 ==== 
 * signature: undefined4 * __thiscall FUN_004fb8a0(void * this, undefined4 param_1, int * param_2)
 * body: 004fb8a0-004fb923
 */

undefined4 * __thiscall FUN_004fb8a0(void *this,undefined4 param_1,int *param_2)

{
  undefined4 *this_00;
  void *this_01;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fb830(this,param_1,param_2);
  this_00 = (undefined4 *)((int)this + 0x78);
  local_4 = 0;
  *this_00 = &PTR_FUN_005784f4;
  *(undefined ***)this = &PTR_FUN_005784d4;
  *this_00 = &PTR_FUN_005784d0;
  this_01 = (void *)param_2[4];
  *(void **)((int)this + 0x7c) = this_01;
  if (this_01 != (void *)0x0) {
    FUN_0050d160(this_01,-(uint)(this != (void *)0x0) & (uint)this_00);
    FUN_004fb950(this_00,*(int *)((int)this + 0x7c));
  }
  ExceptionList = local_c;
  return this;
}


