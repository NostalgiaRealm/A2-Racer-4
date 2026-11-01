
/* ==== FUN_004e8dc8 @ 004e8dc8 ==== 
 * signature: undefined4 * __stdcall FUN_004e8dc8(void)
 * body: 004e8dc8-004e8e1e
 */

undefined4 * FUN_004e8dc8(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined *extraout_ECX;
  int unaff_EBP;
  float10 fVar4;
  void *in_stack_000000b8;
  
  puVar2 = FUN_00479930(*(void **)(unaff_EBP + 0x10),&stack0x00000028);
  pbVar3 = *(byte **)(puVar2 + 4);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_0057629c;
  }
  fVar4 = FUN_005596c8(extraout_ECX,pbVar3);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(double *)(puVar1 + 4) = (double)fVar4;
  puVar1[2] = 1;
  *puVar1 = &PTR_FUN_005778c0;
  FUN_004028f0(&stack0x00000028,'\x01');
  ExceptionList = in_stack_000000b8;
  return puVar1;
}


