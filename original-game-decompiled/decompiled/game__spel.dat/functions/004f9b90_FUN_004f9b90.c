
/* ==== FUN_004f9b90 @ 004f9b90 ==== 
 * signature: undefined __thiscall FUN_004f9b90(void * this, int param_1, float param_2)
 * body: 004f9b90-004f9c00
 */

void __thiscall FUN_004f9b90(void *this,int param_1,float param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  float10 fVar5;
  float10 fVar6;
  int local_10 [4];
  
  fVar5 = (float10)fcos((float10)param_2);
  local_10[0] = 1;
  local_10[3] = 1;
  local_10[1] = 2;
  local_10[2] = 0;
  pdVar1 = (double *)((int)this + local_10[param_1] * 8);
  pdVar2 = (double *)((int)this + local_10[param_1 + 1] * 8);
  fVar6 = (float10)fsin((float10)param_2);
  dVar3 = *pdVar1;
  dVar4 = *pdVar2;
  *pdVar2 = (double)(fVar5 * (float10)*pdVar2 + (float10)(double)fVar6 * (float10)*pdVar1);
  *(double *)((int)this + local_10[param_1] * 8) =
       (double)(fVar5 * (float10)dVar3 - (float10)(double)fVar6 * (float10)dVar4);
  return;
}


