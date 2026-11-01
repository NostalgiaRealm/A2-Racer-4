
/* ==== FUN_00459c50 @ 00459c50 ==== 
 * signature: undefined2 __thiscall FUN_00459c50(void * this, float param_1, float param_2)
 * body: 00459c50-00459d8e
 */

ushort __thiscall FUN_00459c50(void *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 extraout_EAX;
  float10 fVar4;
  
  fVar2 = param_1 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar2;
  fVar1 = *(float *)((int)this + 8);
  if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
    return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
           (ushort)(fVar2 == fVar1) << 0xe;
  }
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x38) =
       (float)((float10)*(float *)((int)this + 0x38) - fVar4 * (float10)100.0);
  fVar4 = FUN_004a6800(0x7128b0);
  fVar4 = fVar4 * (float10)*(float *)((int)this + 0x38) + (float10)*(float *)((int)this + 0x10);
  *(float *)((int)this + 0x10) = (float)fVar4;
  if (fVar4 < (float10)param_2) {
    *(float *)((int)this + 0x10) = param_2;
    *(float *)((int)this + 0x38) = -(*(float *)((int)this + 0x38) * 0.8);
  }
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x34) =
       (float)((float10)*(float *)((int)this + 0x34) - fVar4 * (float10)*(float *)((int)this + 0x34)
              );
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x3c) =
       (float)((float10)*(float *)((int)this + 0x3c) - fVar4 * (float10)*(float *)((int)this + 0x3c)
              );
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0xc) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0x34) + (float10)*(float *)((int)this + 0xc))
  ;
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x14) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0x3c) + (float10)*(float *)((int)this + 0x14)
              );
  uVar3 = FUN_00558625();
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x24) =
       (float)(fVar4 * (float10)((int)uVar3 % 10) + (float10)*(float *)((int)this + 0x24));
  uVar3 = FUN_00558625();
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x28) =
       (float)(fVar4 * (float10)((int)uVar3 % 10) + (float10)*(float *)((int)this + 0x28));
  uVar3 = FUN_00558625();
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x2c) =
       (float)(fVar4 * (float10)((int)uVar3 % 10) + (float10)*(float *)((int)this + 0x2c));
  return (short)CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}


