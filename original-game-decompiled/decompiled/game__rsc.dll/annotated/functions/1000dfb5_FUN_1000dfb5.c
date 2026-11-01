
/* ==== FUN_1000dfb5 @ 1000dfb5 ==== 
 * signature: undefined __fastcall FUN_1000dfb5(uint param_1, uint param_2)
 * body: 1000dfb5-1000dfde
 */

void __fastcall FUN_1000dfb5(uint param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x1000e077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_1000df57::switchdataD_1000e080)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x1000dfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_1000df57::switchdataD_1000e080)[param_2 & param_1])();
    return;
  }
}


