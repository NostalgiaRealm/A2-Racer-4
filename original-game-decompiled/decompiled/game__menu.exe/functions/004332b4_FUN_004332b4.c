
/* ==== FUN_004332b4 @ 004332b4 ==== 
 * signature: undefined4 __register FUN_004332b4(int param_1, int param_2)
 * body: 004332b4-004332d5
 */

undefined4 FUN_004332b4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x140) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x140),param_2);
  }
  return uVar1;
}


