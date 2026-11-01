
/* ==== FUN_004e539a @ 004e539a ==== 
 * signature: undefined4 * __stdcall FUN_004e539a(void)
 * body: 004e539a-004e53af
 */

undefined4 * FUN_004e539a(void)

{
  undefined4 *puVar1;
  int in_EAX;
  char unaff_BL;
  int unaff_EBP;
  int unaff_ESI;
  void *in_stack_00000068;
  undefined1 uStack00000070;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 2;
  puVar1[4] = (uint)(in_EAX != unaff_ESI);
  *puVar1 = &PTR_FUN_005778c0;
  FUN_004028f0(&stack0x00000038,unaff_BL);
  uStack00000070 = 0;
  FUN_004028f0(&stack0x00000048,unaff_BL);
  ExceptionList = in_stack_00000068;
  return puVar1;
}


