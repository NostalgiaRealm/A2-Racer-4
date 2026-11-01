
/* ==== FUN_0055b506 @ 0055b506 ==== 
 * signature: undefined __fastcall FUN_0055b506(undefined4 param_1, undefined4 param_2)
 * body: 0055b506-0055b507
 */

void __fastcall FUN_0055b506(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  char in_CF;
  
  *(char *)(unaff_EBP + -0x4adfffab) =
       (*(char *)(unaff_EBP + -0x4adfffab) - (char)((uint)param_2 >> 8)) - in_CF;
  pcVar1 = (char *)(unaff_ESI * 4 + -0x4abfffab);
  *pcVar1 = *pcVar1 + (char)((uint)param_1 >> 8);
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + (char)param_1;
  return;
}


