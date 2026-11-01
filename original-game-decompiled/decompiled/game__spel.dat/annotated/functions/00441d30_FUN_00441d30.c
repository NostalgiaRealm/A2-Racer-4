
/* ==== FUN_00441d30 @ 00441d30 ==== 
 * signature: undefined __thiscall FUN_00441d30(void * this, float * param_1, float * param_2)
 * body: 00441d30-00441df3
 */

void __thiscall FUN_00441d30(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (*(float *)((int)this + 0xa4) - *(float *)((int)this + 0x9c)) /
          (float)(*(int *)((int)this + 0xd0) + -10);
  fVar1 = param_2[1];
  fVar2 = *(float *)((int)this + 0xc0);
  fVar3 = param_2[2];
  fVar4 = *(float *)((int)this + 0xc4);
  fVar5 = *(float *)((int)this + 0xb4);
  fVar6 = *(float *)((int)this + 0xb8);
  *param_1 = (*param_2 - *(float *)((int)this + 0xbc)) / fVar7 + *(float *)((int)this + 0xb0);
  param_1[1] = (fVar1 - fVar2) / fVar7 + fVar5;
  param_1[2] = -(fVar3 - fVar4) / fVar7 + fVar6;
  return;
}


