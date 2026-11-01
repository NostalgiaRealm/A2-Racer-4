
/* ==== FUN_0043f730 @ 0043f730 ==== 
 * signature: undefined4 __register FUN_0043f730(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0043f730-0043f75c
 */

undefined4 FUN_0043f730(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     (uVar1 = FUN_00402ef0(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 8),param_3),
     (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


