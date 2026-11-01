
/* ==== FUN_0045ff70 @ 0045ff70 ==== 
 * signature: undefined4 __thiscall FUN_0045ff70(void * this, float param_1)
 * body: 0045ff70-00460048
 */

undefined4 __thiscall FUN_0045ff70(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar5;
  
  fVar2 = param_1 + *(float *)((int)this + 4);
  fVar1 = *(float *)((int)this + 8);
  *(float *)((int)this + 4) = fVar2;
  uVar5 = (undefined2)((uint)fVar2 >> 0x10);
  if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
    return CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                          (ushort)(fVar2 == fVar1) << 0xe);
  }
  fVar1 = (*(float *)((int)this + 0x18) / *(float *)((int)this + 0x30)) * param_1 +
          *(float *)((int)this + 0x34);
  *(float *)((int)this + 0x34) = fVar1;
  fVar3 = ((*(float *)((int)this + 0x70) * *(float *)((int)this + 0x30) +
           *(float *)((int)this + 0x1c)) / *(float *)((int)this + 0x30)) * param_1 +
          *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x38) = fVar3;
  fVar4 = (*(float *)((int)this + 0x20) / *(float *)((int)this + 0x30)) * param_1 +
          *(float *)((int)this + 0x3c);
  *(float *)((int)this + 0x3c) = fVar4;
  *(float *)((int)this + 0xc) = fVar1 * param_1 + *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x10) = fVar3 * param_1 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = fVar4 * param_1 + *(float *)((int)this + 0x14);
  fVar1 = *(float *)((int)this + 8) * 0.5;
  if (fVar1 < fVar2 != 0) {
    fVar3 = *(float *)((int)this + 8) * 0.5;
    *(float *)((int)this + 0x4c) = 1.0 - (fVar2 - fVar3) / fVar3;
  }
  return CONCAT31((int3)(CONCAT22(uVar5,(ushort)(fVar1 < fVar2) << 8 |
                                        (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                        (ushort)(fVar1 == fVar2) << 0xe) >> 8),1);
}


