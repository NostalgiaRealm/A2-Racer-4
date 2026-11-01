
/* ==== FUN_00402d00 @ 00402d00 ==== 
 * signature: undefined __stdcall FUN_00402d00(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * body: 00402d00-00402d29
 */

void FUN_00402d00(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


