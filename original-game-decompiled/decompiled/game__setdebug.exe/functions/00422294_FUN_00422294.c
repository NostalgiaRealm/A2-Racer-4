
/* ==== FUN_00422294 @ 00422294 ==== 
 * signature: uint __register FUN_00422294(uint param_1, uint param_2)
 * body: 00422294-004222b7
 */

uint FUN_00422294(uint param_1,uint param_2)

{
  if ((int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) <
      (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f))) {
    return param_1;
  }
  return param_2;
}


