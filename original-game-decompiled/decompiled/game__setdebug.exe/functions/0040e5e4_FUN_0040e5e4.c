
/* ==== FUN_0040e5e4 @ 0040e5e4 ==== 
 * signature: undefined4 __register FUN_0040e5e4(int param_1)
 * body: 0040e5e4-0040e5ee
 */

undefined4 FUN_0040e5e4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + -0x38) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + -0x38) + 2);
  }
  return uVar1;
}


