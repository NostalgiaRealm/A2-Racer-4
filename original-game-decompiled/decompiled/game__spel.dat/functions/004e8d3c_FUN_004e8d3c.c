
/* ==== FUN_004e8d3c @ 004e8d3c ==== 
 * signature: undefined4 * __stdcall FUN_004e8d3c(void)
 * body: 004e8d3c-004e8d70
 */

undefined4 * FUN_004e8d3c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  longlong lVar2;
  void *in_stack_000000b8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 2;
  lVar2 = __ftol();
  puVar1[4] = (int)lVar2;
  *puVar1 = &PTR_FUN_005778c0;
  ExceptionList = in_stack_000000b8;
  return puVar1;
}


