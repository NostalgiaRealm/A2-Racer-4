
/* ==== FUN_004e8c59 @ 004e8c59 ==== 
 * signature: undefined4 * __stdcall FUN_004e8c59(void)
 * body: 004e8c59-004e8c60
 */

undefined4 * FUN_004e8c59(void)

{
  undefined4 *this;
  double dVar1;
  int unaff_EBP;
  void *in_stack_000000b8;
  
  dVar1 = (double)*(int *)(*(int *)(unaff_EBP + 0x10) + 0x10);
  this = *(undefined4 **)(unaff_EBP + 8);
  FUN_004e0d60(this,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  *this = &PTR_FUN_005778c0;
  ExceptionList = in_stack_000000b8;
  return this;
}


