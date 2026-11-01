
/* ==== FUN_00473c20 @ 00473c20 ==== 
 * signature: undefined __cdecl FUN_00473c20(uint * param_1, int param_2)
 * body: 00473c20-00473c39
 */

void __cdecl FUN_00473c20(uint *param_1,int param_2)

{
  *param_1 = (*(uint *)(param_2 + 0x10) ^ *param_1) & 0xff ^ *param_1;
  return;
}


