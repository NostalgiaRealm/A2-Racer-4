
/* ==== FUN_00418f14 @ 00418f14 ==== 
 * signature: undefined __register FUN_00418f14(int * param_1, int * param_2, int * param_3, int * param_4)
 * body: 00418f14-00418f91
 */

void FUN_00418f14(int *param_1,int *param_2,int *param_3,int *param_4)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xb);
  FUN_004195ac(param_3,9);
  StretchBlt((HDC)param_1[1],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
             (HDC)param_3[1],*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],
             param_1[8]);
  (**(code **)(*param_1 + 0xc))();
  return;
}


