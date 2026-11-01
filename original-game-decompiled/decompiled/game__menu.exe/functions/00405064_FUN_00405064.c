
/* ==== FUN_00405064 @ 00405064 ==== 
 * signature: undefined4 __register FUN_00405064(int param_1)
 * body: 00405064-0040506b
 */

undefined4 FUN_00405064(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


