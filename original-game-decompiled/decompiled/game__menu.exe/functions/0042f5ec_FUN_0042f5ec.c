
/* ==== FUN_0042f5ec @ 0042f5ec ==== 
 * signature: undefined4 __register FUN_0042f5ec(int * param_1, int * param_2, int * param_3)
 * body: 0042f5ec-0042f61b
 */

undefined4 FUN_0042f5ec(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    FUN_0042f64c(param_1,param_2,param_3);
  }
  return uVar1;
}


