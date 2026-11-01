
/* ==== FUN_004c45d2 @ 004c45d2 ==== 
 * signature: undefined4 __fastcall FUN_004c45d2(int param_1, char * param_2)
 * body: 004c45d2-004c45d3
 */

undefined4 __fastcall FUN_004c45d2(int param_1,char *param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  char cVar9;
  undefined3 uVar10;
  byte *pbVar7;
  int iVar8;
  char cVar11;
  char cVar12;
  undefined4 unaff_EBX;
  byte *pbVar13;
  int unaff_EBP;
  byte *unaff_ESI;
  byte *unaff_EDI;
  undefined4 *puVar15;
  undefined4 auStack_7f [4];
  undefined4 uStack_6f;
  int *piStack_f;
  char cVar14;
  
  puVar2 = (uint *)(&stack0x00000000 + param_1 * 2);
  bVar6 = (byte)param_1;
  *puVar2 = *puVar2 << (bVar6 & 0x1f) | *puVar2 >> 0x20 - (bVar6 & 0x1f);
  pbVar4 = (byte *)in(0x44);
  cVar9 = (char)((uint)param_1 >> 8) + bVar6;
  cVar12 = (char)unaff_EBX + cVar9;
  uVar10 = (undefined3)(CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar9,bVar6)) >> 8);
  cVar11 = (char)((uint)param_2 >> 8);
  bVar6 = bVar6 + cVar11;
  pbVar5 = (byte *)CONCAT31(uVar10,bVar6);
  cVar14 = (char)((uint)unaff_EBX >> 8) + cVar11;
  pbVar13 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar14,cVar12));
  param_2[0x4c45] = param_2[0x4c45] + bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  bVar3 = (byte)pbVar4;
  *pbVar5 = *pbVar5 | bVar3;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  bVar6 = bVar6 + *pbVar4;
  pbVar7 = (byte *)CONCAT31(uVar10,bVar6);
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar13 = *pbVar13 | bVar3;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  pbVar4[(int)pbVar7] = pbVar4[(int)pbVar7] | bVar3;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  *pbVar4 = *pbVar4 | bVar6;
  pbVar5 = pbVar4 + 0x8080808;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  bVar3 = (byte)pbVar5;
  *unaff_ESI = *unaff_ESI | bVar3;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *pbVar5 = *pbVar5 | bVar6;
  *unaff_EDI = *unaff_EDI | bVar3;
  unaff_ESI[0x45] = unaff_ESI[0x45] + cVar14;
  pcVar1 = (char *)((int)pbVar5 * 2 + 0x451e004c);
  *pcVar1 = *pcVar1 + cVar14;
  pbVar4[0x808084d] = pbVar4[0x808084d] + bVar6;
  pcVar1 = (char *)(unaff_EBP + 0x4c + (int)pbVar5 * 2);
  *pcVar1 = *pcVar1 + cVar9;
  unaff_ESI[0x45] = unaff_ESI[0x45] + bVar6;
  *pbVar5 = *pbVar5 + cVar11;
  *param_2 = *param_2 + cVar9;
  param_2[0x45] = param_2[0x45] + cVar12;
  cVar9 = (char)((uint)pbVar5 >> 8);
  pbVar4[0x808084d] = pbVar4[0x808084d] + cVar9;
  pcVar1 = (char *)((int)pbVar5 * 2 + 0x4584004c);
  *pcVar1 = *pcVar1 + cVar9;
  *unaff_ESI = *unaff_ESI + cVar11;
  unaff_ESI[0x45] = unaff_ESI[0x45] + cVar9;
  pbVar4[0x808084d] = pbVar4[0x808084d] + cVar14;
  pcVar1 = (char *)(unaff_EBP + 0x4f + (int)pbVar5 * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
  param_2[0x45] = param_2[0x45] + bVar3;
  param_2[0x4c45] = param_2[0x4c45] + bVar6;
  *pbVar7 = *pbVar7 | bVar6;
  puVar15 = auStack_7f;
  for (iVar8 = 0x1b; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  auStack_7f[0] = 0x6c;
  FUN_004c4a60(piStack_f);
  iVar8 = (**(code **)(*piStack_f + 100))(piStack_f,0,auStack_7f,1,0);
  if (iVar8 == 0) {
    return uStack_6f;
  }
  FUN_004c4400(iVar8);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____could_not_lock_surface___005b41ec);
}


