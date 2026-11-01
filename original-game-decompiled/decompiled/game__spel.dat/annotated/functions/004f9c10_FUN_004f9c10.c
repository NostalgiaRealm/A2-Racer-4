
/* ==== FUN_004f9c10 @ 004f9c10 ==== 
 * signature: undefined __thiscall FUN_004f9c10(void * this, int param_1, float param_2)
 * body: 004f9c10-004f9c80
 */

void __thiscall FUN_004f9c10(void *this,int param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_10 [4];
  
  fVar5 = (float10)fcos((float10)param_2);
  local_10[0] = 1;
  local_10[3] = 1;
  local_10[1] = 2;
  local_10[2] = 0;
  pfVar1 = (float *)((int)this + local_10[param_1] * 4);
  pfVar2 = (float *)((int)this + local_10[param_1 + 1] * 4);
  fVar6 = (float10)fsin((float10)param_2);
  fVar3 = *pfVar1;
  fVar4 = *pfVar2;
  *pfVar2 = (float)((float10)*pfVar1 * (float10)(double)fVar6 + (float10)*pfVar2 * fVar5);
  *(float *)((int)this + local_10[param_1] * 4) =
       (float)((float10)fVar3 * fVar5 - (float10)fVar4 * (float10)(double)fVar6);
  return;
}


