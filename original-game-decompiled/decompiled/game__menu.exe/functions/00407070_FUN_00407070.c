
/* ==== FUN_00407070 @ 00407070 ==== 
 * signature: uint __register FUN_00407070(uint param_1, int param_2)
 * body: 00407070-0040707b
 */

uint FUN_00407070(uint param_1,int param_2)

{
  return param_1 & 0xffff | param_2 << 0x10;
}


