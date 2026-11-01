
/* ==== FUN_00404c16 @ 00404c16 ==== 
 * signature: int __fastcall FUN_00404c16(byte param_1, char param_2)
 * body: 00404c16-00404c17
 */

int __fastcall FUN_00404c16(byte param_1,char param_2)

{
  int in_EAX;
  int unaff_EBX;
  
  *(char *)(in_EAX * 3) = *(char *)(in_EAX * 3) - param_1;
  *(byte *)(in_EAX * 3) = *(byte *)(in_EAX * 3) ^ param_1;
  *(char *)(in_EAX + 0x4d) = *(char *)(in_EAX + 0x4d) + param_2;
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + param_1;
  return in_EAX + 2;
}


