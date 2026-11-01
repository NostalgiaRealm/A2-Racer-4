
/* ==== FUN_004bf420 @ 004bf420 ==== 
 * signature: undefined __thiscall FUN_004bf420(void * this, float * param_1)
 * body: 004bf420-004bf440
 */

void __thiscall FUN_004bf420(void *this,float *param_1)

{
  *(float *)this = *param_1 + *(float *)this;
  *(float *)((int)this + 4) = param_1[1] + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1[2] + *(float *)((int)this + 8);
  return;
}


