
/* ==== FUN_004e911d @ 004e911d ==== 
 * signature: undefined4 * __stdcall FUN_004e911d(void)
 * body: 004e911d-004e91a8
 */

undefined4 * FUN_004e911d(void)

{
  char cVar1;
  undefined4 *this;
  uint uVar2;
  int unaff_EBP;
  char *pcVar3;
  char cStack0000000c;
  undefined1 uStack0000000d;
  char cStack00000018;
  void *in_stack_000000b8;
  undefined4 uStack000000c0;
  
  uStack0000000d = 0;
  cStack0000000c = (char)*(undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x10);
  cStack00000018 = cStack0000000c;
  FUN_004028f0(&stack0x00000018,'\0');
  uVar2 = 0xffffffff;
  pcVar3 = &stack0x0000000c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&stack0x00000018,(undefined4 *)&stack0x0000000c,~uVar2 - 1);
  this = *(undefined4 **)(unaff_EBP + 8);
  uStack000000c0 = 4;
  FUN_004cf330(this,&stack0x00000018);
  *this = &PTR_FUN_005778c0;
  uStack000000c0 = 0xffffffff;
  FUN_004028f0(&stack0x00000018,'\x01');
  ExceptionList = in_stack_000000b8;
  return this;
}


