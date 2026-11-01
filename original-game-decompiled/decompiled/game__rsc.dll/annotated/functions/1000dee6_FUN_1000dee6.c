
/* ==== FUN_1000dee6 @ 1000dee6 ==== 
 * signature: undefined4 __fastcall FUN_1000dee6(char param_1, char param_2)
 * body: 1000dee6-1000dee7
 */

undefined4 __fastcall FUN_1000dee6(char param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  bVar2 = *in_EAX;
  *in_EAX = *in_EAX + (byte)in_EAX;
  pcVar1 = (char *)(unaff_EDI + unaff_EBX * 8);
  *pcVar1 = *pcVar1 + param_1 + CARRY1(bVar2,(byte)in_EAX);
  *in_EAX = *in_EAX + param_2;
  *in_EAX = *in_EAX + param_2;
  return *(undefined4 *)(unaff_EBP + 8);
}


