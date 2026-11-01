
/* ==== FUN_00503e90 @ 00503e90 ==== 
 * signature: undefined __thiscall FUN_00503e90(void * this, int param_1)
 * body: 00503e90-00503f09
 */

void __thiscall FUN_00503e90(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + param_1 * 4 + 0x100);
  fVar1 = *(float *)((int)this + param_1 * 0x10 + 0x5c);
  fVar2 = *(float *)((int)this + param_1 * 0x10 + 0x60);
  *(float *)(iVar3 + 0x84) =
       *(float *)((int)this + param_1 * 0x10 + 0x58) - *(float *)(iVar3 + 0xa4);
  *(float *)(iVar3 + 0x88) = fVar1 - *(float *)(iVar3 + 0xa8);
  *(float *)(iVar3 + 0x8c) = fVar2 - *(float *)(iVar3 + 0xac);
  fVar1 = *(float *)((int)this + param_1 * 0x10 + 0x3c);
  fVar2 = *(float *)((int)this + param_1 * 0x10 + 0x40);
  *(float *)(iVar3 + 0x74) =
       *(float *)((int)this + param_1 * 0x10 + 0x38) - *(float *)(iVar3 + 0x94);
  *(float *)(iVar3 + 0x78) = fVar1 - *(float *)(iVar3 + 0x98);
  *(float *)(iVar3 + 0x7c) = fVar2 - *(float *)(iVar3 + 0x9c);
  return;
}


