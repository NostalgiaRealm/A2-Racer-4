
/* ==== FUN_005439a0 @ 005439a0 ==== 
 * signature: undefined __thiscall FUN_005439a0(void * this, float * param_1, float * param_2)
 * body: 005439a0-005439e1
 */

void __thiscall FUN_005439a0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  fVar3 = param_1[2];
  fVar4 = param_2[2];
  fVar5 = param_1[3];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2;
  *(float *)((int)this + 4) = fVar1 * fVar2;
  *(float *)((int)this + 8) = fVar3 * fVar4;
  *(float *)((int)this + 0xc) = fVar5 * fVar6;
  return;
}


