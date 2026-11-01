
/* ==== FUN_004e8e6c @ 004e8e6c ==== 
 * signature: undefined __stdcall FUN_004e8e6c(void)
 * body: 004e8e6c-004e8e9b
 */

void FUN_004e8e6c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  float10 fVar2;
  void *in_stack_000000b8;
  
  fVar2 = (float10)fsin((float10)*(double *)(*(int *)(unaff_EBP + 0x10) + 0x10));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 1;
  *puVar1 = &PTR_FUN_005778c0;
  *(double *)(puVar1 + 4) = (double)fVar2;
  ExceptionList = in_stack_000000b8;
  return;
}


