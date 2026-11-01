
/* ==== FUN_0053a240 @ 0053a240 ==== 
 * signature: int __cdecl FUN_0053a240(int * param_1)
 * body: 0053a240-0053a275
 */

int __cdecl FUN_0053a240(int *param_1)

{
  uint uVar1;
  int local_8 [2];
  
  (**(code **)(*param_1 + 8))();
  uVar1 = local_8[0] * 0x4b ^ (uint)local_8;
  return ((int)uVar1 >> 8) * 0x3ff + uVar1;
}


