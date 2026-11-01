
/* ==== FUN_0053ff58 @ 0053ff58 ==== 
 * signature: float10 __stdcall FUN_0053ff58(undefined4 param_1, undefined4 param_2, double param_3, double param_4, double param_5, undefined4 param_6, undefined4 param_7, double param_8, double param_9, double param_10)
 * body: 0053ff58-0053ffde
 */

float10 FUN_0053ff58(undefined4 param_1,undefined4 param_2,double param_3,double param_4,
                    double param_5,undefined4 param_6,undefined4 param_7,double param_8,
                    double param_9,double param_10)

{
  double dVar1;
  uint in_EAX;
  int unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  void *in_stack_00000050;
  void *in_stack_00000054;
  
  FUN_004fad20(in_stack_00000050,(double *)(unaff_ESI + 0x28),(double *)(in_EAX & 0xffffff2c));
  FUN_004fad20(in_stack_00000054,(double *)(unaff_ESI + 0x48),&param_3);
  fVar2 = (float10)param_3 - (float10)param_8;
  fVar3 = (float10)param_4 - (float10)param_9;
  fVar4 = (float10)param_5 - (float10)param_10;
  dVar1 = (double)(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar2 = (fVar2 * (float10)*(double *)(unaff_ESI + 0x68) +
          fVar4 * (float10)*(double *)(unaff_ESI + 0x78) +
          fVar3 * (float10)*(double *)(unaff_ESI + 0x70)) * (float10)1.2000000476837158;
  if ((float10)dVar1 <= ABS(fVar2) * fVar2) {
    fVar2 = SQRT((float10)dVar1);
  }
  return fVar2;
}


