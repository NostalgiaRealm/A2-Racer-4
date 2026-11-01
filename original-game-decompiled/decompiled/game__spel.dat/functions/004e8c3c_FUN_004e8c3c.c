
/* ==== FUN_004e8c3c @ 004e8c3c ==== 
 * signature: undefined4 * __stdcall FUN_004e8c3c(void)
 * body: 004e8c3c-004e8c58
 */

undefined4 * FUN_004e8c3c(void)

{
  undefined4 *this;
  int unaff_EBP;
  void *in_stack_000000b8;
  
  this = *(undefined4 **)(unaff_EBP + 8);
  FUN_004e0d80(this,(uint)(*(int *)(*(int *)(unaff_EBP + 0x10) + 0x10) == 0));
  *this = &PTR_FUN_005778c0;
  ExceptionList = in_stack_000000b8;
  return this;
}


