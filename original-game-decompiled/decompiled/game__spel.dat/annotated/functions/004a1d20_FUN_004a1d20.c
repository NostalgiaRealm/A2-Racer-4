
/* ==== FUN_004a1d20 @ 004a1d20 ==== 
 * signature: undefined __thiscall FUN_004a1d20(void * this, float * param_1)
 * body: 004a1d20-004a1dcd
 */

void __thiscall FUN_004a1d20(void *this,float *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_30 [4];
  float local_20 [4];
  float local_10 [4];
  
  local_30[0] = 1.0;
  local_30[1] = 0.0;
  local_30[2] = 0.0;
  local_20[0] = 0.0;
  local_20[1] = -1.0;
  local_20[2] = 0.0;
  local_10[0] = 0.0;
  local_10[1] = 0.0;
  local_10[2] = 1.0;
  iVar1 = *(int *)(*(int *)((int)this + 8) + 0xa4);
  fVar2 = FUN_004f43e0(iVar1,local_30);
  fVar3 = FUN_004f43e0(iVar1,local_20);
  fVar4 = FUN_004f43e0(iVar1,local_10);
  *param_1 = (float)fVar2;
  param_1[1] = (float)fVar3;
  param_1[2] = (float)fVar4;
  return;
}


