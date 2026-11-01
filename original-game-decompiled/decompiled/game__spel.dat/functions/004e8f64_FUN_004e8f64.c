
/* ==== FUN_004e8f64 @ 004e8f64 ==== 
 * signature: undefined __thiscall FUN_004e8f64(void * this)
 * body: 004e8f64-004e8f96
 */

void __thiscall FUN_004e8f64(void *this)

{
  undefined4 *puVar1;
  int unaff_EBP;
  float10 fVar2;
  void *in_stack_000000b8;
  
  fVar2 = (float10)FUN_0055aaf8(this);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(double *)(puVar1 + 4) = (double)fVar2;
  puVar1[2] = 1;
  *puVar1 = &PTR_FUN_005778c0;
  ExceptionList = in_stack_000000b8;
  return;
}


