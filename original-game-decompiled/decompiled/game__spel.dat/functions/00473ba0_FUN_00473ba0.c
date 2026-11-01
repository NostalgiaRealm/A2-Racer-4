
/* ==== FUN_00473ba0 @ 00473ba0 ==== 
 * signature: undefined __cdecl FUN_00473ba0(undefined4 * param_1, int param_2)
 * body: 00473ba0-00473bc7
 */

void __cdecl FUN_00473ba0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 1);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = (uint)bVar1;
  return;
}


