
/* ==== FUN_004eaf50 @ 004eaf50 ==== 
 * signature: int __thiscall FUN_004eaf50(void * this, float param_1)
 * body: 004eaf50-004eaf73
 */

int __thiscall FUN_004eaf50(void *this,float param_1)

{
  float10 fVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  float10 fVar3;
  
  fVar3 = FUN_004eadd0(this,(int)param_1,&param_1);
  fVar1 = (float10)param_1;
  uVar2 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                           (ushort)(fVar3 == fVar1) << 0xe) >> 8);
  if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


