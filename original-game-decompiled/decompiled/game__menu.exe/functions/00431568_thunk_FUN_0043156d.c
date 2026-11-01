
/* ==== thunk_FUN_0043156d @ 00431568 ==== 
 * signature: bool __register thunk_FUN_0043156d(int param_1, int param_2)
 * body: 00431568-00431569
 * thunk to: FUN_0043156d
 */

bool thunk_FUN_0043156d(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}


