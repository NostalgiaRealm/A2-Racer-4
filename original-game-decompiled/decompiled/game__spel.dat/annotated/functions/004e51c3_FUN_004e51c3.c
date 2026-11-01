
/* ==== FUN_004e51c3 @ 004e51c3 ==== 
 * signature: undefined4 * __stdcall FUN_004e51c3(void)
 * body: 004e51c3-004e5202
 */

undefined4 * FUN_004e51c3(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  char unaff_BL;
  int unaff_EBP;
  void *in_stack_00000068;
  undefined1 uStack00000070;
  
  puVar1 = FUN_0047c9a0(&stack0x00000058,&stack0x00000048,(int)&stack0x00000038);
  this = *(undefined4 **)(unaff_EBP + 8);
  uStack00000070 = 5;
  FUN_004cf330(this,puVar1);
  *this = &PTR_FUN_005778c0;
  uStack00000070 = 2;
  FUN_004028f0(&stack0x00000058,unaff_BL);
  FUN_004028f0(&stack0x00000038,unaff_BL);
  uStack00000070 = 0;
  FUN_004028f0(&stack0x00000048,unaff_BL);
  ExceptionList = in_stack_00000068;
  return this;
}


