
/* ==== FUN_0053a210 @ 0053a210 ==== 
 * signature: int __cdecl FUN_0053a210(int param_1)
 * body: 0053a210-0053a233
 */

int __cdecl FUN_0053a210(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) * 0x4b ^ *(uint *)(param_1 + 8);
  return ((int)uVar1 >> 8) * 0x3ff + uVar1;
}


