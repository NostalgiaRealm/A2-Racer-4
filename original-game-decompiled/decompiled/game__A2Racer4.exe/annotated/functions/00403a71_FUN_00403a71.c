
/* ==== FUN_00403a71 @ 00403a71 ==== 
 * signature: undefined __fastcall FUN_00403a71(int param_1, int param_2)
 * body: 00403a71-00403a73
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_00403a71(int param_1,int param_2)

{
  char cVar1;
  int in_EAX;
  char unaff_BH;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  char unaff_retaddr;
  
  cVar1 = -unaff_retaddr;
  *(uint *)(in_EAX + -4) =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW1('\0',unaff_retaddr) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(cVar1 < '\0') * 0x80 |
       (uint)(cVar1 == '\0') * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (uint)(unaff_retaddr != '\0') |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[param_2 + 0x3ac40041] = unaff_EDI[param_2 + 0x3ac40041] + unaff_BH;
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x1d) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x1e);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x19) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x1a);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x15) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x16);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x11) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x12);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0xd) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0xe);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 9) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 10);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 5) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 6);
                    /* WARNING: Could not recover jumptable at 0x00403ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_004039b7::switchdataD_00403ae0)[param_2])();
  return;
}


