
/* ==== FUN_0042f340 @ 0042f340 ==== 
 * signature: undefined FUN_0042f340(void)
 * body: 0042f340-0042f3de
 */

void FUN_0042f340(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  ushort *puVar2;
  short sVar3;
  char cVar4;
  char *pcVar5;
  char cVar8;
  int iVar7;
  char cVar9;
  byte bVar10;
  char cVar11;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  int *piVar12;
  int unaff_EDI;
  char cVar6;
  
  cVar9 = (char)param_2;
  *param_1 = *param_1 + cVar9;
  pcVar1 = (char *)(param_2 + 0x42 + (int)param_1 * 2);
  cVar6 = (char)((uint)param_1 >> 8);
  *pcVar1 = *pcVar1 + cVar6;
  cVar11 = (char)((uint)unaff_EBX >> 8);
  *param_1 = *param_1 + cVar11;
  param_1[0x42] = param_1[0x42] + (char)((uint)(param_3 + 2) >> 8);
  pcVar1 = (char *)(param_3 + 0x42280044 + (int)param_1 * 2);
  *pcVar1 = *pcVar1 + (char)(param_2 + 2);
  param_1[0x42] = param_1[0x42] + (char)((uint)(param_2 + 2) >> 8);
  iVar7 = param_3 + 5;
  bVar10 = (byte)unaff_EBX;
  cVar4 = (char)param_1 + bVar10;
  cVar8 = (char)((uint)iVar7 >> 8);
  cVar6 = cVar6 + (char)param_1 + cVar8;
  pcVar5 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar6,cVar4));
  *pcVar5 = *pcVar5 + cVar4;
  pcVar1 = (char *)(iVar7 + unaff_EDI * 8);
  *pcVar1 = *pcVar1 + cVar9 + '\x06';
  *pcVar5 = *pcVar5 + cVar8;
  pcVar1 = (char *)(iVar7 + unaff_EDI * 8);
  *pcVar1 = *pcVar1 + cVar11;
  pcVar5[-7] = pcVar5[-7] + cVar9 + '\t';
  pcVar1 = (char *)(param_3 + 0x47 + unaff_EDI * 8);
  *pcVar1 = *pcVar1 + cVar6;
  pcVar5[-7] = pcVar5[-7] + cVar8;
  pcVar1 = (char *)(param_3 + 0x47 + unaff_EDI * 8);
  *pcVar1 = *pcVar1 + cVar8;
  pcVar5[-7] = pcVar5[-7] + (char)((uint)(param_2 + 0xb) >> 8);
  pcVar1 = (char *)(param_3 + 0x47 + unaff_EDI * 8);
  *pcVar1 = *pcVar1 + (char)((uint)(param_2 + 0xc) >> 8);
  pcVar5[-7] = pcVar5[-7] + cVar11;
  pcVar1 = (char *)(param_3 + 0x47 + unaff_EDI * 8);
  *pcVar1 = *pcVar1 + cVar11;
  pcVar5[0xb0042f9] = pcVar5[0xb0042f9] + cVar4;
  puVar2 = (ushort *)(param_3 + 0x75 + unaff_EBP * 2);
  sVar3 = ((ushort)unaff_ESI & 3) - (*puVar2 & 3);
  *puVar2 = *puVar2 + (ushort)(0 < sVar3) * sVar3;
  out(*unaff_ESI,(short)param_2 + 0xd);
  *(int *)(unaff_EBX + -0x740f7426) = *(int *)(unaff_EBX + -0x740f7426) + -1;
  piVar12 = (int *)(unaff_ESI + 2);
  if (pcVar5 != (char *)0x0) {
    FUN_0042f7a0((int)pcVar5,(int)piVar12);
  }
  TBasicAction_Destroy(piVar12,bVar10 & 0xfc);
  if ('\0' < (char)bVar10) {
    FUN_00403064(piVar12);
  }
  return;
}


