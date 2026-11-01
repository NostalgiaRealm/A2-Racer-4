
/* ==== FUN_00417210 @ 00417210 ==== 
 * signature: undefined __register FUN_00417210(int * param_1, undefined4 param_2, int * param_3)
 * body: 00417210-00417246
 */

void FUN_00417210(int *param_1,undefined4 param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    FUN_00417504(param_1,0xf);
    (**(code **)(*param_3 + 0x14))(param_3,param_1,param_2);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}


