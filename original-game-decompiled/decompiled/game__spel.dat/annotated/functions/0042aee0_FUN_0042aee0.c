
/* ==== FUN_0042aee0 @ 0042aee0 ==== 
 * signature: int __stdcall FUN_0042aee0(void)
 * body: 0042aee0-0042af4b;0042af54-0042af62
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042af4c-0042af53
 */

int FUN_0042aee0(void)

{
  void *pvVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a250;
  local_c = ExceptionList;
  if (DAT_006c2f44 == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0xe10);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      DAT_006c2f44 = 0;
    }
    else {
      DAT_006c2f44 = FUN_0042aeb0(pvVar1);
    }
    local_4 = 0xffffffff;
    if (DAT_006c2f44 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s___s___d_Could_not_create_a_conne_00596cb4);
    }
  }
  ExceptionList = local_c;
  return DAT_006c2f44;
}


