
/* ==== FUN_0053f1a0 @ 0053f1a0 ==== 
 * signature: undefined __thiscall FUN_0053f1a0(void * this, float param_1, byte * param_2)
 * body: 0053f1a0-0053f401
 */

void __thiscall FUN_0053f1a0(void *this,float param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  float fVar6;
  float10 fVar7;
  undefined8 local_48;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  if ((*param_2 & 0xc) == 0) {
    *(byte **)((int)this + 0x94) = param_2;
    *(float *)((int)this + 0x90) = param_1;
  }
  else {
    *(byte **)((int)this + 0x90) = param_2;
    *(float *)((int)this + 0x94) = param_1;
  }
  iVar3 = *(int *)((int)this + 0x94);
  iVar4 = *(int *)((int)this + 0x90);
  fVar1 = *(float *)(iVar3 + 0xa8);
  fVar2 = *(float *)(iVar4 + 0xa8);
  fVar6 = *(float *)(iVar3 + 0xac) - *(float *)(iVar4 + 0xac);
  local_48 = (double)fVar6;
  *(float *)this = *(float *)(iVar3 + 0xa4) - *(float *)(iVar4 + 0xa4);
  *(float *)((int)this + 4) = fVar1 - fVar2;
  *(float *)((int)this + 8) = fVar6;
  fVar7 = FUN_004f9680(this);
  *(double *)((int)this + 0x30) = (double)fVar7;
  FUN_004fae60((void *)(*(int *)((int)this + 0x90) + 0x128),
               (float *)(*(int *)((int)this + 0x90) + 0x94),&local_18);
  FUN_004fae60((void *)(*(int *)((int)this + 0x94) + 0x128),
               (float *)(*(int *)((int)this + 0x94) + 0x94),&local_28);
  local_38 = local_28 - local_18;
  local_34 = local_24 - local_14;
  local_30 = local_20 - local_10;
  fVar7 = FUN_004f9680(&local_38);
  *(double *)((int)this + 0x58) = (double)fVar7;
  FUN_004fafa0((void *)(*(int *)((int)this + 0x90) + 0x128),&local_38,(float *)((int)this + 0x10));
  local_34 = local_34 * -1.0;
  local_30 = local_30 * -1.0;
  local_48 = (double)local_30;
  local_38 = local_38 * -1.0;
  FUN_004fafa0((void *)(*(int *)((int)this + 0x94) + 0x128),&local_38,(float *)((int)this + 0x20));
  iVar3 = *(int *)((int)this + 0x90);
  local_48 = (double)CONCAT44(*(float *)(iVar3 + 0x18) * *(float *)((int)this + 0x14),
                              *(float *)(iVar3 + 0x14) * *(float *)((int)this + 0x10));
  local_40 = *(float *)(iVar3 + 0x1c) * *(float *)((int)this + 0x18);
  fVar7 = FUN_004f9440((float *)&local_48);
  *(double *)((int)this + 0x60) = (double)fVar7;
  if ((float10)1e-19 <= fVar7) {
    *(double *)((int)this + 0x70) = (double)((float10)1.0 / fVar7);
  }
  else {
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0x3ff00000;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0x3ff00000;
  }
  FUN_0053f410(&local_48,(float *)((int)this + 0x20),(float *)(*(int *)((int)this + 0x94) + 0x14));
  fVar7 = FUN_004f9440((float *)&local_48);
  *(double *)((int)this + 0x68) = (double)fVar7;
  if ((float10)1e-19 <= fVar7) {
    *(double *)((int)this + 0x78) = (double)((float10)1.0 / fVar7);
  }
  else {
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0x3ff00000;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0x3ff00000;
  }
  *(double *)((int)this + 0x40) = (double)*(float *)(*(int *)((int)this + 0x94) + 0x20);
  pbVar5 = *(byte **)((int)this + 0x90);
  *(double *)((int)this + 0x50) = (double)*(float *)(*(int *)((int)this + 0x94) + 0x40);
  if ((*pbVar5 & 0xc) != 0) {
    *(double *)((int)this + 0x38) = *(double *)((int)this + 0x40) * 10000.0;
    *(double *)((int)this + 0x48) = *(double *)((int)this + 0x50) * 0.0001;
    *(double *)((int)this + 0x60) = *(double *)((int)this + 0x68) * 10000.0;
    *(double *)((int)this + 0x70) = *(double *)((int)this + 0x78) * 0.0001;
    return;
  }
  *(double *)((int)this + 0x38) = (double)*(float *)(pbVar5 + 0x20);
  *(double *)((int)this + 0x48) = (double)*(float *)(pbVar5 + 0x40);
  return;
}


