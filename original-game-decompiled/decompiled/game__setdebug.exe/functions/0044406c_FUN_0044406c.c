
/* ==== FUN_0044406c @ 0044406c ==== 
 * signature: undefined FUN_0044406c(void)
 * body: 0044406c-004440db
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0044406c(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar5;
  undefined2 uVar6;
  char *pcVar4;
  char cVar7;
  short sVar8;
  char cVar10;
  int iVar9;
  undefined4 unaff_EBX;
  uint *puVar11;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  puVar2 = (undefined1 *)(param_1 + -0xa3bffbd + unaff_EDI * 4);
  *puVar2 = *puVar2;
  pcVar1 = (char *)(param_3 + unaff_EDI * 4);
  *pcVar1 = *pcVar1 + (char)((uint)param_3 >> 8);
  pcVar1 = (char *)(param_2 + 0x43 + unaff_EDI * 4);
  *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  cVar3 = (char)&stack0x00000001;
  uVar6 = (undefined2)((uint)&stack0x00000001 >> 0x10);
  cVar5 = (char)((uint)&stack0x00000001 >> 8) + cVar3;
  pcVar4 = (char *)CONCAT22(uVar6,CONCAT11(cVar5,cVar3));
  pcVar1 = (char *)(param_3 + 0x41 + (int)pcVar4 * 2);
  *pcVar1 = *pcVar1 + (char)param_3;
  pcVar1 = (char *)(param_2 + 0x3e2c0044 + (int)pcVar4 * 8);
  *pcVar1 = *pcVar1 + (char)param_2 + '\x01';
  *pcVar4 = *pcVar4 + cVar3;
  cVar7 = (char)((uint)(param_3 + 1) >> 8);
  puVar11 = (uint *)CONCAT31((int3)((uint)(CONCAT31((int3)((uint)unaff_EBX >> 8),0x42) + 3) >> 8),
                             0x43);
  pcVar1 = (char *)(unaff_ESI + -0x4c3bffbe + (unaff_EBP + 1) * 4);
  *pcVar1 = *pcVar1 + (char)(param_3 + 1);
  cVar10 = (char)((uint)(param_2 + 2) >> 8);
  cVar3 = cVar3 + cVar7 + cVar10;
  pcVar1 = (char *)(param_3 + 0x43 + (unaff_EBP + 1) * 4);
  *pcVar1 = *pcVar1 + 'C';
  pcVar1 = (char *)(unaff_EDI * 5 + 0x43);
  *pcVar1 = *pcVar1 + cVar10;
  pcVar4 = (char *)CONCAT22(uVar6,CONCAT11(cVar5 + 'B',cVar3));
  iVar9 = CONCAT31((int3)((uint)(param_2 + 2) >> 8),0x42) + 1;
  pcVar4[-0x7bffbdc5] = pcVar4[-0x7bffbdc5] + cVar3;
  *(undefined4 *)(param_1 + -4) = 0xa40043c0;
  sVar8 = (short)iVar9 + 1;
  *pcVar4 = *pcVar4 + cVar3;
  pcVar1 = (char *)(CONCAT22((short)((uint)iVar9 >> 0x10),sVar8) + 0x44 + (int)pcVar4 * 8);
  *pcVar1 = *pcVar1 + 'C';
  *pcVar4 = *pcVar4 + cVar7;
  *puVar11 = *puVar11 << 0x18 | *puVar11 >> 8;
  pcVar4 = pcVar4 + -1;
  return CONCAT22((short)((uint)pcVar4 >> 0x10),
                  CONCAT11((char)((uint)pcVar4 >> 8) + (char)sVar8 + '\x02',(char)pcVar4));
}


