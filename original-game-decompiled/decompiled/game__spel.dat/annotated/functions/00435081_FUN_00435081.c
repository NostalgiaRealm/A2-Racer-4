
/* ==== FUN_00435081 @ 00435081 ==== 
 * signature: undefined __fastcall FUN_00435081(int param_1, int param_2)
 * body: 00435081-00435083
 */

void __fastcall FUN_00435081(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  char *unaff_ESI;
  
  *(int *)(unaff_ESI + 0x43) = *(int *)(unaff_ESI + 0x43) + -1;
  cVar3 = (char)((uint)in_EAX >> 8);
  *in_EAX = *in_EAX + cVar3;
  cVar2 = (char)in_EAX;
  *(char *)(param_2 + 0x4f) = *(char *)(param_2 + 0x4f) + cVar2;
  *(char *)(unaff_EBX + 0x51) = *(char *)(unaff_EBX + 0x51) + cVar3;
  *(char *)(unaff_EBP + -0x59ffbcb1) = *(char *)(unaff_EBP + -0x59ffbcb1) + cVar2;
  *unaff_ESI = *unaff_ESI + (char)param_2;
  *(char *)(param_1 + 0x50) = *(char *)(param_1 + 0x50) + cVar2;
  pcVar1 = (char *)(CONCAT22((short)((uint)in_EAX >> 0x10),
                             CONCAT11(cVar3 + (char)((uint)param_1 >> 8),cVar2)) + -0x176f6f70);
  *pcVar1 = *pcVar1 + (char)param_2;
  return;
}


