
/* ==== FUN_00441970 @ 00441970 ==== 
 * signature: ushort __thiscall FUN_00441970(void * this, float param_1, float param_2)
 * body: 00441970-004419b0
 */

ushort __thiscall FUN_00441970(void *this,float param_1,float param_2)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = *(float *)this;
  uVar2 = (ushort)(param_1 < fVar1) << 8 | (ushort)(NAN(param_1) || NAN(fVar1)) << 10 |
          (ushort)(param_1 == fVar1) << 0xe;
  if (param_1 >= fVar1) {
    fVar1 = *(float *)((int)this + 8);
    uVar2 = (ushort)(param_1 < fVar1) << 8 | (ushort)(NAN(param_1) || NAN(fVar1)) << 10 |
            (ushort)(param_1 == fVar1) << 0xe;
    if (param_1 < fVar1 || (param_1 == fVar1) != 0) {
      fVar1 = *(float *)((int)this + 4);
      uVar2 = (ushort)(param_2 < fVar1) << 8 | (ushort)(NAN(param_2) || NAN(fVar1)) << 10 |
              (ushort)(param_2 == fVar1) << 0xe;
      if (param_2 >= fVar1) {
        fVar1 = *(float *)((int)this + 0xc);
        uVar2 = (ushort)(param_2 < fVar1) << 8 | (ushort)(NAN(param_2) || NAN(fVar1)) << 10 |
                (ushort)(param_2 == fVar1) << 0xe;
        if (param_2 < fVar1 || (param_2 == fVar1) != 0) {
          return CONCAT11((char)(uVar2 >> 8),1);
        }
      }
    }
  }
  return uVar2;
}


