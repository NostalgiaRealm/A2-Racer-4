
/* ==== FUN_004e90b5 @ 004e90b5 ==== 
 * signature: undefined4 * __stdcall FUN_004e90b5(void)
 * body: 004e90b5-004e911c
 */

undefined4 * FUN_004e90b5(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  int unaff_EBP;
  undefined1 *puStack0000000c;
  void *in_stack_000000b8;
  undefined4 uStack000000c0;
  undefined4 in_stack_fffffff0;
  char *in_stack_fffffff4;
  
  puStack0000000c = &stack0xfffffff0;
  FUN_00479930(*(void **)(unaff_EBP + 0x10),&stack0xfffffff0);
  puVar1 = FUN_004e9350(&stack0x00000048,in_stack_fffffff0,in_stack_fffffff4);
  this = *(undefined4 **)(unaff_EBP + 8);
  uStack000000c0 = 3;
  FUN_004cf330(this,puVar1);
  *this = &PTR_FUN_005778c0;
  uStack000000c0 = 0xffffffff;
  FUN_004028f0(&stack0x00000048,'\x01');
  ExceptionList = in_stack_000000b8;
  return this;
}


