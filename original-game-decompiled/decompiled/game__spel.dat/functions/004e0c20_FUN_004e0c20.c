
/* ==== FUN_004e0c20 @ 004e0c20 ==== 
 * signature: undefined __stdcall FUN_004e0c20(void)
 * body: 004e0c20-004e0d47
 */

void FUN_004e0c20(void)

{
  void *pvVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  LPVOID in_stack_00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000050;
  undefined1 uStack00000110;
  void *in_stack_00000118;
  void *in_stack_0000011c;
  int in_stack_00000120;
  
  uStack00000050 = 4;
  uStack00000110 = 5;
  pvVar1 = (void *)FUN_004e50e0(&stack0x000000f0,in_stack_00000120,&stack0x00000048,
                                in_stack_0000011c);
  uStack00000008 = 0x4e0c72;
  FUN_004cf110(&stack0x00000070,pvVar1);
  FUN_004cf650((undefined4 *)&stack0x00000100);
  FUN_004cf650((undefined4 *)&stack0x00000058);
  uStack00000008 = 0x4e0cab;
  FUN_00559d4e(*(LPVOID *)(unaff_ESI + unaff_EDI * 4));
  uStack00000008 = 0x4e0cbc;
  puVar2 = FUN_00479930(&stack0x00000070,&stack0x00000030);
  puVar3 = *(uint **)(puVar2 + 4);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)&DAT_0057629c;
  }
  uStack00000008 = 0x4e0cce;
  puVar3 = FUN_005686b8(puVar3);
  *(uint **)(unaff_ESI + unaff_EDI * 4) = puVar3;
  uStack00000008 = 0x4e0cdf;
  FUN_004028f0(&stack0x00000030,'\x01');
  uStack00000004 = 0x4e0cfa;
  FUN_0042f530();
  uStack00000008 = 0x4e0d04;
  FUN_0054b339(in_stack_00000024);
  uStack0000002c = 0;
  FUN_004cf650((undefined4 *)&stack0x00000070);
  ExceptionList = in_stack_00000118;
  return;
}


