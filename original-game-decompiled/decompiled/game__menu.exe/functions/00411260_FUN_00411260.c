
/* ==== FUN_00411260 @ 00411260 ==== 
 * signature: undefined __register FUN_00411260(int * param_1, int param_2, undefined4 param_3)
 * body: 00411260-00411289
 */

void FUN_00411260(int *param_1,int param_2,undefined4 param_3)

{
  FUN_004111a0(param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),1));
  FUN_00410448((int *)param_1[2],param_2);
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_00410e54(param_1);
  return;
}


