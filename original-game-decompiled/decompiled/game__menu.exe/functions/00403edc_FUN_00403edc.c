
/* ==== FUN_00403edc @ 00403edc ==== 
 * signature: undefined4 __register FUN_00403edc(int param_1)
 * body: 00403edc-00403ee3
 */

undefined4 FUN_00403edc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


