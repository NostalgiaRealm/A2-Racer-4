
/* ==== FUN_0053d2c0 @ 0053d2c0 ==== 
 * signature: undefined __thiscall FUN_0053d2c0(void * this, float * param_1)
 * body: 0053d2c0-0053d366
 */

void __thiscall FUN_0053d2c0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = *(int *)((int)this + 0x40);
  fVar1 = *(float *)((int)this + 0x38);
  fVar5 = *(float *)(iVar4 + 0x84) * fVar1;
  fVar6 = *(float *)(iVar4 + 0x88) * fVar1;
  *param_1 = *(float *)(iVar4 + 0x80) * fVar1;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  fVar1 = *(float *)((int)this + 0x3c);
  fVar2 = *(float *)(iVar4 + 0x94);
  fVar3 = *(float *)(iVar4 + 0x98);
  *param_1 = *(float *)(iVar4 + 0x90) * fVar1 + *param_1;
  param_1[1] = fVar5 + fVar2 * fVar1;
  param_1[2] = fVar3 * fVar1 + fVar6;
  FUN_004f9680(param_1);
  if (*(char *)((int)this + 0x34) == '\x01') {
    FUN_0053cf50(this,param_1);
  }
  return;
}


