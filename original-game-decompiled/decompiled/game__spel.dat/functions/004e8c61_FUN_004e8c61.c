
/* ==== FUN_004e8c61 @ 004e8c61 ==== 
 * signature: undefined4 * __stdcall FUN_004e8c61(void)
 * body: 004e8c61-004e8cc8
 */

undefined4 * FUN_004e8c61(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  int unaff_EBP;
  void *in_stack_000000b8;
  undefined4 uStack000000c0;
  
  puVar1 = FUN_004d7610(&stack0x00000098);
  this = *(undefined4 **)(unaff_EBP + 8);
  uStack000000c0 = 0;
  FUN_004cf330(this,puVar1);
  *this = &PTR_FUN_005778c0;
  uStack000000c0 = 0xffffffff;
  FUN_004028f0(&stack0x00000098,'\x01');
  ExceptionList = in_stack_000000b8;
  return this;
}


