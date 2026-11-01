
/* ==== FUN_0055b499 @ 0055b499 ==== 
 * signature: undefined __fastcall FUN_0055b499(int param_1, int param_2)
 * body: 0055b499-0055b49b
 */

void __fastcall FUN_0055b499(int param_1,int param_2)

{
  undefined4 in_EAX;
  char unaff_BH;
  int unaff_ESI;
  int unaff_EDI;
  
  (&stack0x448b0051)[unaff_ESI * 4] = (&stack0x448b0051)[unaff_ESI * 4] + unaff_BH;
  *(uint *)(unaff_EDI + -0x1c + param_1 * 4) =
       CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(0x55,(char)in_EAX));
  *(undefined4 *)(unaff_EDI + -0x18 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x18 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x14 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x14 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x10 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x10 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0xc + param_1 * 4) = *(undefined4 *)(unaff_ESI + -0xc + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -8 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -8 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -4 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -4 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x0055b4ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_0055b3f5::switchdataD_0055b508)[param_2])();
  return;
}


