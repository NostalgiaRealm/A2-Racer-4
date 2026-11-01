
/* ==== FUN_004038d9 @ 004038d9 ==== 
 * signature: undefined FUN_004038d9(void)
 * body: 004038d9-004038db
 */

void __fastcall FUN_004038d9(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  char unaff_BL;
  int unaff_ESI;
  int unaff_EDI;
  byte in_AF;
  
  bVar1 = 9 < ((byte)in_EAX & 0xf) | in_AF;
  bVar2 = (byte)in_EAX + bVar1 * -6 & 0xf;
  *(char *)(param_1 + unaff_EDI) =
       *(char *)(param_1 + unaff_EDI) +
       (char)(CONCAT11((char)((uint)in_EAX >> 8) - bVar1,bVar2 - 0x39) + 1 >> 8);
  *(char *)(param_1 + unaff_EDI) = *(char *)(param_1 + unaff_EDI) + unaff_BL;
  *(char *)(param_1 + unaff_EDI) = *(char *)(param_1 + unaff_EDI) + (char)param_2;
  *(char *)(param_1 + unaff_EDI) = *(char *)(param_1 + unaff_EDI) + (char)param_1;
  *(char *)(param_1 + unaff_EDI) = *(char *)(param_1 + unaff_EDI) + (bVar2 - 0x34);
  *(undefined4 *)(unaff_EDI + -0x1c + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x1c + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x18 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x18 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x14 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x14 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x10 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x10 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0xc + param_1 * 4) = *(undefined4 *)(unaff_ESI + -0xc + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -8 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -8 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -4 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -4 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x0040393f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_00403835::switchdataD_00403948)[param_2])();
  return;
}


