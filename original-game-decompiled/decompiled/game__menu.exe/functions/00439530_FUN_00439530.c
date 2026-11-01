
/* ==== FUN_00439530 @ 00439530 ==== 
 * signature: undefined FUN_00439530(void)
 * body: 00439530-004395ce
 */

void FUN_00439530(undefined4 param_1,int param_2,int param_3,undefined1 *param_4,undefined4 param_5,
                 int param_6)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  char cVar7;
  undefined2 uVar8;
  undefined4 uVar5;
  int extraout_ECX;
  undefined2 extraout_DX;
  char cVar9;
  int unaff_EBX;
  char *pcVar10;
  int unaff_EBP;
  int *piVar11;
  undefined2 in_CS;
  undefined2 in_DS;
  byte bVar12;
  char *pcVar6;
  
  iVar3 = param_6;
  bVar12 = 0;
  *(undefined2 *)(unaff_EBP + 0x41) = in_DS;
  cVar4 = (char)param_1;
  uVar8 = (undefined2)((uint)param_1 >> 0x10);
  cVar7 = (char)((uint)param_1 >> 8) + cVar4;
  pcVar10 = (char *)CONCAT22(uVar8,CONCAT11(cVar7,cVar4));
  cVar9 = (char)unaff_EBX;
  *pcVar10 = *pcVar10 + cVar9;
  cVar7 = cVar7 + (char)((uint)(param_3 + 2) >> 8);
  param_4[unaff_EBX * 2] = param_4[unaff_EBX * 2] + cVar9;
  pcVar10 = (char *)(CONCAT22(uVar8,CONCAT11(cVar7,cVar4)) + 0x5d);
  *pcVar10 = *pcVar10 + (char)param_3 + '\x04';
  cVar7 = cVar7 + cVar9;
  param_4[unaff_EBX * 2] = param_4[unaff_EBX * 2] + cVar7;
  pcVar10 = (char *)(param_2 + -0x6537ffbd + unaff_EBX * 4);
  *pcVar10 = *pcVar10 + (char)((uint)param_2 >> 8);
  param_6 = CONCAT22(param_6._2_2_,in_CS);
  param_5._0_2_ = 0x9560;
  param_5._2_2_ = 0x43;
  uVar5 = func_0x9af00043(CONCAT22(uVar8,CONCAT11(cVar7 + cVar9 + '\x01',cVar4)),param_2,param_3 + 7
                         );
  cVar4 = (char)uVar5 + -0x65;
  pcVar6 = (char *)CONCAT31((int3)((uint)uVar5 >> 8),cVar4);
  *pcVar6 = *pcVar6 + cVar9 + '\x02';
  pcVar10 = (char *)((unaff_EBX + 3) * 5);
  cVar7 = (char)((uint)extraout_ECX >> 8);
  *pcVar10 = *pcVar10 + cVar7;
  pcVar6[-0x65] = pcVar6[-0x65] + cVar4;
  pcVar10 = (char *)(unaff_EBX + 0x48 + (unaff_EBX + 5) * 4);
  *pcVar10 = *pcVar10 + (char)extraout_DX;
  pcVar6[-0x65] = pcVar6[-0x65] + (char)(unaff_EBX + 5);
  pcVar10 = (char *)(unaff_EBX + 0x49 + (unaff_EBX + 6) * 4);
  *pcVar10 = *pcVar10 + (char)(unaff_EBX + 6);
  cVar4 = (char)((uint)uVar5 >> 8);
  pcVar6[-0x65] = pcVar6[-0x65] + cVar4;
  pcVar10 = (char *)(unaff_EBX * 5 + 0x66);
  *pcVar10 = *pcVar10 + cVar4;
  pcVar6[-0x65] = pcVar6[-0x65] + cVar7;
  pcVar10 = (char *)(unaff_EBX * 5 + 0x6b);
  *pcVar10 = *pcVar10 + cVar7;
  pcVar6[-0x65] = pcVar6[-0x65] + (char)((ushort)extraout_DX >> 8);
  pcVar10 = (char *)(unaff_EBX + 9);
  *pcVar10 = *pcVar10 + (char)extraout_ECX;
  param_5._2_2_ = (undefined2)((uint)&param_6 >> 0x10);
  puVar1 = (ushort *)(extraout_ECX + 0x70 + iVar3 * 2);
  sVar2 = ((ushort)param_4 & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
  out(*param_4,extraout_DX);
  *(int *)(unaff_EBX + -0x740f741d) = *(int *)(unaff_EBX + -0x740f741d) + -1;
  piVar11 = (int *)(param_4 + (uint)bVar12 * -2 + 2);
  if (pcVar6 != (char *)0x0) {
    param_5._0_2_ = 0x43;
    FUN_00439990((int)pcVar6,(int)piVar11);
  }
  param_5._0_2_ = 0x43;
  TBasicAction_Destroy(piVar11,(byte)pcVar10 & 0xfc);
  if ('\0' < (char)(byte)pcVar10) {
    param_5._0_2_ = 0x43;
    FUN_004032ec(piVar11);
  }
  return;
}


