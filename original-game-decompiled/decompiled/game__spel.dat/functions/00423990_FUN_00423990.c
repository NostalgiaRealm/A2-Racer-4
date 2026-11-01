
/* ==== FUN_00423990 @ 00423990 ==== 
 * signature: undefined __cdecl FUN_00423990(int param_1, int param_2)
 * body: 00423990-004239da
 */

void __cdecl FUN_00423990(int param_1,int param_2)

{
  if (param_2 == 0) {
    DAT_005d3444 = DAT_005d3444 + -1;
    if (DAT_005d3444 < 0) {
      DAT_005d3444 = 0;
    }
  }
  else {
    DAT_005d3444 = DAT_005d3444 + 1;
  }
  FUN_00423930(param_1,param_2);
  DAT_005d343c = (uint)(DAT_005d3444 != 0);
  return;
}


