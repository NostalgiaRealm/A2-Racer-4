
/* ==== FUN_004e8cc9 @ 004e8cc9 ==== 
 * signature: undefined4 * __stdcall FUN_004e8cc9(void)
 * body: 004e8cc9-004e8d3b
 */

undefined4 * FUN_004e8cc9(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  int unaff_EBP;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  void *in_stack_000000b8;
  undefined4 uStack000000c0;
  
  uStack0000000c = *(undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x10);
  uStack00000010 = *(undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x14);
  puVar1 = FUN_004d7610(&stack0x00000078);
  this = *(undefined4 **)(unaff_EBP + 8);
  uStack000000c0 = 1;
  FUN_004cf330(this,puVar1);
  *this = &PTR_FUN_005778c0;
  uStack000000c0 = 0xffffffff;
  FUN_004028f0(&stack0x00000078,'\x01');
  ExceptionList = in_stack_000000b8;
  return this;
}


