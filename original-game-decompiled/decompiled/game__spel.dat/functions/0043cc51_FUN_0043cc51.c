
/* ==== FUN_0043cc51 @ 0043cc51 ==== 
 * signature: ushort __fastcall FUN_0043cc51(int param_1)
 * body: 0043cc51-0043cc53
 */

ushort __fastcall FUN_0043cc51(int param_1)

{
  undefined2 in_AX;
  
  *(char *)(param_1 + -0x35) = *(char *)(param_1 + -0x35) + (char)((uint)param_1 >> 8);
  return CONCAT11((char)((ushort)in_AX >> 8) * '\x02',(char)in_AX) | 0xcb;
}


