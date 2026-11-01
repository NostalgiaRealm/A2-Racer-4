
/* ==== FUN_004e8eff @ 004e8eff ==== 
 * signature: undefined __stdcall FUN_004e8eff(void)
 * body: 004e8eff-004e8f31
 */

void FUN_004e8eff(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  float10 fVar2;
  void *in_stack_000000b8;
  
  fVar2 = (float10)FUN_00558550();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(double *)(puVar1 + 4) = (double)fVar2;
  puVar1[2] = 1;
  *puVar1 = &PTR_FUN_005778c0;
  ExceptionList = in_stack_000000b8;
  return;
}


