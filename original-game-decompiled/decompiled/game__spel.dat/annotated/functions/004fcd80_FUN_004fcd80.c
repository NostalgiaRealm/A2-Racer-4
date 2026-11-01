
/* ==== FUN_004fcd80 @ 004fcd80 ==== 
 * signature: undefined __thiscall FUN_004fcd80(void * this, float param_1, float param_2)
 * body: 004fcd80-004fcdd8
 */

void __thiscall FUN_004fcd80(void *this,float param_1,float param_2)

{
  float10 fVar1;
  
  if ((*(int *)((int)this + 0x130) == 0) && (*(float *)((int)this + 0x138) <= 0.0)) {
    fVar1 = FUN_004f9470((double *)(*(int *)((int)this + 4) + 0xd0));
    (**(code **)(*(int *)this + 0x40))((float)(fVar1 * (float10)param_1));
    *(float *)((int)this + 0x134) = param_1;
    *(float *)((int)this + 0x138) = param_1 + param_2;
  }
  return;
}


