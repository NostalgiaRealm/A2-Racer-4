
/* ==== FUN_00403a15 @ 00403a15 ==== 
 * signature: undefined __fastcall FUN_00403a15(uint param_1, uint param_2)
 * body: 00403a15-00403a3e
 */

void __fastcall FUN_00403a15(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  puVar2 = (undefined4 *)(unaff_ESI + -2);
  puVar3 = (undefined4 *)(unaff_EDI + -2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x1a + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x1a + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x16 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x16 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x12 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x12 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xe + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xe + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 10 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 10 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 6 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 6 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 2 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 2 + uVar1 * -4);
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
                    /* WARNING: Could not recover jumptable at 0x00403a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_004039b7::switchdataD_00403ae0)[param_2 & param_1])();
    return;
  }
}


