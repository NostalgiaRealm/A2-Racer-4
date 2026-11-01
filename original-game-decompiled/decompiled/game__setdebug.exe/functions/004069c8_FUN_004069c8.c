
/* ==== FUN_004069c8 @ 004069c8 ==== 
 * signature: undefined FUN_004069c8(void)
 * body: 004069c8-004069d3
 */

uint FUN_004069c8(uint param_1,uint param_2)

{
  return param_1 | (param_2 & 0xff0000) << 8;
}


