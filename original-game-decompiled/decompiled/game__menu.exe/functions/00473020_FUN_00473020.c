
/* ==== FUN_00473020 @ 00473020 ==== 
 * signature: undefined FUN_00473020(void)
 * body: 00473020-004730be
 */

void FUN_00473020(int *param_1,int param_2)

{
  undefined6 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar6;
  undefined2 uVar7;
  char *pcVar8;
  char cVar9;
  undefined2 uVar10;
  undefined4 unaff_EBX;
  undefined2 uVar11;
  int unaff_EDI;
  int *piVar5;
  
  cVar9 = (char)unaff_EBX;
  *(char *)(unaff_EDI * 9) = *(char *)(unaff_EDI * 9) + cVar9;
  cVar3 = (char)param_1;
  *(char *)param_1 = (char)*param_1 + cVar3;
  DAT_dc0000ff = DAT_dc0000ff + cVar9;
  *param_1 = *param_1 + 1;
  uVar7 = (undefined2)((uint)param_1 >> 0x10);
  cVar6 = (char)((uint)param_1 >> 8) + cVar9;
  piVar5 = (int *)CONCAT22(uVar7,CONCAT11(cVar6,cVar3));
  *piVar5 = *piVar5 + 1;
  cVar6 = cVar6 + cVar9;
  piVar5 = (int *)CONCAT22(uVar7,CONCAT11(cVar6,cVar3));
  pcVar8 = (char *)*(undefined6 *)(param_2 + -2);
  uVar11 = (undefined2)((uint)unaff_EBX >> 0x10);
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *pcVar8 = *pcVar8 + cVar3;
  *piVar5 = *piVar5 + 1;
  cVar6 = cVar6 + cVar9;
  piVar5 = (int *)CONCAT22(uVar7,CONCAT11(cVar6,cVar3));
  uVar10 = CONCAT11((char)((uint)unaff_EBX >> 8) << 2,cVar9);
  pcVar8 = (char *)CONCAT22(uVar11,uVar10);
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *pcVar8 = *pcVar8 + cVar3;
  *piVar5 = *piVar5 + 1;
  cVar6 = cVar6 + cVar9;
  cVar4 = cVar3 + -1;
  piVar5 = (int *)CONCAT31((int3)(CONCAT22(uVar7,CONCAT11(cVar6,cVar3)) >> 8),cVar4);
  *(char *)piVar5 = (char)*piVar5 + cVar4;
  DAT_dc0000ff = DAT_dc0000ff + cVar4;
  *piVar5 = *piVar5 + 1;
  cVar6 = cVar6 + cVar9;
  piVar5 = (int *)CONCAT22(uVar7,CONCAT11(cVar6,cVar4));
  *piVar5 = *piVar5 + 1;
  cVar6 = cVar6 + cVar9;
  piVar5 = (int *)CONCAT22(uVar7,CONCAT11(cVar6,cVar4));
  uVar1 = *(undefined6 *)(param_2 + -5);
  pcVar8 = (char *)uVar1;
  *(char *)piVar5 = (char)*piVar5 + cVar4;
  *pcVar8 = *pcVar8 + (char)uVar1;
  *piVar5 = *piVar5 + 1;
  cVar6 = cVar6 + cVar9;
  piVar5 = (int *)CONCAT22(uVar7,CONCAT11(cVar6,cVar4));
  uVar1 = *(undefined6 *)(param_2 + -6);
  pcVar8 = (char *)CONCAT22(uVar11,uVar10);
  *(char *)piVar5 = (char)*piVar5 + cVar4;
  *pcVar8 = *pcVar8 + (char)uVar1;
  *piVar5 = *piVar5 + 1;
  uVar1 = *(undefined6 *)(param_2 + -7);
  piVar5 = (int *)CONCAT31((int3)(CONCAT22(uVar7,CONCAT11(cVar6 + cVar9,cVar4)) >> 8),0xff);
  *(char *)piVar5 = (char)*piVar5 + -1;
  DAT_dc0000ff = DAT_dc0000ff + (char)uVar1;
  *piVar5 = *piVar5 + 1;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


