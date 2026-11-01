
/* ==== FUN_00406970 @ 00406970 ==== 
 * signature: uint __register FUN_00406970(uint param_1, int param_2)
 * body: 00406970-0040697b
 */

uint FUN_00406970(uint param_1,int param_2)

{
  return param_1 & 0xffff | param_2 << 0x10;
}


