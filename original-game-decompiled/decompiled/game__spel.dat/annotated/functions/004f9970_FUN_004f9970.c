
/* ==== FUN_004f9970 @ 004f9970 ==== 
 * signature: undefined __thiscall FUN_004f9970(void * this, float * param_1, float * param_2)
 * body: 004f9970-004f99c6
 */

void __thiscall FUN_004f9970(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = -(param_1[1] * param_2[1] + param_2[2] * param_1[2] + *param_1 * *param_2);
  fVar1 = param_2[1];
  fVar2 = param_1[1];
  fVar3 = param_2[2];
  fVar4 = param_1[2];
  *(float *)this = *param_2 * fVar5 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar5 + fVar2;
  *(float *)((int)this + 8) = fVar3 * fVar5 + fVar4;
  return;
}


