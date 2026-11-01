
/* ==== FUN_004d983d @ 004d983d ==== 
 * signature: undefined __fastcall FUN_004d983d(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 004d983d-004d983f
 */

void __fastcall
FUN_004d983d(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char unaff_BH;
  int unaff_EBP;
  void *pvStack_8;
  code *pcStack_4;
  
  *(char *)(unaff_EBP + 0x29004d96) = *(char *)(unaff_EBP + 0x29004d96) + unaff_BH;
  *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + (char)((uint)param_1 >> 8);
  pcStack_4 = FUN_00570508;
  pvStack_8 = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_8;
  (*(code *)(&PTR_FUN_004d9938)[param_5 + -1])(0);
  return;
}


