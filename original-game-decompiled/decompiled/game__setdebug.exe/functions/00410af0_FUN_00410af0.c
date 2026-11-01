
/* ==== FUN_00410af0 @ 00410af0 ==== 
 * signature: undefined4 __register FUN_00410af0(int * param_1)
 * body: 00410af0-00410b23
 */

undefined4 FUN_00410af0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,0,1);
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1,0,CONCAT22(extraout_var,2));
  (**(code **)(*param_1 + 0xc))(param_1,uVar1,0);
  return uVar2;
}


