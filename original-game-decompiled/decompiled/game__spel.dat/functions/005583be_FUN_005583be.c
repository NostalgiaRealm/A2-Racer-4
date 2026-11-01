
/* ==== FUN_005583be @ 005583be ==== 
 * signature: char __fastcall FUN_005583be(undefined4 param_1)
 * body: 005583be-005583bf
 */

char __fastcall FUN_005583be(undefined4 param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar4;
  byte in_AL;
  byte bVar5;
  int unaff_EBX;
  uint *unaff_EBP;
  int unaff_ESI;
  uint uVar3;
  
  pbVar1 = (byte *)(unaff_EBX + -0x7c27ffab);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  bVar5 = (byte)((uint)param_1 >> 8);
  uVar4 = (uint)CARRY1(in_AL,bVar5);
  uVar2 = *unaff_EBP;
  uVar3 = *unaff_EBP;
  *unaff_EBP = (uVar3 - 4) + uVar4;
  *unaff_EBP = (*unaff_EBP - 0x75) + (uint)(3 < uVar2 || CARRY4(uVar3 - 4,uVar4));
  *(byte *)(unaff_ESI + 0x5f) = *(byte *)(unaff_ESI + 0x5f) | (byte)unaff_EBX;
  return in_AL + bVar5;
}


