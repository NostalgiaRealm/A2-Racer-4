
/* ==== FUN_00402d78 @ 00402d78 ==== 
 * signature: undefined __register FUN_00402d78(int * param_1, undefined * UNRECOVERED_JUMPTABLE, int * param_3)
 * body: 00402d78-00402da3
 */

void FUN_00402d78(int *param_1,undefined *UNRECOVERED_JUMPTABLE,int *param_3)

{
  if ((undefined *)0xfeffffff < UNRECOVERED_JUMPTABLE) {
    FUN_00405308(param_3,*(int **)(((uint)UNRECOVERED_JUMPTABLE & 0xffffff) + (int)param_1));
    return;
  }
  if ((undefined *)0xfdffffff < UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Could not recover jumptable at 0x00402d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)(short)UNRECOVERED_JUMPTABLE + *param_1))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00402d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


