
/* ==== FUN_004f5210 @ 004f5210 ==== 
 * signature: undefined __thiscall FUN_004f5210(void * this, float param_1)
 * body: 004f5210-004f523f
 */

void __thiscall FUN_004f5210(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 / *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x20) = param_1;
  *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) * fVar1;
  *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * fVar1;
  *(float *)((int)this + 0x1c) = *(float *)((int)this + 0x1c) * fVar1;
  FUN_004f4a60(this);
  return;
}


