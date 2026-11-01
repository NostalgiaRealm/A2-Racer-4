
/* ==== FUN_004e905c @ 004e905c ==== 
 * signature: undefined4 * __stdcall FUN_004e905c(void)
 * body: 004e905c-004e90b4
 */

undefined4 * FUN_004e905c(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  int unaff_EBP;
  void *in_stack_000000b8;
  undefined4 uStack000000c0;
  
  puVar1 = FUN_00479930(*(void **)(unaff_EBP + 0x10),&stack0x00000038);
  this = *(undefined4 **)(unaff_EBP + 8);
  uStack000000c0 = 2;
  FUN_004e0d80(this,*(undefined4 *)(puVar1 + 8));
  *this = &PTR_FUN_005778c0;
  uStack000000c0 = 0xffffffff;
  FUN_004028f0(&stack0x00000038,'\x01');
  ExceptionList = in_stack_000000b8;
  return this;
}


