
/* ==== FUN_00455080 @ 00455080 ==== 
 * signature: int * __register FUN_00455080(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 00455080-004550a3
 */

int * FUN_00455080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004ac8e4 == (int *)0x0) {
    DAT_004ac8e4 = FUN_00454e80((int *)&DAT_00454e24,'\x01',param_3);
  }
  return DAT_004ac8e4;
}


