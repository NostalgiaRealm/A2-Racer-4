
/* ==== FUN_00473b80 @ 00473b80 ==== 
 * signature: undefined __cdecl FUN_00473b80(uint * param_1, int param_2)
 * body: 00473b80-00473b9c
 */

void __cdecl FUN_00473b80(uint *param_1,int param_2)

{
  *param_1 = (uint)*(byte *)(param_2 + 0x12) << 0x10 | *param_1 & 0xff00ffff;
  return;
}


