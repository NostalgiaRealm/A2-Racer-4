
/* ==== FUN_004e095d @ 004e095d ==== 
 * signature: undefined4 * __stdcall FUN_004e095d(void)
 * body: 004e095d-004e099a
 */

undefined4 * FUN_004e095d(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  int unaff_EDI;
  LPVOID in_stack_00000018;
  void *in_stack_00000024;
  undefined1 uStack0000002c;
  undefined4 *in_stack_00000034;
  
  *(undefined8 *)(in_stack_00000034 + 4) = *(undefined8 *)(unaff_EDI + in_EAX * 8);
  in_stack_00000034[2] = unaff_EBX;
  *in_stack_00000034 = &PTR_FUN_005778c0;
  uStack0000002c = 0;
  FUN_0042f530();
  FUN_0054b339(in_stack_00000018);
  ExceptionList = in_stack_00000024;
  return in_stack_00000034;
}


