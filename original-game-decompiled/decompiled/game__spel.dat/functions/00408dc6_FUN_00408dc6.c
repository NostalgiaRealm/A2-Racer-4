
/* ==== FUN_00408dc6 @ 00408dc6 ==== 
 * signature: undefined __fastcall FUN_00408dc6(int param_1, undefined4 * param_2)
 * body: 00408dc6-00408dc7
 */

void __fastcall FUN_00408dc6(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint in_EAX;
  char unaff_BL;
  int unaff_EBP;
  int unaff_ESI;
  char *unaff_EDI;
  
  *unaff_EDI = *unaff_EDI + (char)param_2;
  *(int *)(unaff_EBP + -0x72c7ffc0) = *(int *)(unaff_EBP + -0x72c7ffc0) + param_1;
  *(char *)(unaff_ESI + -0x73) = *(char *)(unaff_ESI + -0x73) + (char)param_1;
  *(char *)(param_1 + -0x73) = *(char *)(param_1 + -0x73) + unaff_BL + '\x01';
  pcVar1 = (char *)((in_EAX | 0x8d) + 0x48905007);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Could not recover jumptable at 0x00408df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)();
  return;
}


