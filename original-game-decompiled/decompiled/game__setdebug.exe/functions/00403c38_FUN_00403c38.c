
/* ==== FUN_00403c38 @ 00403c38 ==== 
 * signature: undefined4 __register FUN_00403c38(int param_1)
 * body: 00403c38-00403c3f
 */

undefined4 FUN_00403c38(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


