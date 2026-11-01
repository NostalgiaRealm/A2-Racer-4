
/* ==== FUN_00419200 @ 00419200 ==== 
 * signature: undefined __register FUN_00419200(int * param_1, undefined4 param_2, int * param_3)
 * body: 00419200-00419236
 */

void FUN_00419200(int *param_1,undefined4 param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    FUN_004195ac(param_1,0xf);
    (**(code **)(*param_3 + 0x14))(param_3,param_1,param_2);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}


