
/* ==== FUN_004e9031 @ 004e9031 ==== 
 * signature: undefined4 * __stdcall FUN_004e9031(void)
 * body: 004e9031-004e9051
 */

undefined4 * FUN_004e9031(void)

{
  undefined4 *this;
  int unaff_EBP;
  float10 fVar1;
  float10 fVar2;
  void *in_stack_000000b8;
  
  fVar2 = (float10)1.4426950408889634 * (float10)*(double *)(*(int *)(unaff_EBP + 0x10) + 0x10);
  fVar1 = ROUND(fVar2);
  fVar2 = (float10)f2xm1(fVar2 - fVar1);
  fVar1 = (float10)fscale((float10)1 + fVar2,fVar1);
  this = *(undefined4 **)(unaff_EBP + 8);
  FUN_004e0d60(this,SUB84((double)fVar1,0),(int)((ulonglong)(double)fVar1 >> 0x20));
  *this = &PTR_FUN_005778c0;
  ExceptionList = in_stack_000000b8;
  return this;
}


