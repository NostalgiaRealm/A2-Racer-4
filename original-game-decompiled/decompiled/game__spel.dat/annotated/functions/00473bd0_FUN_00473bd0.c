
/* ==== FUN_00473bd0 @ 00473bd0 ==== 
 * signature: undefined __cdecl FUN_00473bd0(uint * param_1, int param_2)
 * body: 00473bd0-00473beb
 */

void __cdecl FUN_00473bd0(uint *param_1,int param_2)

{
  *param_1 = (*(uint *)(param_2 + 0x10) >> 8 & 0xff) << 8 |
             CONCAT22((short)(*param_1 >> 0x10),(ushort)(byte)*param_1);
  return;
}


