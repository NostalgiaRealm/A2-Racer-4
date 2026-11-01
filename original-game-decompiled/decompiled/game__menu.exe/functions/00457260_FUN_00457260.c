
/* ==== FUN_00457260 @ 00457260 ==== 
 * signature: undefined __register FUN_00457260(int * param_1, int param_2)
 * body: 00457260-00457279
 */

void FUN_00457260(int *param_1,int param_2)

{
  if (param_2 != param_1[0x21]) {
    param_1[0x21] = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


