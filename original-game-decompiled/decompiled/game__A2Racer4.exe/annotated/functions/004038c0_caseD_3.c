
/* ==== switchD_0040384d::caseD_3 @ 004038c0 ==== 
 * signature: undefined __fastcall caseD_3(uint param_1, uint param_2)
 * body: 004038c0-004038d8;004038fc-00403945;00403960-0040396a;0040396c-0040397c
 */

void __fastcall switchD_0040384d::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  puVar2 = (undefined4 *)(unaff_ESI + 1);
  puVar3 = (undefined4 *)(unaff_EDI + 1);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1b) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1b);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x17) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x17);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x13) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x13);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xf) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xf);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xb) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xb);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -7) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -7);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -3) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -3);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0040393f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_00403835::switchdataD_00403948)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x004038d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_00403835::switchdataD_00403948)[param_2 & param_1])();
    return;
  }
}


