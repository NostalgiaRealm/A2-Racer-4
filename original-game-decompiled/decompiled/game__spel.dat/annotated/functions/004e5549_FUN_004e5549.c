
/* ==== FUN_004e5549 @ 004e5549 ==== 
 * signature: undefined __stdcall FUN_004e5549(void)
 * body: 004e5549-004e556e
 */

void FUN_004e5549(void)

{
  double dVar1;
  undefined4 *this;
  int unaff_EBP;
  float10 extraout_ST0;
  longlong lVar2;
  double in_stack_00000014;
  int iStack00000024;
  
  lVar2 = __ftol();
  iStack00000024 = (int)lVar2;
  dVar1 = (double)(extraout_ST0 - (float10)iStack00000024 * (float10)in_stack_00000014);
  this = *(undefined4 **)(unaff_EBP + 8);
  FUN_004e0d60(this,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  *this = &PTR_FUN_005778c0;
  FUN_004e5203();
  return;
}


