
/* ==== FUN_00404d41 @ 00404d41 ==== 
 * signature: undefined FUN_00404d41(void)
 * body: 00404d41-00404d43
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_00404d41(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char in_AL;
  int unaff_EBX;
  int unaff_EBP;
  
  pcVar1 = (char *)(unaff_EBP + 0x3f + param_1 * 2);
  *pcVar1 = *pcVar1 + (char)((uint)param_1 >> 8);
  pcVar1 = (char *)(unaff_EBP + 0x3f + param_1 * 2);
  *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  pcVar1 = (char *)(unaff_EBP + 0x3f + param_1 * 2);
  *pcVar1 = *pcVar1 + (char)((uint)unaff_EBX >> 8);
  pcVar1 = (char *)(unaff_EBP + 0x4d8c003f + param_1 * 2);
  *pcVar1 = *pcVar1 + in_AL + '\x01';
  pcVar1 = (char *)(unaff_EBP + 0x4da7003f + param_1 * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)(unaff_EBX + -0x76e371bc) = *(char *)(unaff_EBX + -0x76e371bc) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


