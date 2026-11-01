
/* ==== FUN_0050de60 @ 0050de60 ==== 
 * signature: undefined4 * __thiscall FUN_0050de60(void * this, void * param_1, float * param_2, undefined4 * param_3, undefined4 * param_4, undefined8 * param_5)
 * body: 0050de60-0050df0b
 */

undefined4 * __thiscall
FUN_0050de60(void *this,void *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f2530(this,param_1,0,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_FUN_005789e4;
  *(undefined4 *)((int)this + 4) = 3;
  fVar1 = (float)param_3[0x18];
  fVar2 = *param_2;
  *(undefined **)((int)this + 0x8c) = &DAT_0074bde0;
  local_4 = 0;
  *(float *)((int)this + 0xa0) = fVar1 + fVar2;
  FUN_004f2dd0(this,*(int *)((int)param_1 + 0x18),(int)param_3);
  local_14 = *(undefined4 *)(*(int *)((int)this + 0xa4) + 0xc);
  local_10 = this;
  FUN_004f8540(*(void **)(*(int *)((int)this + 0xa4) + 0xc),&local_14);
  ExceptionList = local_c;
  return this;
}


