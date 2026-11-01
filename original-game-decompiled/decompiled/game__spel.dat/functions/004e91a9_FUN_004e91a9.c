
/* ==== FUN_004e91a9 @ 004e91a9 ==== 
 * signature: undefined4 * __stdcall FUN_004e91a9(void)
 * body: 004e91a9-004e9249
 */

undefined4 * FUN_004e91a9(void)

{
  void *this;
  undefined4 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint unaff_EBX;
  int unaff_EBP;
  void *in_stack_000000b8;
  undefined4 uStack000000c0;
  
  this = *(void **)(unaff_EBP + 0x10);
  puVar2 = FUN_00479930(this,&stack0x00000088);
  uStack000000c0 = 5;
  if (*(int *)(puVar2 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    puVar2 = FUN_00479930(this,&stack0x00000068);
    pbVar3 = *(byte **)(puVar2 + 4);
    unaff_EBX = 2;
    if (pbVar3 == (byte *)0x0) {
      pbVar3 = &DAT_0057629c;
    }
    uVar4 = (uint)*pbVar3;
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 2;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_005778c0;
  if ((unaff_EBX & 2) != 0) {
    FUN_004028f0(&stack0x00000068,'\x01');
  }
  uStack000000c0 = 0xffffffff;
  FUN_004028f0(&stack0x00000088,'\x01');
  ExceptionList = in_stack_000000b8;
  return puVar1;
}


