
/* ==== FUN_00404af4 @ 00404af4 ==== 
 * signature: undefined4 __register FUN_00404af4(int param_1)
 * body: 00404af4-00404afb
 */

undefined4 FUN_00404af4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


