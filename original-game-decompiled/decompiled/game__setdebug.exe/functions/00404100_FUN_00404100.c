
/* ==== FUN_00404100 @ 00404100 ==== 
 * signature: uint __register FUN_00404100(int param_1)
 * body: 00404100-00404109
 */

uint FUN_00404100(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1;
}


