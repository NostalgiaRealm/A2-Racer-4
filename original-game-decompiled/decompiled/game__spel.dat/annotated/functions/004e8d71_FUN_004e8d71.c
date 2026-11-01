
/* ==== FUN_004e8d71 @ 004e8d71 ==== 
 * signature: undefined4 * __stdcall FUN_004e8d71(void)
 * body: 004e8d71-004e8dc7
 */

undefined4 * FUN_004e8d71(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  void *this;
  int unaff_EBP;
  void *in_stack_000000b8;
  
  puVar2 = FUN_00479930(*(void **)(unaff_EBP + 0x10),&stack0x00000058);
  pbVar3 = *(byte **)(puVar2 + 4);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_0057629c;
  }
  uVar4 = FUN_0055933d(this,pbVar3);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 2;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_005778c0;
  FUN_004028f0(&stack0x00000058,'\x01');
  ExceptionList = in_stack_000000b8;
  return puVar1;
}


