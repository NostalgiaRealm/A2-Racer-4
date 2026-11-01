
/* ==== FUN_004f3220 @ 004f3220 ==== 
 * signature: undefined __thiscall FUN_004f3220(void * this, float * param_1)
 * body: 004f3220-004f325e
 */

void __thiscall FUN_004f3220(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  FUN_004f32e0((int)this);
  iVar3 = *(int *)((int)this + 0xa4);
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)(iVar3 + 0x74) = *(float *)(iVar3 + 0x74) + *param_1;
  *(float *)(iVar3 + 0x78) = fVar1 + *(float *)(iVar3 + 0x78);
  *(float *)(iVar3 + 0x7c) = fVar2 + *(float *)(iVar3 + 0x7c);
  return;
}


