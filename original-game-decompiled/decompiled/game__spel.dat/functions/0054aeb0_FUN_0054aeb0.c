
/* ==== FUN_0054aeb0 @ 0054aeb0 ==== 
 * signature: undefined __stdcall FUN_0054aeb0(void)
 * body: 0054aeb0-0054aec9
 */

void FUN_0054aeb0(void)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  byte *in_EAX;
  char in_CF;
  byte *pbVar4;
  
  bVar3 = (byte)in_EAX;
  *in_EAX = (*in_EAX - bVar3) - in_CF;
  bVar1 = *in_EAX;
  *in_EAX = *in_EAX + bVar3;
  *in_EAX = *in_EAX + bVar3 + CARRY1(bVar1,bVar3);
  *in_EAX = *in_EAX + bVar3;
  bVar3 = bVar3 + *in_EAX;
  pbVar4 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar3;
  *pbVar4 = *pbVar4 + bVar3 + CARRY1(bVar1,bVar3);
  *pbVar4 = *pbVar4 + bVar3;
  *pbVar4 = *pbVar4 + bVar3;
  pbVar4[-0x52] = pbVar4[-0x52] + bVar3;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


