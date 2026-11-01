
/* ==== FUN_004e924a @ 004e924a ==== 
 * signature: undefined4 * __stdcall FUN_004e924a(void)
 * body: 004e924a-004e92df
 */

undefined4 * FUN_004e924a(void)

{
  char cVar1;
  undefined4 *this;
  undefined1 *puVar2;
  int unaff_EBP;
  undefined1 *puStack0000000c;
  int in_stack_000000ac;
  void *in_stack_000000b8;
  undefined4 uStack000000c0;
  undefined4 in_stack_fffffff0;
  char *in_stack_fffffff4;
  
  puStack0000000c = &stack0xfffffff0;
  FUN_00479930(*(void **)(unaff_EBP + 0x10),&stack0xfffffff0);
  puVar2 = FUN_004e9440(&stack0x000000a8,in_stack_fffffff0,in_stack_fffffff4);
  this = *(undefined4 **)(unaff_EBP + 8);
  uStack000000c0 = 6;
  FUN_004cf330(this,puVar2);
  *this = &PTR_FUN_005778c0;
  if (in_stack_000000ac == 0) {
    ExceptionList = in_stack_000000b8;
    return this;
  }
  cVar1 = *(char *)(in_stack_000000ac + -1);
  if ((cVar1 != '\0') && (cVar1 != -1)) {
    *(char *)(in_stack_000000ac + -1) = cVar1 + -1;
    ExceptionList = in_stack_000000b8;
    return this;
  }
  FUN_0054b339((char *)(in_stack_000000ac + -1));
  ExceptionList = in_stack_000000b8;
  return this;
}


