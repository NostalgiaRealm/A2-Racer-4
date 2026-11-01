
/* ==== FUN_004e07d9 @ 004e07d9 ==== 
 * signature: undefined __stdcall FUN_004e07d9(void)
 * body: 004e07d9-004e0850
 */

void FUN_004e07d9(void)

{
  char cVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int unaff_EBX;
  int unaff_EDI;
  LPVOID in_stack_00000010;
  int in_stack_00000020;
  void *in_stack_0000002c;
  void *in_stack_00000040;
  
  FUN_00559d4e(*(LPVOID *)(unaff_EDI + unaff_EBX * 4));
  puVar2 = FUN_00479930(in_stack_00000040,&stack0x0000001c);
  puVar3 = *(uint **)(puVar2 + 4);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)&DAT_0057629c;
  }
  puVar3 = FUN_005686b8(puVar3);
  *(uint **)(unaff_EDI + unaff_EBX * 4) = puVar3;
  if (in_stack_00000020 != 0) {
    cVar1 = *(char *)(in_stack_00000020 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(in_stack_00000020 + -1));
    }
    else {
      *(char *)(in_stack_00000020 + -1) = cVar1 + -1;
    }
  }
  FUN_0054b339(in_stack_00000010);
  ExceptionList = in_stack_0000002c;
  return;
}


