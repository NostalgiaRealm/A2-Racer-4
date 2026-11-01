
/* ==== FUN_0043f830 @ 0043f830 ==== 
 * signature: undefined4 __register FUN_0043f830(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0043f830-0043f85c
 */

undefined4 FUN_0043f830(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     (uVar1 = FUN_00402ef0(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 8),param_3),
     (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


