
/* ==== FUN_0041571c @ 0041571c ==== 
 * signature: undefined FUN_0041571c(void)
 * body: 0041571c-00415751
 */

void FUN_0041571c(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char unaff_BL;
  int unaff_ESI;
  
  *(char *)(param_1 + -0x75) = *(char *)(param_1 + -0x75) + (char)param_2;
  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + (char)((uint)param_2 >> 8);
  pcVar1 = (char *)(param_3 + -0x4bfbffbe + unaff_ESI * 4);
  *pcVar1 = *pcVar1 + (char)param_3 + '\x01';
  (&stack0x00000000)[unaff_ESI * 4] =
       (&stack0x00000000)[unaff_ESI * 4] + (char)((uint)(param_3 + 2) >> 8);
  pcVar1 = (char *)(CONCAT31((int3)((uint)param_2 >> 8),0x41) + -0x491fffbf + (param_3 + 3) * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(char *)(param_1 + -0x37ffbe48) = *(char *)(param_1 + -0x37ffbe48) + (char)(uint *)(param_3 + 4);
  uVar2 = *(uint *)(param_3 + 4) & 0xffffffb8;
  pcVar1 = (char *)(uVar2 + 0x240041bb);
  *pcVar1 = *pcVar1 + (char)uVar2;
  return;
}


