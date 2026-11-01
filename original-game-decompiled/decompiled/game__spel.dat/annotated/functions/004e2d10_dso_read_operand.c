
/* ==== dso_read_operand @ 004e2d10 ==== 
 * signature: undefined __stdcall dso_read_operand(int * param_1)
 * body: 004e2d10-004e2d39
 * note: ANALYST: Operand factory, tags 0-5. [confidence: confirmed] [evidence: table 0x4e2f74]
 */

/* ANALYST: Operand factory, tags 0-5. [confidence: confirmed] [evidence: table 0x4e2f74] */

void dso_read_operand(int *param_1)

{
  uint uVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0057178d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d4610(param_1);
                    /* WARNING: Could not recover jumptable at 0x004e2d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e2f74)[uVar1])();
  return;
}


