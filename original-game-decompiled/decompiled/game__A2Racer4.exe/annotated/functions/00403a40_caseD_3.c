
/* ==== switchD_004039dd::caseD_3 @ 00403a40 ==== 
 * signature: undefined __fastcall caseD_3(uint param_1, uint param_2)
 * body: 00403a40-00403a70;00403a94-00403add;00403af8-00403b04;00403b1c-00403b34
 */

void __fastcall switchD_004039dd::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 1) = *(undefined1 *)(unaff_ESI + 1);
  puVar2 = (undefined4 *)(unaff_ESI + -3);
  puVar3 = (undefined4 *)(unaff_EDI + -3);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x19 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x19 + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x15 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x15 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x11 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x11 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xd + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xd + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 9 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 9 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 5 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 5 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 1 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 1 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00403ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_004039b7::switchdataD_00403ae0)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x00403a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_004039b7::switchdataD_00403ae0)[param_2 & param_1])();
    return;
  }
}


