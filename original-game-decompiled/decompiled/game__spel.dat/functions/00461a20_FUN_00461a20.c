
/* ==== FUN_00461a20 @ 00461a20 ==== 
 * signature: uint __thiscall FUN_00461a20(void * this, float param_1)
 * body: 00461a20-00461b01
 */

uint __thiscall FUN_00461a20(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  undefined4 in_EAX;
  undefined2 extraout_var;
  float10 fVar4;
  
  fVar3 = param_1 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar3;
  fVar1 = *(float *)((int)this + 8);
  if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),
                    (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                    (ushort)(fVar3 == fVar1) << 0xe);
  }
  fVar1 = ABS(*(float *)(DAT_006fba58 * 0xf0 + DAT_00715e50 + 0xc4));
  fVar4 = FUN_004602e0(fVar1 * 0.03,fVar1 * 0.05);
  *(float *)((int)this + 0x70) = (float)fVar4;
  *(undefined4 *)((int)this + 0x74) = 0x3f800000;
  fVar4 = FUN_004602e0(fVar1 * 0.14,fVar1 * 0.18);
  *(float *)((int)this + 0x78) = (float)fVar4;
  if (*(float *)((int)this + 0x70) < 0.1) {
    *(undefined4 *)((int)this + 0x70) = 0x3dcccccd;
  }
  fVar2 = (float10)0.1;
  if (fVar4 < fVar2 != 0) {
    *(undefined4 *)((int)this + 0x78) = 0x3dcccccd;
  }
  return CONCAT31((int3)(CONCAT22(extraout_var,
                                  (ushort)(fVar4 < fVar2) << 8 |
                                  (ushort)(NAN(fVar4) || NAN(fVar2)) << 10 |
                                  (ushort)(fVar4 == fVar2) << 0xe) >> 8),1);
}


