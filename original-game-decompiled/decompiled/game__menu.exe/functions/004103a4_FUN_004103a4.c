
/* ==== FUN_004103a4 @ 004103a4 ==== 
 * signature: undefined __register FUN_004103a4(int * param_1, int param_2, int param_3)
 * body: 004103a4-004103fb
 */

void FUN_004103a4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != param_2) {
    if ((param_3 < 0) || (param_1[2] <= param_3)) {
      FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_3);
    }
    uVar1 = FUN_004102b0(param_1,param_2);
    *(undefined4 *)(param_1[1] + param_2 * 4) = 0;
    FUN_00410150(param_1,param_2);
    FUN_0041032c(param_1,param_3,0);
    *(undefined4 *)(param_1[1] + param_3 * 4) = uVar1;
  }
  return;
}


