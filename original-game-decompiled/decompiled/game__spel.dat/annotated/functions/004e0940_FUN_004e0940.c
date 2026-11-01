
/* ==== FUN_004e0940 @ 004e0940 ==== 
 * signature: undefined4 * __stdcall FUN_004e0940(void)
 * body: 004e0940-004e095c
 */

undefined4 * FUN_004e0940(void)

{
  undefined4 uVar1;
  int in_EAX;
  int unaff_EDI;
  void *in_stack_00000024;
  undefined1 uStack0000002c;
  undefined4 *in_stack_00000034;
  
  uVar1 = *(undefined4 *)(unaff_EDI + in_EAX * 4);
  in_stack_00000034[2] = 4;
  in_stack_00000034[4] = uVar1;
  *in_stack_00000034 = &PTR_FUN_005778c0;
  uStack0000002c = 0;
  FUN_004da4d0((int)&stack0x00000014);
  ExceptionList = in_stack_00000024;
  return in_stack_00000034;
}


