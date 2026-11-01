
/* ==== FUN_004f4460 @ 004f4460 ==== 
 * signature: undefined __thiscall FUN_004f4460(void * this, float * param_1)
 * body: 004f4460-004f44b1
 */

void __thiscall FUN_004f4460(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)((int)this + 0x94) =
       *(float *)((int)this + 0x34) * *param_1 + *(float *)((int)this + 0x94);
  *(float *)((int)this + 0x98) = *(float *)((int)this + 0x38) * fVar1 + *(float *)((int)this + 0x98)
  ;
  *(float *)((int)this + 0x9c) = *(float *)((int)this + 0x3c) * fVar2 + *(float *)((int)this + 0x9c)
  ;
  return;
}


