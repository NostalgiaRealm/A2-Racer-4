
/* ==== FUN_004191c0 @ 004191c0 ==== 
 * signature: undefined __cdecl FUN_004191c0(int param_1)
 * body: 004191c0-0041922a
 */

void __cdecl FUN_004191c0(int param_1)

{
  float *this;
  int iVar1;
  float10 fVar2;
  
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  this = (float *)(&DAT_005cea7c + param_1 * 0x294);
  FUN_00403040(this,1);
  fVar2 = FUN_004a6800(0x7128b0);
  FUN_00402e20(this,(float)(fVar2 * (float10)75.0));
  FUN_00402ea0(this,0.0);
  FUN_00402e40(this,0.0);
  FUN_00427b90(iVar1,this);
  return;
}


