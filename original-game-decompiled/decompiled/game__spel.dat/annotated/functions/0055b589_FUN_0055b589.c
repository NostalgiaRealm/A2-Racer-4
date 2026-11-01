
/* ==== FUN_0055b589 @ 0055b589 ==== 
 * signature: undefined4 __fastcall FUN_0055b589(int param_1)
 * body: 0055b589-0055b5aa;0055b5b8-0055b5d4
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_0055b589(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  switch(param_1) {
  case 0:
    goto switchD_0055b577_caseD_0;
  case 1:
switchD_0055b577_caseD_1:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    return *(undefined4 *)(unaff_EBP + 8);
  case 2:
switchD_0055b577_caseD_2:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    return *(undefined4 *)(unaff_EBP + 8);
  case 3:
switchD_0055b577_caseD_3:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
    return *(undefined4 *)(unaff_EBP + 8);
  default:
    uVar2 = param_1 - ((uint)unaff_EDI & 3);
    switch((uint)unaff_EDI & 3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -1);
      uVar3 = uVar2 >> 2;
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -1);
      if (uVar3 < 8) {
LAB_0055b580:
                    /* WARNING: Could not recover jumptable at 0x0055b582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&PTR_caseD_0_0055b650)[-(uVar2 >> 2)])();
        return uVar1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_0055b577_caseD_1;
      case 2:
        goto switchD_0055b577_caseD_2;
      case 3:
        goto switchD_0055b577_caseD_3;
      }
      break;
    case 2:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -2);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -2);
      if (uVar3 < 8) goto LAB_0055b580;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_0055b577_caseD_1;
      case 2:
        goto switchD_0055b577_caseD_2;
      case 3:
        goto switchD_0055b577_caseD_3;
      }
      break;
    case 3:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -3);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -3);
      if (uVar3 < 8) goto LAB_0055b580;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_0055b577_caseD_1;
      case 2:
        goto switchD_0055b577_caseD_2;
      case 3:
        goto switchD_0055b577_caseD_3;
      }
    }
switchD_0055b577_caseD_0:
    return *(undefined4 *)(unaff_EBP + 8);
  }
}


