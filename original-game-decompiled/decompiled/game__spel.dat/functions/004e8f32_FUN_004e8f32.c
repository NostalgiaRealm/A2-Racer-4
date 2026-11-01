
/* ==== FUN_004e8f32 @ 004e8f32 ==== 
 * signature: undefined __stdcall FUN_004e8f32(void)
 * body: 004e8f32-004e8f63
 */

void FUN_004e8f32(void)

{
  double dVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  float10 fVar3;
  void *in_stack_000000b8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  dVar1 = *(double *)(*(int *)(unaff_EBP + 0x10) + 0x10);
  puVar2[2] = 1;
  *puVar2 = &PTR_FUN_005778c0;
  fVar3 = (float10)fpatan((float10)dVar1,(float10)1);
  *(double *)(puVar2 + 4) = (double)fVar3;
  ExceptionList = in_stack_000000b8;
  return;
}


