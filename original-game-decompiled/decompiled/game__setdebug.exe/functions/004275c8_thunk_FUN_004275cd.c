
/* ==== thunk_FUN_004275cd @ 004275c8 ==== 
 * signature: bool __register thunk_FUN_004275cd(int param_1, int param_2)
 * body: 004275c8-004275c9
 * thunk to: FUN_004275cd
 */

bool thunk_FUN_004275cd(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}


