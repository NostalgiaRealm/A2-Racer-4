
/* ==== FUN_004eb7a0 @ 004eb7a0 ==== 
 * signature: int __thiscall FUN_004eb7a0(void * this, int param_1, float param_2)
 * body: 004eb7a0-004eb7c8
 */

int __thiscall FUN_004eb7a0(void *this,int param_1,float param_2)

{
  float10 fVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_004eb4d0(this,param_1,(int)param_2,&param_2);
  fVar1 = (float10)param_2;
  uVar2 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                           (ushort)(fVar3 == fVar1) << 0xe) >> 8);
  if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


