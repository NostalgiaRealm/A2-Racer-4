
/* ==== FUN_0050d990 @ 0050d990 ==== 
 * signature: undefined __thiscall FUN_0050d990(void * this, double * param_1)
 * body: 0050d990-0050db4e
 */

void __thiscall FUN_0050d990(void *this,double *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte *this_00;
  byte *this_01;
  float fVar4;
  double dVar5;
  float10 fVar6;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = *(byte **)(*(int *)((int)this + 0x14) + 0xa4);
  this_01 = *(byte **)(*(int *)((int)this + 0x44) + 0xa4);
  FUN_004fadc0(this_00 + 0x128,(float *)((int)this + 0x28),&local_28);
  FUN_004fadc0(this_01 + 0x128,(float *)((int)this + 0x58),&local_48);
  local_78 = (float)((float10)local_28 - (float10)local_48);
  local_74 = (float)((float10)local_20 - (float10)local_40);
  local_70 = (float)((float10)local_18 - (float10)local_38);
  fVar6 = FUN_004f9680(&local_78);
  if (fVar6 < (float10)1e-10) {
    return;
  }
  fVar1 = *(float *)((int)this + 0x74);
  fVar2 = *(float *)((int)this + 0x7c);
  FUN_004f3560(this_01,this_00,(float *)((int)this + 0x58),(float *)((int)this + 0x28),&local_58);
  fVar4 = local_78 * local_58 + local_54 * local_74 + local_50 * local_70;
  if (0.0 <= fVar4) {
    fVar3 = *(float *)((int)this + 0x98);
  }
  else {
    fVar3 = *(float *)((int)this + 0x80);
  }
  fVar2 = (float)((fVar6 - (float10)fVar1) * (float10)fVar2) - fVar3 * fVar4;
  fVar4 = -fVar2;
  fVar1 = -*(float *)((int)this + 0x9c);
  if ((fVar1 <= fVar4) && (fVar1 = fVar4, *(float *)((int)this + 0x9c) < fVar4)) {
    fVar1 = *(float *)((int)this + 0x9c);
  }
  dVar5 = (double)fVar2 * *param_1;
  fVar1 = fVar1 * (float)*param_1;
  local_68 = local_78 * (float)dVar5;
  local_64 = local_74 * (float)dVar5;
  local_60 = local_70 * (float)dVar5;
  FUN_004f41b0(this_01,&local_48,&local_68);
  local_68 = local_78 * fVar1;
  local_64 = local_74 * fVar1;
  local_60 = local_70 * fVar1;
  FUN_004f41b0(this_00,&local_28,&local_68);
  return;
}


