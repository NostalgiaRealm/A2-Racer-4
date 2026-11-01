
/* ==== FUN_004d9bd0 @ 004d9bd0 ==== 
 * signature: undefined __stdcall FUN_004d9bd0(int param_1)
 * body: 004d9bd0-004d9c29
 */

void FUN_004d9bd0(int param_1)

{
  undefined **local_2c [2];
  int iStack_24;
  void *local_14;
  code *pcStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  pcStack_10 = FUN_00570570;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    ExceptionList = &local_14;
    FUN_004cef20(local_2c,*(int *)(param_1 + 4));
    local_2c[0] = &PTR_FUN_005778c0;
    uStack_c = 0;
                    /* WARNING: Could not recover jumptable at 0x004d9c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_004d9d40)[iStack_24 + -1])();
    return;
  }
  return;
}


