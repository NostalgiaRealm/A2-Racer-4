
/* ==== FUN_0055b69e @ 0055b69e ==== 
 * signature: undefined __fastcall FUN_0055b69e(char param_1)
 * body: 0055b69e-0055b69f
 */

void __fastcall FUN_0055b69e(char param_1)

{
  char *pcVar1;
  undefined4 in_EAX;
  int unaff_EBX;
  
  pcVar1 = (char *)(CONCAT31((int3)((uint)in_EAX >> 8),0xb6) + -0x37ffaa4a);
  *pcVar1 = *pcVar1 + (char)((uint)unaff_EBX >> 8);
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + param_1;
  return;
}


