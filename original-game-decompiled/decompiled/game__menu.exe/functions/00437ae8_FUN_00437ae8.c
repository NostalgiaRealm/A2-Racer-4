
/* ==== FUN_00437ae8 @ 00437ae8 ==== 
 * signature: undefined __register FUN_00437ae8(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00437ae8-00437b19
 */

void FUN_00437ae8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((int *)param_1[3] != (int *)0x0) {
    uVar1 = param_4;
    FUN_00437ae8((int *)param_1[3],param_4,param_3,param_4);
    param_3 = uVar1;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_00437ae8((int *)param_1[2],param_4,param_3,param_4);
  }
  FUN_00402f9c(param_1);
  return;
}


