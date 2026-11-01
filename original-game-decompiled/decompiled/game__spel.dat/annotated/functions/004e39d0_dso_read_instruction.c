
/* ==== dso_read_instruction @ 004e39d0 ==== 
 * signature: undefined __stdcall dso_read_instruction(int * param_1)
 * body: 004e39d0-004e39f8
 * note: ANALYST: Instruction factory, tags 0-6. [confidence: confirmed] [evidence: table 0x4e3c38]
 */

/* ANALYST: Instruction factory, tags 0-6. [confidence: confirmed] [evidence: table 0x4e3c38] */

void dso_read_instruction(int *param_1)

{
  uint uVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005718d5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d4610(param_1);
                    /* WARNING: Could not recover jumptable at 0x004e39f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e3c38)[uVar1])();
  return;
}


