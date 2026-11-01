
/* ==== FUN_00558226 @ 00558226 ==== 
 * signature: undefined __fastcall FUN_00558226(char param_1, int param_2)
 * body: 00558226-00558227
 */

void __fastcall FUN_00558226(char param_1,int param_2)

{
  char *pcVar1;
  int in_EAX;
  int unaff_EBX;
  
  pcVar1 = (char *)(param_2 + 0x55 + in_EAX * 4);
  *pcVar1 = *pcVar1 + param_1;
  *(char *)(in_EAX + -0x7e) = *(char *)(in_EAX + -0x7e) + (char)((uint)in_EAX >> 8);
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + param_1;
  return;
}


