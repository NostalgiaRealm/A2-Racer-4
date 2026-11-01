
/* ==== FUN_00549910 @ 00549910 ==== 
 * signature: undefined __thiscall FUN_00549910(void * this, float * param_1)
 * body: 00549910-0054993a
 */

void __thiscall FUN_00549910(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)this = -*param_1;
  *(float *)((int)this + 4) = -fVar1;
  *(float *)((int)this + 8) = -fVar2;
  return;
}


