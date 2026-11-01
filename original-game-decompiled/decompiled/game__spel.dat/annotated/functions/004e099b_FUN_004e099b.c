
/* ==== FUN_004e099b @ 004e099b ==== 
 * signature: undefined4 * __stdcall FUN_004e099b(void)
 * body: 004e099b-004e09e8
 */

undefined4 * FUN_004e099b(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int unaff_EDI;
  LPVOID in_stack_00000018;
  void *in_stack_00000024;
  undefined1 uStack0000002c;
  undefined4 *in_stack_00000034;
  
  puVar1 = *(undefined1 **)(unaff_EDI + in_EAX * 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00712694;
  }
  in_stack_00000034[2] = 4;
  in_stack_00000034[4] = puVar1;
  *in_stack_00000034 = &PTR_FUN_005778c0;
  uStack0000002c = 0;
  FUN_0042f530();
  FUN_0054b339(in_stack_00000018);
  ExceptionList = in_stack_00000024;
  return in_stack_00000034;
}


