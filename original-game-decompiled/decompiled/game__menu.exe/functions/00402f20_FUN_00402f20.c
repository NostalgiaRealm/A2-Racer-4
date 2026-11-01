
/* ==== FUN_00402f20 @ 00402f20 ==== 
 * signature: undefined4 __register FUN_00402f20(int param_1)
 * body: 00402f20-00402f29
 */

undefined4 FUN_00402f20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + -0x24) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + -0x24);
  }
  return uVar1;
}


