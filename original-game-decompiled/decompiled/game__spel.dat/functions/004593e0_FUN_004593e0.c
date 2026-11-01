
/* ==== FUN_004593e0 @ 004593e0 ==== 
 * signature: undefined4 * __thiscall FUN_004593e0(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 004593e0-00459496
 */

undefined4 * __thiscall
FUN_004593e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a80f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ded0(this,param_1,param_2,param_3,param_4);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00576840;
  iVar1 = FUN_004b75a0(&DAT_00712130,s_par_Bird_005a5130);
  *(int *)((int)this + 0x60) = iVar1;
  FUN_004602e0(0.0,(float)*(int *)(DAT_0073b168 + iVar1 * 9) - 1.0);
  lVar3 = __ftol();
  *(int *)((int)this + 100) = (int)lVar3;
  fVar2 = FUN_004602e0(0.0,0.1);
  *(float *)((int)this + 0x70) = (float)fVar2;
  FUN_004602e0(0.0,1.0);
  lVar3 = __ftol();
  *(int *)((int)this + 0x74) = (int)lVar3;
  ExceptionList = local_c;
  return this;
}


