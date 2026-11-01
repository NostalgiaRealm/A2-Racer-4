
/* ==== FUN_004e0aaf @ 004e0aaf ==== 
 * signature: undefined __stdcall FUN_004e0aaf(void)
 * body: 004e0aaf-004e0b1f
 */

void FUN_004e0aaf(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  LPVOID in_stack_00000024;
  undefined4 uStack0000002c;
  undefined1 uStack00000110;
  void *in_stack_00000118;
  void *in_stack_0000011c;
  int in_stack_00000120;
  
  FUN_004e0d80(&stack0x00000078,*(undefined4 *)(unaff_ESI + unaff_EDI * 4));
  uStack00000110 = 2;
  iVar1 = FUN_004e50e0(&stack0x000000d8,in_stack_00000120,&stack0x00000078,in_stack_0000011c);
  *(undefined4 *)(unaff_ESI + unaff_EDI * 4) = *(undefined4 *)(iVar1 + 0x10);
  FUN_004cf650((undefined4 *)&stack0x000000e8);
  FUN_004cf650((undefined4 *)&stack0x00000088);
  uStack00000004 = 0x4e0cfa;
  FUN_0042f530();
  uStack00000008 = 0x4e0d04;
  FUN_0054b339(in_stack_00000024);
  uStack0000002c = 0;
  FUN_004cf650((undefined4 *)&stack0x00000070);
  ExceptionList = in_stack_00000118;
  return;
}


