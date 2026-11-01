
/* ==== FUN_004e8ffd @ 004e8ffd ==== 
 * signature: undefined __stdcall FUN_004e8ffd(void)
 * body: 004e8ffd-004e9030
 */

void FUN_004e8ffd(void)

{
  undefined4 *puVar1;
  float10 fVar2;
  int unaff_EBP;
  void *in_stack_000000b8;
  
  fVar2 = (float10)log2((float10)*(double *)(*(int *)(unaff_EBP + 0x10) + 0x10));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 1;
  *puVar1 = &PTR_FUN_005778c0;
  *(double *)(puVar1 + 4) = (double)((float10)0.3010299956639812 * fVar2);
  ExceptionList = in_stack_000000b8;
  return;
}


