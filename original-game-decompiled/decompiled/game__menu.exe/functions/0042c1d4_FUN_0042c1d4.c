
/* ==== FUN_0042c1d4 @ 0042c1d4 ==== 
 * signature: uint __register FUN_0042c1d4(uint param_1, uint param_2)
 * body: 0042c1d4-0042c1f7
 */

uint FUN_0042c1d4(uint param_1,uint param_2)

{
  if ((int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) <
      (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f))) {
    return param_1;
  }
  return param_2;
}


