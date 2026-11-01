
/* ==== FUN_004e784f @ 004e784f ==== 
 * signature: undefined __stdcall FUN_004e784f(void)
 * body: 004e784f-004e78a1
 */

void FUN_004e784f(void)

{
  char cVar1;
  undefined1 *this;
  undefined1 *unaff_EBX;
  void *unaff_ESI;
  int unaff_EDI;
  undefined1 in_stack_00000010;
  undefined1 *in_stack_00000014;
  void *in_stack_00000020;
  undefined1 uStack00000028;
  undefined1 *puStack00000030;
  
  FUN_004d71d0(unaff_ESI,&stack0x00000010);
  this = operator_new(0x10);
  uStack00000028 = 1;
  puStack00000030 = this;
  if (this == unaff_EBX) {
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
  }
  else {
    *(undefined1 **)(this + 4) = unaff_EBX;
    *this = in_stack_00000010;
    *(undefined1 **)(this + 8) = unaff_EBX;
    *(undefined1 **)(this + 0xc) = unaff_EBX;
    FUN_004093c0(this,&stack0x00000010,(uint)unaff_EBX,0xffffffff);
    *(undefined1 **)(unaff_EDI + 0x10) = this;
  }
  if (in_stack_00000014 != unaff_EBX) {
    cVar1 = in_stack_00000014[-1];
    if ((cVar1 == (char)unaff_EBX) || (cVar1 == -1)) {
      FUN_0054b339(in_stack_00000014 + -1);
    }
    else {
      in_stack_00000014[-1] = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00000020;
  return;
}


