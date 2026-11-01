
/* ==== FUN_004a45d0 @ 004a45d0 ==== 
 * signature: undefined __thiscall FUN_004a45d0(void * this, float param_1)
 * body: 004a45d0-004a45f2
 */

void __thiscall FUN_004a45d0(void *this,float param_1)

{
  double dVar1;
  float fVar2;
  
  fVar2 = param_1 + *(float *)((int)this + 0x74);
  *(float *)((int)this + 0x78) = param_1;
  *(float *)((int)this + 0x74) = fVar2;
  dVar1 = (double)fVar2;
  FUN_004f8380(*(void **)((int)this + 0x14),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


