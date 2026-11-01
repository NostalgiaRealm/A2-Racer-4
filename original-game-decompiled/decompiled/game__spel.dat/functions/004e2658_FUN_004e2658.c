
/* ==== FUN_004e2658 @ 004e2658 ==== 
 * signature: int __stdcall FUN_004e2658(void)
 * body: 004e2658-004e2661
 */

int FUN_004e2658(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  short unaff_BP;
  int unaff_ESI;
  int iVar4;
  int unaff_EDI;
  
  uVar3 = (uint)*(short *)(unaff_EDI + 0x18 + in_EAX * 2);
  iVar4 = unaff_ESI + 0x5c;
LAB_004e26cf:
  if ((*(int *)(iVar4 + 4) != 0) && (uVar3 < (uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2))
     ) goto LAB_004e2706;
  do {
    FUN_004e2790();
LAB_004e2706:
    do {
      iVar1 = *(int *)(*(int *)(iVar4 + 4) + uVar3 * 4);
      do {
        unaff_BP = unaff_BP + -1;
        if (unaff_BP < 0) {
          return iVar1;
        }
        iVar4 = *(int *)(iVar1 + 4);
        if (iVar4 == 0x43) {
                    /* WARNING: Could not recover jumptable at 0x004e260a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (*(code *)(&PTR_FUN_004e2720)[*(int *)(unaff_EDI + 4 + unaff_BP * 4) + -0x36])();
          return iVar4;
        }
        uVar2 = FUN_004d4020(iVar4);
        if ((char)uVar2 != '\0') {
          iVar4 = (int)unaff_BP;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((&DAT_004e272f)[*(int *)(unaff_EDI + 4 + iVar4 * 4)]) {
          case 0:
            goto switchD_004e268b_caseD_0;
          case 1:
            uVar3 = (uint)*(short *)(unaff_EDI + 0x18 + iVar4 * 2);
            iVar4 = iVar1 + 0x44;
            break;
          case 2:
            uVar3 = (uint)*(short *)(unaff_EDI + 0x18 + iVar4 * 2);
            iVar4 = iVar1 + 0x80;
          }
          goto LAB_004e26cf;
        }
      } while (iVar4 != 0x42);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&DAT_004e274a)[*(int *)(unaff_EDI + 4 + unaff_BP * 4)]) {
      case 0:
switchD_004e268b_caseD_0:
        uVar3 = (uint)*(short *)(unaff_EDI + 0x18 + unaff_BP * 2);
        iVar4 = iVar1 + 0x2c;
        goto LAB_004e26cf;
      }
      uVar3 = (uint)*(short *)(unaff_EDI + 0x18 + unaff_BP * 2);
      iVar4 = iVar1 + 0x40;
    } while ((*(int *)(iVar1 + 0x44) != 0) &&
            (uVar3 < (uint)(*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x44) >> 2)));
  } while( true );
}


