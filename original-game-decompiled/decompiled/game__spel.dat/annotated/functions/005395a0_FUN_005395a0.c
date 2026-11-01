
/* ==== FUN_005395a0 @ 005395a0 ==== 
 * signature: undefined __cdecl FUN_005395a0(int param_1, undefined4 param_2)
 * body: 005395a0-005395d7
 */

void __cdecl FUN_005395a0(int param_1,undefined4 param_2)

{
  FUN_00516530(param_1);
  FUN_0051a280(param_1,&DAT_0074c610);
  DAT_0074c614 = DAT_0074c614 + 1;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x400;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


