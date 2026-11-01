
/* ==== FUN_004173a4 @ 004173a4 ==== 
 * signature: undefined FUN_004173a4(void)
 * body: 004173a4-004173f9
 */

void FUN_004173a4(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  char *unaff_EDI;
  
  cVar7 = (char)((uint)unaff_EBX >> 8);
  cVar3 = (char)param_1 + cVar7;
  iVar5 = CONCAT31((int3)((uint)param_1 >> 8),cVar3);
  *unaff_EDI = cVar3;
  pcVar1 = (char *)(param_2 + 0x41 + unaff_EBX * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)(iVar5 + 0x280041d9);
  cVar6 = (char)((uint)param_2 >> 8);
  *pcVar1 = *pcVar1 + cVar6;
  *(int *)(unaff_EDI + 1) = iVar5;
  unaff_EDI[unaff_EBX * 8 + 5] = unaff_EDI[unaff_EBX * 8 + 5] + cVar3;
  unaff_EDI[unaff_EBX * 8 + -0x2013ffba] =
       unaff_EDI[unaff_EBX * 8 + -0x2013ffba] + (char)((uint)(param_3 + 4) >> 8);
  (&stack0xe048003e)[unaff_EBP * 4] = (&stack0xe048003e)[unaff_EBP * 4] + (char)param_3 + '\x05';
  uVar4 = in(0x41);
  pcVar1 = (char *)(CONCAT31(CONCAT21((short)((uint)param_1 >> 0x10),
                                      (char)((uint)param_1 >> 8) * '\x02'),uVar4) + 0x5c0041ec);
  *pcVar1 = *pcVar1 + (char)param_3 + '\x06';
  iVar5 = in((short)param_2);
  pcVar1 = (char *)(unaff_EBP * 5 + 0x41);
  *pcVar1 = *pcVar1 + cVar6;
  pcVar1 = (char *)((int)unaff_ESI + unaff_EBP * 8 + -0x10ffffbf);
  *pcVar1 = *pcVar1 + (char)((uint)(param_3 + 7) >> 8);
  *(char *)(iVar5 + 0x180041ac) = *(char *)(iVar5 + 0x180041ac) + (char)param_2;
  iVar5 = *unaff_ESI;
  cVar3 = (char)((uint)iVar5 >> 8);
  *(char *)(iVar5 + -0x1d) = *(char *)(iVar5 + -0x1d) + cVar3;
  pcVar2 = (code *)swi(1);
  (*pcVar2)(CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar3 + cVar7,(char)iVar5)),param_2,
            param_3 + 10);
  return;
}


