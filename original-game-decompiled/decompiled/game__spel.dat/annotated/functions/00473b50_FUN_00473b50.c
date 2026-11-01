
/* ==== FUN_00473b50 @ 00473b50 ==== 
 * signature: undefined __cdecl FUN_00473b50(undefined4 * param_1, int param_2)
 * body: 00473b50-00473b77
 */

void __cdecl FUN_00473b50(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 2);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = (uint)bVar1;
  return;
}


