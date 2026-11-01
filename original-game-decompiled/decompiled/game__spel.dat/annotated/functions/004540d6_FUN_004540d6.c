
/* ==== FUN_004540d6 @ 004540d6 ==== 
 * signature: undefined __fastcall FUN_004540d6(char * param_1, char * param_2, undefined4 param_3, int param_4)
 * body: 004540d6-004540d7
 */

/* WARNING: Instruction at (ram,0x00454198) overlaps instruction at (ram,0x00454197)
    */

void __fastcall FUN_004540d6(char *param_1,char *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar10;
  char *in_EAX;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar11;
  byte bVar12;
  byte *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  char *unaff_EDI;
  byte in_AF;
  bool in_OF;
  uint uVar6;
  
  bVar12 = (byte)((uint)unaff_EBX >> 8);
  cVar3 = (char)((uint)param_2 >> 8);
  cVar10 = (char)param_1;
  if (in_OF) {
    in_EAX = in_EAX + 1;
  }
  else {
    *in_EAX = *in_EAX + cVar10;
    *unaff_EBX = *unaff_EBX | bVar12;
    in_EAX[0x37] = in_EAX[0x37] + cVar3;
    *in_EAX = *in_EAX + cVar10;
    unaff_EBP = -0x42ffbac7;
    if ((int)in_EAX < iRambd004539) goto code_r0x00454136;
  }
  *(char *)(unaff_EBP + -0x23ffbabf) = *(char *)(unaff_EBP + -0x23ffbabf) + bVar12;
  param_2[-0x31ffbac4] = param_2[-0x31ffbac4] + cVar3;
  *(char *)(unaff_EBP + -0x4ffbabf) = *(char *)(unaff_EBP + -0x4ffbabf) + bVar12;
  bVar2 = 9 < ((byte)in_EAX & 0xf) | in_AF;
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX + bVar2 * -6) & 0xffffff0f;
  cVar3 = (char)uVar6;
  iVar7 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)((uint)in_EAX >> 8) - bVar2,cVar3));
  pcVar1 = (char *)(iVar7 + 0x40);
  cVar11 = (char)((uint)param_1 >> 8);
  *pcVar1 = *pcVar1 + cVar11;
  param_1 = (char *)CONCAT31((int3)((uint)param_1 >> 8),cVar10 + bVar12);
  *(char *)(unaff_EBP + -0x42ffbabe) = *(char *)(unaff_EBP + -0x42ffbabe) + cVar11;
  iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),cVar3 * '\x02') + 1;
  bVar2 = 9 < ((byte)iVar7 & 0xf) | bVar2;
  bVar4 = (byte)iVar7 + bVar2 * -6 & 0xf;
  cVar10 = ((char)((uint)iVar7 >> 8) + (char)param_2) - bVar2;
  param_2 = (char *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cVar10);
  bVar2 = 9 < bVar4 | bVar2;
  bVar5 = bVar4 + bVar2 * -6 & 0xf;
  bVar4 = 9 < bVar5 | bVar2;
  bVar5 = bVar5 + bVar4 * -6 & 0xf;
  unaff_EBP = unaff_EBP + 7;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                               (char)unaff_EBX + cVar11 + bVar12 * '\x02');
  in_AF = 9 < bVar5 | bVar4;
  uVar6 = CONCAT31((int3)((uint)iVar7 >> 8),bVar5 + in_AF * -6) & 0xffff000f;
  in_EAX = (char *)CONCAT22((short)(uVar6 >> 0x10),
                            CONCAT11(((cVar10 - bVar2) - bVar4) - in_AF,(char)uVar6));
code_r0x00454136:
  cVar3 = (char)((uint)unaff_EBX >> 8);
  *(char *)(unaff_EBP + -0x4ffbabf) = *(char *)(unaff_EBP + -0x4ffbabf) + cVar3;
  bVar12 = 9 < ((byte)in_EAX & 0xf) | in_AF;
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX + bVar12 * -6) & 0xffffff0f;
  iVar7 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)((uint)in_EAX >> 8) - bVar12,(char)uVar6));
  *param_1 = *param_1 + (char)param_1;
  iVar8 = iVar7 + 1;
  cVar10 = (char)param_2;
  param_1[0x40] = param_1[0x40] + cVar10;
  *(char *)(unaff_ESI + 0x40) = *(char *)(unaff_ESI + 0x40) + (char)iVar8;
  *param_2 = *param_2 + (char)((uint)iVar8 >> 8);
  *unaff_EDI = *unaff_EDI + cVar10;
  *(char *)(unaff_EBP + -0x42ffbab9) = *(char *)(unaff_EBP + -0x42ffbab9) + cVar3;
  pcVar1 = (char *)(iVar7 * 3 + 0x51);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
  *(char *)(unaff_EBP + -0x42ffbab8) = *(char *)(unaff_EBP + -0x42ffbab8) + cVar3;
  unaff_EDI[0x7300453f] = unaff_EDI[0x7300453f] + (char)unaff_EBX;
  pcVar1 = (char *)(unaff_ESI + -0x75);
  *pcVar1 = *pcVar1 + cVar10;
  if ((*pcVar1 == '\0') ||
     (FUN_004c3fa0((byte *)s_Adding_object__d_with_type_play_s_005a3460), unaff_ESI != -1)) {
    uVar9 = FUN_0049ecf0(&DAT_006fbb5c,unaff_ESI);
    *(undefined4 *)(param_4 * 0xf0 + 0x30 + DAT_00715e50) = uVar9;
    *(undefined4 *)(param_4 * 0xf0 + 0x68 + DAT_00715e50) = 1;
  }
  return;
}


