
/* ==== FUN_00404418 @ 00404418 ==== 
 * signature: uint __register FUN_00404418(int param_1)
 * body: 00404418-00404421
 */

uint FUN_00404418(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1;
}


