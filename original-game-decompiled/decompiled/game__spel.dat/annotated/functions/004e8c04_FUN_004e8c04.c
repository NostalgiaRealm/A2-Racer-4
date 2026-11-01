
/* ==== FUN_004e8c04 @ 004e8c04 ==== 
 * signature: undefined4 * __stdcall FUN_004e8c04(void)
 * body: 004e8c04-004e8c3b
 */

undefined4 * FUN_004e8c04(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *this;
  void *in_stack_000000b8;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (*(int *)(iVar1 + 8) == 2) {
    this = *(undefined4 **)(unaff_EBP + 8);
    FUN_004e0d80(this,-*(int *)(iVar1 + 0x10));
  }
  else {
    this = *(undefined4 **)(unaff_EBP + 8);
    FUN_004e0d60(this,SUB84(-*(double *)(iVar1 + 0x10),0),
                 (int)((ulonglong)-*(double *)(iVar1 + 0x10) >> 0x20));
  }
  *this = &PTR_FUN_005778c0;
  ExceptionList = in_stack_000000b8;
  return this;
}


