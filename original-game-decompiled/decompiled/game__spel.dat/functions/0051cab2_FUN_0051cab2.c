
/* ==== FUN_0051cab2 @ 0051cab2 ==== 
 * signature: undefined __fastcall FUN_0051cab2(char * param_1, undefined4 param_2)
 * body: 0051cab2-0051cab3
 */

void __fastcall FUN_0051cab2(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  uint5 uVar4;
  char cVar5;
  byte bVar6;
  undefined4 in_EAX;
  undefined2 uVar10;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  char cVar11;
  byte bVar12;
  undefined2 uVar14;
  uint *puVar13;
  char cVar15;
  undefined2 uVar21;
  char *pcVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  byte bVar22;
  undefined4 unaff_EBX;
  char *pcVar23;
  uint *puVar24;
  int unaff_EBP;
  byte *unaff_ESI;
  uint *unaff_EDI;
  undefined2 uVar25;
  
  uVar10 = (undefined2)((uint)in_EAX >> 0x10);
  cVar5 = (char)in_EAX;
  *param_1 = *param_1 + (char)((uint)param_2 >> 8);
  uVar14 = (undefined2)((uint)param_1 >> 0x10);
  cVar11 = (char)param_1;
  unaff_ESI[-0x4b] = unaff_ESI[-0x4b] + 0x51;
  pcVar1 = (char *)(CONCAT22(uVar10,CONCAT11(0x51,cVar5)) + -0x49ffae4b);
  *pcVar1 = *pcVar1 + cVar5;
  *(char *)unaff_EDI = (char)*unaff_EDI + cVar5;
  uVar21 = (undefined2)((uint)param_2 >> 0x10);
  cVar15 = (char)param_2;
  cRam860051b6 = cRam860051b6 + (char)((uint)unaff_EBX >> 8);
  pcVar1 = (char *)(CONCAT22(uVar14,CONCAT11(0x51,cVar11)) + -0x28ffae4a);
  *pcVar1 = *pcVar1 + 'Q';
  pcVar16 = (char *)CONCAT22(uVar21,CONCAT11(0x51,cVar15));
  bVar22 = (byte)unaff_EBX;
  *(byte *)unaff_EDI = (char)*unaff_EDI + bVar22;
  uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
  pcVar23 = (char *)CONCAT22(uVar25,CONCAT11(0x51,bVar22));
  *unaff_ESI = *unaff_ESI + cVar15;
  pcVar1 = (char *)(unaff_EBP + 0x51 + (int)unaff_ESI * 4);
  *pcVar1 = *pcVar1 + cVar11;
  pcVar23[-0x2effae4b] = pcVar23[-0x2effae4b] + bVar22;
  pcVar7 = (char *)CONCAT22(uVar10,CONCAT11(0xa2,cVar5));
  *pcVar16 = *pcVar16 + -0x5e;
  piVar17 = (int *)CONCAT22(uVar21,CONCAT11(0x51,cVar15));
  pcVar23[-0x4a] = pcVar23[-0x4a] + 'Q';
  pcVar1 = (char *)((int)unaff_ESI * 5 + -0x4907ffaf);
  *pcVar1 = *pcVar1 + 'Q';
  *pcVar23 = *pcVar23 + cVar15;
  *(char *)unaff_EDI = (char)*unaff_EDI + 'Q';
  puVar24 = (uint *)CONCAT22(uVar25,CONCAT11(0x51,bVar22));
  *(char *)((int)unaff_EDI + -0x49) = *(char *)((int)unaff_EDI + -0x49) + cVar11;
  *pcVar7 = *pcVar7 + cVar5;
  *piVar17 = (int)(pcVar7 + *piVar17);
  uVar18 = (int)piVar17 + *unaff_EDI;
  *unaff_EDI = *unaff_EDI | uVar18;
  uVar18 = CONCAT31((int3)(uVar18 >> 8),(byte)uVar18 | (byte)*unaff_EDI) | *unaff_EDI;
  bVar6 = (byte)uVar18;
  uVar19 = CONCAT31((int3)(uVar18 >> 8),bVar6 + (char)*unaff_EDI);
  uVar18 = (uint)CARRY1(bVar6,(byte)*unaff_EDI);
  uVar2 = uVar19 + *(uint *)((int)unaff_EDI + uVar19);
  puVar20 = (uint *)(uVar2 + uVar18);
  iVar8 = (CONCAT31((int3)((uint)pcVar7 >> 8),cVar5 + '\x17') + 0x17080706U | 0xd) + 0xb9081617 +
          (uint)(CARRY4(uVar19,*(uint *)((int)unaff_EDI + uVar19)) || CARRY4(uVar2,uVar18));
  pcVar1 = (char *)(iVar8 + (int)unaff_EDI * 4);
  *pcVar1 = *pcVar1 + (char)iVar8;
  *unaff_ESI = *unaff_ESI + bVar22;
  *(char *)(puVar20 + -0x12) = (char)puVar20[-0x12] + (char)puVar20;
  pcVar1 = (char *)((int)unaff_EDI * 4 + -0x47c7ff5e);
  *pcVar1 = *pcVar1 + 'Q';
  unaff_ESI[-0x5fffae48] = unaff_ESI[-0x5fffae48] + 0x51;
  cRamb8ee000a = cRamb8ee000a + 'Q';
  cRamb8ee0051 = cRamb8ee0051 + 'Q';
  uVar18 = CONCAT22(uVar14,CONCAT11(0x51,cVar11)) | *puVar24 | *puVar24 | *puVar24 | *puVar24 |
           *puVar24 | *puVar24 | *puVar24 | *puVar24 | *puVar24 | *puVar24 | *puVar24 | *puVar24 |
           *puVar24 | *puVar24;
  *puVar24 = *puVar24 + uVar18;
  puVar13 = (uint *)(CONCAT31((int3)(uVar18 >> 8),(char)uVar18 + (char)*puVar24) | *puVar24 |
                    *puVar24);
  pbVar9 = (byte *)(CONCAT31((int3)((*puVar24 | 0xb8ee0051) >> 8),
                             (char)(*puVar24 | 0xb8ee0051) + '\v') | uRam080b0706);
  puRamc167004d = (uint *)((uint)puVar13 | *puVar13 | *puVar20);
  *(char *)((int)puVar24 + -0x45e5ffaf) = *(char *)((int)puVar24 + -0x45e5ffaf) + 'Q';
  cVar5 = (char)((uint)puRamc167004d >> 8);
  *(char *)((int)puVar24 + -0x45) = *(char *)((int)puVar24 + -0x45) + cVar5;
  pbVar9[-0x23ffae46] = pbVar9[-0x23ffae46] + cVar5;
  cRam000051bc = cRam000051bc + 'Q';
  bVar12 = (byte)puRamc167004d;
  *pbVar9 = *pbVar9 | bVar12;
  *(byte **)pbVar9 = (byte *)(*(int *)pbVar9 + (int)puRamc167004d);
  bVar6 = (char)pbVar9 + (char)*puVar24;
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar6);
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  pbVar9[(int)puRamc167004d] = pbVar9[(int)puRamc167004d] | bVar6;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *pbVar9 = *pbVar9 | bVar12;
  *(byte *)puRamc167004d = (byte)*puRamc167004d | bVar6;
  *pbVar9 = *pbVar9 | bVar12;
  pbVar9 = pbVar9 + 0x8080808;
  *pbVar9 = *pbVar9 | bVar12;
  *unaff_ESI = *unaff_ESI | (byte)pbVar9;
  *(byte *)(puVar24 + -0x10) = (char)puVar24[-0x10] + bVar12;
  *(byte *)(puRamc167004d + -0x10) = (byte)puRamc167004d[-0x10] + 0x51;
  bVar6 = (byte)*puRamc167004d;
  *(byte *)puRamc167004d = bVar6 << 5 | (byte)(CONCAT11(CARRY1(bVar22,bVar12),bVar6) >> 4);
  bVar12 = (byte)*puRamc167004d;
  *(byte *)puRamc167004d = bVar12 << 4 | (byte)(CONCAT11((bVar6 & 8) != 0,bVar12) >> 5);
  bVar6 = (byte)*puRamc167004d;
  *(byte *)puRamc167004d = bVar6 << 7 | (byte)(CONCAT11((bVar12 & 0x10) != 0,bVar6) >> 2);
  uVar4 = CONCAT14((bVar6 & 2) != 0,*puRamc167004d);
  uVar3 = (ulonglong)uVar4 << 0x13;
  *puRamc167004d = (uint)uVar3 | (uint)(uVar4 >> 0xe);
  uVar4 = CONCAT14((uVar3 & 0x100000000) != 0,*puRamc167004d);
  uVar3 = (ulonglong)uVar4 << 0xd;
  *puRamc167004d = (uint)uVar3 | (uint)(uVar4 >> 0x14);
  *puRamc167004d =
       *puRamc167004d << 0x1b | (uint)(CONCAT14((uVar3 & 0x100000000) != 0,*puRamc167004d) >> 6);
  cRambaf60051 = cRambaf60051 + 'Q';
  return;
}


