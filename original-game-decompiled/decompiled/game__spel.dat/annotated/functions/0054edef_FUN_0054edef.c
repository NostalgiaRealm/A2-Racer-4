
/* ==== FUN_0054edef @ 0054edef ==== 
 * signature: undefined __cdecl FUN_0054edef(int param_1, uint param_2)
 * body: 0054edef-0054ee08
 */

void __cdecl FUN_0054edef(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = ~param_2 & *(uint *)(param_1 + 0xc) | param_2 & 0x7fff;
  return;
}


