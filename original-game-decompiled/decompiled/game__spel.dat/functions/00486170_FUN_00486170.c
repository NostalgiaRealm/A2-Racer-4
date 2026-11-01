
/* ==== FUN_00486170 @ 00486170 ==== 
 * signature: undefined __fastcall FUN_00486170(int param_1)
 * body: 00486170-00486187
 */

void __fastcall FUN_00486170(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00486179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
    return;
  }
  FUN_004c3fa0((byte *)s_Empty_tree_005ab150);
  return;
}


