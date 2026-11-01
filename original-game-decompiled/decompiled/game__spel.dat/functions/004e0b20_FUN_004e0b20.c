
/* ==== FUN_004e0b20 @ 004e0b20 ==== 
 * signature: undefined __stdcall FUN_004e0b20(void)
 * body: 004e0b20-004e0b92
 */

void FUN_004e0b20(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  LPVOID in_stack_00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000038;
  undefined1 uStack00000110;
  void *in_stack_00000118;
  void *in_stack_0000011c;
  int in_stack_00000120;
  
  uStack00000038 = 4;
  uStack00000110 = 3;
  iVar1 = FUN_004e50e0(&stack0x000000a8,in_stack_00000120,&stack0x00000030,in_stack_0000011c);
  *(undefined4 *)(unaff_ESI + unaff_EDI * 4) = *(undefined4 *)(iVar1 + 0x10);
  FUN_004cf650((undefined4 *)&stack0x000000b8);
  FUN_004cf650((undefined4 *)&stack0x00000040);
  uStack00000004 = 0x4e0cfa;
  FUN_0042f530();
  uStack00000008 = 0x4e0d04;
  FUN_0054b339(in_stack_00000024);
  uStack0000002c = 0;
  FUN_004cf650((undefined4 *)&stack0x00000070);
  ExceptionList = in_stack_00000118;
  return;
}


