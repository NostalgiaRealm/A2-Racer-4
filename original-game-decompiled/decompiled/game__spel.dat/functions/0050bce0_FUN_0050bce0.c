
/* ==== FUN_0050bce0 @ 0050bce0 ==== 
 * signature: undefined __thiscall FUN_0050bce0(void * this, int * param_1, float * param_2, float * param_3)
 * body: 0050bce0-0050bd2a
 */

void __thiscall FUN_0050bce0(void *this,int *param_1,float *param_2,float *param_3)

{
  *param_2 = (float)*(double *)((int)this + param_1[3] * 8 + 0x140) * (float)*param_1;
  param_2[1] = (float)*(double *)((int)this + param_1[3] * 8 + 0x140) * (float)param_1[1];
  param_2[2] = (float)*(double *)((int)this + param_1[3] * 8 + 0x140) * (float)param_1[2];
  *param_3 = (float)*(double *)((int)this + param_1[4] * 8 + 0x140);
  return;
}


