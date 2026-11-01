
/* ==== FUN_004037a0 @ 004037a0 ==== 
 * signature: undefined __cdecl FUN_004037a0(int param_1, undefined4 param_2, int param_3)
 * body: 004037a0-0040382e
 */

void __cdecl FUN_004037a0(int param_1,undefined4 param_2,int param_3)

{
  undefined *this;
  float10 fVar1;
  
  this = &DAT_005cea7c + param_1 * 0x294;
  if (*(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) < (float)param_3) {
    fVar1 = FUN_004a6800(0x7128b0);
    FUN_00402f00(this,(float)(fVar1 * (float10)100.0));
    FUN_00402e40(this,0.0);
    return;
  }
  fVar1 = FUN_004a6800(0x7128b0);
  FUN_00402e80(this,(float)(fVar1 * (float10)200.0));
  FUN_00402ea0(this,0.0);
  return;
}


