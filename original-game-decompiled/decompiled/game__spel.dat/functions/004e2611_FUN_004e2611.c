
/* ==== FUN_004e2611 @ 004e2611 ==== 
 * signature: int __stdcall FUN_004e2611(void)
 * body: 004e2611-004e263d
 */

int FUN_004e2611(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  short unaff_BP;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar4 = (uint)*(short *)(unaff_EDI + 0x18 + in_EAX * 2);
  if ((*(int *)(unaff_ESI + 0x38) == 0) ||
     ((uint)(*(int *)(unaff_ESI + 0x3c) - *(int *)(unaff_ESI + 0x38) >> 2) <= uVar4)) {
    FUN_004e2790();
  }
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x38) + uVar4 * 4);
LAB_004e270c:
  unaff_BP = unaff_BP + -1;
  if (unaff_BP < 0) {
    return iVar1;
  }
  iVar3 = *(int *)(iVar1 + 4);
  if (iVar3 == 0x43) {
                    /* WARNING: Could not recover jumptable at 0x004e260a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&PTR_FUN_004e2720)[*(int *)(unaff_EDI + 4 + unaff_BP * 4) + -0x36])();
    return iVar1;
  }
  uVar2 = FUN_004d4020(iVar3);
  if ((char)uVar2 == '\0') goto LAB_004e26a9;
  iVar3 = (int)unaff_BP;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_004e272f)[*(int *)(unaff_EDI + 4 + iVar3 * 4)]) {
  case 0:
    goto switchD_004e268b_caseD_0;
  case 1:
    uVar4 = (uint)*(short *)(unaff_EDI + 0x18 + iVar3 * 2);
    iVar3 = iVar1 + 0x44;
    break;
  case 2:
    uVar4 = (uint)*(short *)(unaff_EDI + 0x18 + iVar3 * 2);
    iVar3 = iVar1 + 0x80;
  }
  goto LAB_004e26cf;
LAB_004e26a9:
  if (iVar3 != 0x42) goto LAB_004e270c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_004e274a)[*(int *)(unaff_EDI + 4 + unaff_BP * 4)]) {
  case 0:
switchD_004e268b_caseD_0:
    uVar4 = (uint)*(short *)(unaff_EDI + 0x18 + unaff_BP * 2);
    iVar3 = iVar1 + 0x2c;
LAB_004e26cf:
    if ((*(int *)(iVar3 + 4) != 0) &&
       (uVar4 < (uint)(*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2))) goto LAB_004e2706;
    break;
  case 1:
    uVar4 = (uint)*(short *)(unaff_EDI + 0x18 + unaff_BP * 2);
    iVar3 = iVar1 + 0x40;
    if ((*(int *)(iVar1 + 0x44) != 0) &&
       (uVar4 < (uint)(*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x44) >> 2))) goto LAB_004e2706;
  }
  FUN_004e2790();
LAB_004e2706:
  iVar1 = *(int *)(*(int *)(iVar3 + 4) + uVar4 * 4);
  goto LAB_004e270c;
}


