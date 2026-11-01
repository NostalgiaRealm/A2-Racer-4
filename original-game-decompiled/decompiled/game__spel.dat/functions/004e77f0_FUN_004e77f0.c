
/* ==== FUN_004e77f0 @ 004e77f0 ==== 
 * signature: undefined __thiscall FUN_004e77f0(void * this, int * param_1)
 * body: 004e77f0-004e7842
 */

void __thiscall FUN_004e77f0(void *this,int *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571de3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004dbf50(param_1,(int *)((int)this + 8));
                    /* WARNING: Could not recover jumptable at 0x004e783c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e78f4)[*(int *)((int)this + 8)])();
  return;
}


