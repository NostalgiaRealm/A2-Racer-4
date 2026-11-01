
/* ==== FUN_004f9200 @ 004f9200 ==== 
 * signature: float10 __cdecl FUN_004f9200(float param_1)
 * body: 004f9200-004f9298
 */

float10 __cdecl FUN_004f9200(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uStack_4;
  
  uStack_4 = (int)((ulonglong)(double)param_1 >> 0x20);
  fVar1 = (float10)param_1 * (float10)0.5;
  fVar2 = (float10)(double)((ulonglong)((0x7ff00000 - uStack_4 >> 1) + 0x1ff00000) << 0x20);
  fVar2 = (((float10)0.5 - fVar1 * fVar2 * fVar2) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  return (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
}


