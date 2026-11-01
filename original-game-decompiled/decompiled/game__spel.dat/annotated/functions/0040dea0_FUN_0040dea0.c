
/* ==== FUN_0040dea0 @ 0040dea0 ==== 
 * signature: undefined __stdcall FUN_0040dea0(int param_1, int param_2, undefined4 * param_3)
 * body: 0040dea0-0040df0a
 */

void FUN_0040dea0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004166b0((undefined1 *)local_20);
  local_18 = *param_3;
  local_8 = 0x461c4000;
  local_14 = param_3[1];
  local_10 = param_3[2];
  local_4 = 0xbf000000;
  FUN_0040ddf0(param_1,param_2,(int)local_20);
  FUN_0040dfc0(*(void **)(param_1 + 0x1c),*(undefined4 **)((int)*(void **)(param_1 + 0x1c) + 8),1,
               local_20);
  return;
}


