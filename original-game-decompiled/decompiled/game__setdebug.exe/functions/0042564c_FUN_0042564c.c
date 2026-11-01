
/* ==== FUN_0042564c @ 0042564c ==== 
 * signature: undefined4 __register FUN_0042564c(int * param_1, int * param_2, int * param_3)
 * body: 0042564c-0042567b
 */

undefined4 FUN_0042564c(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    FUN_004256ac(param_1,param_2,param_3);
  }
  return uVar1;
}


