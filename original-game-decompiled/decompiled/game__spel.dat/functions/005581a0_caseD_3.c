
/* ==== switchD_0055812d::caseD_3 @ 005581a0 ==== 
 * signature: undefined __fastcall caseD_3(uint param_1, uint param_2)
 * body: 005581a0-005581b8;005581dc-00558225;00558240-0055824a;0055824c-0055825c
 */

void __fastcall switchD_0055812d::caseD_3(uint param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0055821f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_00558115::switchdataD_00558228)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x005581b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_00558115::switchdataD_00558228)[param_2 & param_1])();
    return;
  }
}


