
/* ==== FUN_00506550 @ 00506550 ==== 
 * signature: undefined __thiscall FUN_00506550(void * this, float * param_1, float * param_2)
 * body: 00506550-00506580
 */

void __thiscall FUN_00506550(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  fVar3 = param_1[2];
  fVar4 = param_2[2];
  *(float *)this = *param_1 - *param_2;
  *(float *)((int)this + 4) = fVar1 - fVar2;
  *(float *)((int)this + 8) = fVar3 - fVar4;
  return;
}


