
/* ==== FUN_0055b631 @ 0055b631 ==== 
 * signature: undefined __fastcall FUN_0055b631(undefined4 param_1)
 * body: 0055b631-0055b633
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_0055b631(undefined4 param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  int unaff_EBX;
  int unaff_ESI;
  
  pcVar1 = (char *)(unaff_ESI * 5 + 0x55);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
  pcVar1 = (char *)(unaff_ESI * 5 + 0x55);
  *pcVar1 = *pcVar1 + in_AH;
  pcVar1 = (char *)(unaff_ESI * 5 + 0x55);
  *pcVar1 = *pcVar1 + (char)((uint)param_1 >> 8);
  pcVar1 = (char *)(unaff_ESI * 5 + 0x55);
  *pcVar1 = *pcVar1 + 'U';
  pcVar1 = (char *)(unaff_ESI * 5 + 0x55);
  *pcVar1 = *pcVar1 + (char)((uint)unaff_EBX >> 8);
  pcVar1 = (char *)(unaff_ESI * 5 + -0x4968ffab);
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)(unaff_EBX + -0x76e371bc) = *(char *)(unaff_EBX + -0x76e371bc) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


