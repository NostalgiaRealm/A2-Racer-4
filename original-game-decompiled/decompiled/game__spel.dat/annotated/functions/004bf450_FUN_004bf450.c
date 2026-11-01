
/* ==== FUN_004bf450 @ 004bf450 ==== 
 * signature: undefined __thiscall FUN_004bf450(void * this, float * param_1)
 * body: 004bf450-004bf470
 */

void __thiscall FUN_004bf450(void *this,float *param_1)

{
  *(float *)this = *(float *)this / *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) / param_1[1];
  *(float *)((int)this + 8) = *(float *)((int)this + 8) / param_1[2];
  return;
}


