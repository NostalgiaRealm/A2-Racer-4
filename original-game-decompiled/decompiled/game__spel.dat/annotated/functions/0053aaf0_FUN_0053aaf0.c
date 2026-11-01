
/* ==== FUN_0053aaf0 @ 0053aaf0 ==== 
 * signature: int __cdecl FUN_0053aaf0(int * param_1)
 * body: 0053aaf0-0053ab22
 */

int __cdecl FUN_0053aaf0(int *param_1)

{
  uint uVar1;
  uint local_8 [2];
  
  (**(code **)(*param_1 + 4))();
  uVar1 = local_8[0] ^ (uint)local_8 ^ (uint)param_1;
  return ((int)uVar1 >> 8) * 0x3ff + uVar1;
}


