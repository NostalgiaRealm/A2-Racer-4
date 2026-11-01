
/* ==== FUN_0050db50 @ 0050db50 ==== 
 * signature: undefined4 * __thiscall FUN_0050db50(void * this, void * param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4, undefined8 * param_5)
 * body: 0050db50-0050dbee
 */

undefined4 * __thiscall
FUN_0050db50(void *this,void *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined4 local_14;
  void *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f2530(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_FUN_005789ac;
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 0xa0) = param_3[0x18];
  local_4 = 0;
  FUN_004f2dd0(this,*(int *)((int)param_1 + 0x18),(int)param_3);
  local_14 = *(undefined4 *)(*(int *)((int)this + 0xa4) + 0xc);
  local_10 = this;
  FUN_004f8540(*(void **)(*(int *)((int)this + 0xa4) + 0xc),&local_14);
  ExceptionList = local_c;
  return this;
}


