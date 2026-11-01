
/* ==== FUN_0041d7f0 @ 0041d7f0 ==== 
 * signature: undefined __stdcall FUN_0041d7f0(int param_1, int param_2, int param_3, undefined4 param_4)
 * body: 0041d7f0-0041d83d
 */

void FUN_0041d7f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_20 [7];
  undefined4 local_4;
  
  FUN_004166b0((undefined1 *)local_20);
  FUN_0041d390(param_1,(int)local_20,param_2,param_3);
  local_4 = param_4;
  FUN_0040dfc0(*(void **)(param_1 + 0x1c),*(undefined4 **)((int)*(void **)(param_1 + 0x1c) + 8),1,
               local_20);
  return;
}


