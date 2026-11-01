
/* ==== FUN_0047c2e0 @ 0047c2e0 ==== 
 * signature: undefined __thiscall FUN_0047c2e0(void * this, float * param_1)
 * body: 0047c2e0-0047c3b5
 */

void __thiscall FUN_0047c2e0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  *(float *)((int)this + 0x54) = *(float *)((int)this + 0x7c) * param_1[4];
  *(float *)((int)this + 0x50) = param_1[3];
  *(float *)((int)this + 0x58) = *(float *)((int)this + 0x80) * param_1[5];
  pfVar5 = (float *)FUN_0047bc20((int)this);
  *(float *)((int)this + 0x44) = *pfVar5 * param_1[4] + *param_1;
  iVar6 = FUN_0047bc20((int)this);
  *(float *)((int)this + 0x48) = *(float *)(iVar6 + 4) * param_1[5] + param_1[1];
  iVar6 = FUN_0047bc20((int)this);
  *(float *)((int)this + 0x4c) = *(float *)(iVar6 + 8) + param_1[2];
  pfVar5 = (float *)FUN_0047bc30((int)this);
  fVar1 = param_1[7];
  fVar2 = pfVar5[1];
  fVar3 = param_1[8];
  fVar4 = pfVar5[2];
  *(float *)((int)this + 0x5c) = param_1[6] * *pfVar5;
  *(float *)((int)this + 0x60) = fVar1 * fVar2;
  *(float *)((int)this + 100) = fVar3 * fVar4;
  pfVar5 = (float *)FUN_0047bc40((int)this);
  fVar1 = param_1[10];
  fVar2 = pfVar5[1];
  fVar3 = param_1[0xb];
  fVar4 = pfVar5[2];
  *(float *)((int)this + 0x68) = *pfVar5 + param_1[9];
  *(float *)((int)this + 0x6c) = fVar1 + fVar2;
  *(float *)((int)this + 0x70) = fVar3 + fVar4;
  return;
}


