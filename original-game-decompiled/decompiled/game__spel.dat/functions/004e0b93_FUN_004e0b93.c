
/* ==== FUN_004e0b93 @ 004e0b93 ==== 
 * signature: undefined __stdcall FUN_004e0b93(void)
 * body: 004e0b93-004e0c1f
 */

void FUN_004e0b93(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack00000020;
  LPVOID pvStack00000024;
  undefined4 uStack0000002c;
  undefined1 uStack00000110;
  void *in_stack_00000118;
  void *in_stack_0000011c;
  int in_stack_00000120;
  
  uVar1 = *(ulonglong *)(unaff_ESI + unaff_EDI * 8);
  pvStack00000024 = (LPVOID)(uVar1 >> 0x20);
  uVar2 = pvStack00000024;
  uStack00000020 = (undefined4)uVar1;
  uVar3 = uStack00000020;
  _uStack00000020 = uVar1;
  FUN_004e0d60(&stack0x00000090,uVar3,uVar2);
  uStack00000110 = 4;
  iVar4 = FUN_004e50e0(&stack0x000000c0,in_stack_00000120,&stack0x00000090,in_stack_0000011c);
  *(undefined8 *)(unaff_ESI + unaff_EDI * 8) = *(undefined8 *)(iVar4 + 0x10);
  FUN_004cf650((undefined4 *)&stack0x000000d0);
  FUN_004cf650((undefined4 *)&stack0x000000a0);
  uStack00000008 = pvStack00000024;
  uStack00000004 = 0x4e0cfa;
  FUN_0042f530();
  uStack00000008 = 0x4e0d04;
  FUN_0054b339(pvStack00000024);
  _uStack00000020 = _uStack00000020 & 0xffffffff;
  uStack0000002c = 0;
  FUN_004cf650((undefined4 *)&stack0x00000070);
  ExceptionList = in_stack_00000118;
  return;
}


