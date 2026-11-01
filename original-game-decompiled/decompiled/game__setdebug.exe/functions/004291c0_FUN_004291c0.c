
/* ==== FUN_004291c0 @ 004291c0 ==== 
 * signature: undefined4 __register FUN_004291c0(int param_1, int param_2)
 * body: 004291c0-004291e1
 */

undefined4 FUN_004291c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x140) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x140),param_2);
  }
  return uVar1;
}


