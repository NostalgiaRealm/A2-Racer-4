
/* ==== FUN_004070dc @ 004070dc ==== 
 * signature: uint __register FUN_004070dc(uint param_1, uint param_2)
 * body: 004070dc-004070e7
 */

uint FUN_004070dc(uint param_1,uint param_2)

{
  return param_1 | (param_2 & 0xff0000) << 8;
}


