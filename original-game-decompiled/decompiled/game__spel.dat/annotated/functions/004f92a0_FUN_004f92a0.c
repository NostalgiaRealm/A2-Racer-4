
/* ==== FUN_004f92a0 @ 004f92a0 ==== 
 * signature: float10 __cdecl FUN_004f92a0(undefined4 param_1, int param_2)
 * body: 004f92a0-004f9353
 */

float10 __cdecl FUN_004f92a0(undefined4 param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(double)CONCAT44(param_2,param_1) * (float10)0.5;
  fVar2 = (float10)(double)((ulonglong)((0x7ff00000 - param_2 >> 1) + 0x1ff00000) << 0x20);
  fVar2 = (((float10)0.5 - fVar1 * fVar2 * fVar2) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  return (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
}


