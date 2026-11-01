
/* ==== FUN_00559d7d @ 00559d7d ==== 
 * signature: float10 __cdecl FUN_00559d7d(double param_1)
 * body: 00559d7d-00559e4b
 */

float10 __cdecl FUN_00559d7d(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  uVar2 = FUN_0055fae8();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_0055f9b0(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_0055fae8();
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = FUN_0055f2c0(0xc,param_1);
        return fVar4;
      }
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_0055fae8();
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = FUN_0055f313(uVar5,0xc,param_1,dVar1,uVar2);
  return fVar4;
}


