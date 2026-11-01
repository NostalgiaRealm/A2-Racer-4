
/* ==== FUN_10006316 @ 10006316 ==== 
 * signature: undefined __fastcall FUN_10006316(char param_1, undefined4 param_2)
 * body: 10006316-10006317
 */

void __fastcall FUN_10006316(char param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  ushort *in_EAX;
  byte bVar6;
  byte *unaff_EBX;
  
  bVar1 = *unaff_EBX;
  bVar5 = (byte)((uint)in_EAX >> 8);
  *unaff_EBX = *unaff_EBX - bVar5;
  uVar4 = *in_EAX;
  bVar6 = (byte)((uint)param_2 >> 8);
  bVar2 = (byte)*in_EAX + bVar6;
  *(byte *)in_EAX = bVar2 + (bVar1 < bVar5);
  sVar3 = ((ushort)in_EAX & 3) - (*in_EAX & 3);
  *in_EAX = *in_EAX + (ushort)(0 < sVar3) * sVar3;
  *unaff_EBX = *unaff_EBX + (char)((uint)unaff_EBX >> 8) +
               (CARRY1((byte)uVar4,bVar6) || CARRY1(bVar2,bVar1 < bVar5));
  uVar4 = *in_EAX;
  *(byte *)in_EAX = (byte)*in_EAX + (byte)param_2;
  sVar3 = ((ushort)in_EAX & 3) - (*in_EAX & 3);
  *in_EAX = *in_EAX + (ushort)(0 < sVar3) * sVar3;
  unaff_EBX[0x5f5e0845] = unaff_EBX[0x5f5e0845] + param_1 + CARRY1((byte)uVar4,(byte)param_2);
  return;
}


