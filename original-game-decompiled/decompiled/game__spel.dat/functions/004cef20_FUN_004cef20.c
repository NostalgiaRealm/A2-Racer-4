
/* ==== FUN_004cef20 @ 004cef20 ==== 
 * signature: undefined __thiscall FUN_004cef20(void * this, int param_1)
 * body: 004cef20-004cef54
 */

void __thiscall FUN_004cef20(void *this,int param_1)

{
  int iVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056f85b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00576a88;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)((int)this + 8) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x004cef4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004cf0f4)[iVar1])();
  return;
}


