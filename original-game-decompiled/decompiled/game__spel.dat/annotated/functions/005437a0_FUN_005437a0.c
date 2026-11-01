
/* ==== FUN_005437a0 @ 005437a0 ==== 
 * signature: undefined __thiscall FUN_005437a0(void * this, int param_1, int param_2, float * param_3)
 * body: 005437a0-00543904
 */

void __thiscall FUN_005437a0(void *this,int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != 0) {
    fVar1 = *param_3;
    fVar2 = *(float *)((int)this + 0x78);
    fVar3 = *(float *)((int)this + 0x7c);
    *(float *)(param_1 + 0x94) = *(float *)((int)this + 0x74) * fVar1 + *(float *)(param_1 + 0x94);
    *(float *)(param_1 + 0x98) = fVar2 * fVar1 + *(float *)(param_1 + 0x98);
    *(float *)(param_1 + 0x9c) = fVar3 * fVar1 + *(float *)(param_1 + 0x9c);
    fVar1 = param_3[1];
    fVar2 = *(float *)((int)this + 0x88);
    fVar3 = *(float *)((int)this + 0x8c);
    *(float *)(param_1 + 0x94) = *(float *)((int)this + 0x84) * fVar1 + *(float *)(param_1 + 0x94);
    *(float *)(param_1 + 0x98) = fVar2 * fVar1 + *(float *)(param_1 + 0x98);
    *(float *)(param_1 + 0x9c) = fVar3 * fVar1 + *(float *)(param_1 + 0x9c);
  }
  if (param_2 != 0) {
    fVar3 = -*param_3;
    fVar1 = *(float *)((int)this + 0xa8);
    fVar2 = *(float *)((int)this + 0xac);
    *(float *)(param_2 + 0x94) = *(float *)((int)this + 0xa4) * fVar3 + *(float *)(param_2 + 0x94);
    *(float *)(param_2 + 0x98) = fVar1 * fVar3 + *(float *)(param_2 + 0x98);
    *(float *)(param_2 + 0x9c) = fVar2 * fVar3 + *(float *)(param_2 + 0x9c);
    fVar3 = -param_3[1];
    fVar1 = *(float *)((int)this + 0xb8);
    fVar2 = *(float *)((int)this + 0xbc);
    *(float *)(param_2 + 0x94) = *(float *)((int)this + 0xb4) * fVar3 + *(float *)(param_2 + 0x94);
    *(float *)(param_2 + 0x98) = fVar1 * fVar3 + *(float *)(param_2 + 0x98);
    *(float *)(param_2 + 0x9c) = fVar2 * fVar3 + *(float *)(param_2 + 0x9c);
  }
  return;
}


