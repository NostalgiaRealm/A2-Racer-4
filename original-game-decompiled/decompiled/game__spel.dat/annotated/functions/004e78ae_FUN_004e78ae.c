
/* ==== FUN_004e78ae @ 004e78ae ==== 
 * signature: undefined __stdcall FUN_004e78ae(void)
 * body: 004e78ae-004e78f3
 */

void FUN_004e78ae(void)

{
  char cVar1;
  int unaff_EBX;
  void *unaff_ESI;
  int unaff_EDI;
  int in_stack_00000014;
  void *in_stack_00000020;
  
  FUN_004d7450(unaff_ESI,unaff_EDI + 0x10);
  if (in_stack_00000014 != unaff_EBX) {
    cVar1 = *(char *)(in_stack_00000014 + -1);
    if ((cVar1 == (char)unaff_EBX) || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(in_stack_00000014 + -1));
    }
    else {
      *(char *)(in_stack_00000014 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00000020;
  return;
}


