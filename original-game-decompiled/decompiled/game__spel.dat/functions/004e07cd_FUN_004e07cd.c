
/* ==== FUN_004e07cd @ 004e07cd ==== 
 * signature: undefined __stdcall FUN_004e07cd(void)
 * body: 004e07cd-004e07d8
 */

void FUN_004e07cd(void)

{
  int unaff_EBX;
  int unaff_EDI;
  LPVOID in_stack_00000010;
  void *in_stack_0000002c;
  int in_stack_00000040;
  
  *(undefined8 *)(unaff_EDI + unaff_EBX * 8) = *(undefined8 *)(in_stack_00000040 + 0x10);
  FUN_0054b339(in_stack_00000010);
  ExceptionList = in_stack_0000002c;
  return;
}


