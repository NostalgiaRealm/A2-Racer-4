
/* ==== FUN_004fcef0 @ 004fcef0 ==== 
 * signature: undefined __thiscall FUN_004fcef0(void * this, float param_1)
 * body: 004fcef0-004fcf4c
 */

void __thiscall FUN_004fcef0(void *this,float param_1)

{
  float fVar1;
  
  if (0.0 < *(float *)((int)this + 0x138)) {
    *(float *)((int)this + 0x138) = *(float *)((int)this + 0x138) - param_1;
  }
  if ((0.0 < *(float *)((int)this + 0x134)) &&
     (fVar1 = *(float *)((int)this + 0x134) - param_1, *(float *)((int)this + 0x134) = fVar1,
     fVar1 <= 0.0)) {
    (**(code **)(*(int *)this + 0x40))(0);
  }
  return;
}


