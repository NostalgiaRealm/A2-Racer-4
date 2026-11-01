
/* ==== FUN_004027ee @ 004027ee ==== 
 * signature: undefined __fastcall FUN_004027ee(byte param_1, int param_2)
 * body: 004027ee-004027ef
 */

void __fastcall FUN_004027ee(byte param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int in_EAX;
  int iVar5;
  byte bVar6;
  byte bVar8;
  byte *pbVar7;
  byte unaff_BL;
  byte unaff_BH;
  int unaff_ESI;
  int unaff_EDI;
  byte in_CF;
  byte in_AF;
  bool in_OF;
  
  bVar8 = (byte)((uint)param_2 >> 8);
  if (!in_OF) {
    *(char *)(unaff_ESI + 0x27) = *(char *)(unaff_ESI + 0x27) + bVar8;
    *(char *)(unaff_EDI + 0x40) = *(char *)(unaff_EDI + 0x40) + unaff_BH;
    pbVar7 = (byte *)(param_2 + -0x77ffbfd9);
    bVar4 = *pbVar7;
    bVar3 = (byte)(in_EAX + 2);
    *pbVar7 = *pbVar7 + bVar3;
    bVar2 = 9 < (bVar3 & 0xf) | in_AF;
    iVar5 = CONCAT31((int3)((uint)(in_EAX + 2) >> 8),
                     bVar3 + bVar2 * '\x06' + (0x99 < bVar3 || CARRY1(bVar4,bVar3)) * '`') + 1;
    pbVar7 = (byte *)(unaff_ESI + -0x6bffbfd9);
    bVar4 = *pbVar7;
    *pbVar7 = *pbVar7 + param_1;
    bVar3 = (byte)iVar5;
    bVar2 = 9 < (bVar3 & 0xf) | bVar2;
    iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),
                     bVar3 + bVar2 * '\x06' + (0x99 < bVar3 || CARRY1(bVar4,param_1)) * '`') + 1;
    pbVar7 = (byte *)(param_2 + -0x5fffbfd9);
    bVar4 = *pbVar7;
    *pbVar7 = *pbVar7 + unaff_BL;
    bVar3 = (byte)iVar5;
    in_AF = 9 < (bVar3 & 0xf) | bVar2;
    in_EAX = CONCAT31((int3)((uint)iVar5 >> 8),
                      bVar3 + in_AF * '\x06' + (0x99 < bVar3 || CARRY1(bVar4,unaff_BL)) * '`') + 1;
    pbVar7 = (byte *)(unaff_ESI + -0x53ffbfd9);
    bVar4 = (byte)((uint)in_EAX >> 8);
    in_CF = CARRY1(*pbVar7,bVar4);
    *pbVar7 = *pbVar7 + bVar4;
  }
  bVar4 = (byte)in_EAX;
  bVar2 = 9 < (bVar4 & 0xf) | in_AF;
  iVar5 = CONCAT31((int3)((uint)in_EAX >> 8),bVar4 + bVar2 * '\x06' + (0x99 < bVar4 | in_CF) * '`')
          + 1;
  pbVar7 = (byte *)(param_2 + -0x47ffbfd9);
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar8;
  bVar3 = (byte)iVar5;
  bVar2 = 9 < (bVar3 & 0xf) | bVar2;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),
                   bVar3 + bVar2 * '\x06' + (0x99 < bVar3 || CARRY1(bVar4,bVar8)) * '`') + 1;
  pbVar7 = (byte *)(unaff_ESI + -0x3bffbfd9);
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + unaff_BH;
  bVar3 = (byte)iVar5;
  bVar2 = 9 < (bVar3 & 0xf) | bVar2;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),
                   bVar3 + bVar2 * '\x06' + (0x99 < bVar3 || CARRY1(bVar4,unaff_BH)) * '`') + 1;
  bVar6 = (byte)param_2 + param_1;
  bVar4 = (byte)iVar5;
  bVar2 = 9 < (bVar4 & 0xf) | bVar2;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),
                   bVar4 + bVar2 * '\x06' + (0x99 < bVar4 || CARRY1((byte)param_2,param_1)) * '`') +
          1;
  bVar3 = (byte)iVar5;
  bVar4 = bVar3 + bVar6;
  bVar2 = 9 < (bVar4 & 0xf) | bVar2;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),
                   bVar4 + bVar2 * '\x06' + (0x99 < bVar4 || CARRY1(bVar3,bVar6)) * '`') + 1;
  bVar4 = (byte)iVar5;
  bVar2 = 9 < (bVar4 & 0xf) | bVar2;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),
                   bVar4 + bVar2 * '\x06' + (0x99 < bVar4 || CARRY1(bVar8,bVar6)) * '`') + 1;
  bVar3 = (byte)((uint)iVar5 >> 8);
  bVar4 = (byte)iVar5;
  bVar2 = 9 < (bVar4 & 0xf) | bVar2;
  iVar5 = CONCAT31((int3)(CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(bVar3 + unaff_BL,bVar4)) >>
                         8),bVar4 + bVar2 * '\x06' + (0x99 < bVar4 || CARRY1(bVar3,unaff_BL)) * '`')
          + 1;
  bVar3 = (byte)((uint)iVar5 >> 8);
  pbVar7 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)param_2 >> 0x10),
                                            CONCAT11(bVar8 + bVar6,bVar6)) >> 8),bVar6 + bVar3);
  bVar4 = (byte)iVar5;
  pbVar7[0x7500600d] = pbVar7[0x7500600d] + param_1;
  pcVar1 = (char *)(CONCAT31((int3)((uint)iVar5 >> 8),
                             bVar4 + (9 < (bVar4 & 0xf) | bVar2) * '\x06' +
                             (0x99 < bVar4 || CARRY1(bVar6,bVar3)) * '`') + 0x75c88402);
  *pcVar1 = *pcVar1 + bVar8 + bVar6;
  *pbVar7 = *pbVar7 | param_1;
  FUN_005584e0(0x4d1400);
  return;
}


